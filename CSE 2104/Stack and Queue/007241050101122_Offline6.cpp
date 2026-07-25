#include<bits/stdc++.h>
using namespace std;

int priority(char s) {
    if(s == '^') return 100;
    else if(s == '*' || s == '/') return 50;
    else if(s == '+' || s == '-') return 20;
    else return 0;
}

int main() {
    string infix, postfix = "";
    getline(cin, infix);

    stack<char> s;
    for(int i = 0; i < infix.size(); i++) {

        if(infix[i] == ' ')
            continue;

        char symbol = infix[i];

        
        if(isdigit(symbol)) {
            while(i < infix.size() && isdigit(infix[i])) {
                postfix += infix[i];
                i++;
            }
            postfix += ' '; 
            i--;             
        }

        else if(symbol == '(') {
            s.push(symbol);
        }

        else if(symbol == ')') {
            while(!s.empty() && s.top() != '(') {
                postfix += s.top();
                postfix += ' ';
                s.pop();
            }
            s.pop();
        }

        else { 
            while(!s.empty() && priority(s.top()) >= priority(symbol)) {
                postfix += s.top();
                postfix += ' ';
                s.pop();
            }
            s.push(symbol);
        }
    }

    while(!s.empty()) {
        postfix += s.top();
        postfix += ' ';
        s.pop();
    }

    cout << "The postfix expression is: " << postfix << "\n";

    stack<int> s2; 

    stringstream ss(postfix);
    string token;

    while(ss >> token) {
        if(isdigit(token[0])) {
            s2.push(stoi(token));
        }
        else {
            int a = s2.top(); s2.pop();
            int b = s2.top(); s2.pop();

            int c;

            if(token == "+")       c = b + a;
            else if(token == "-")  c = b - a;
            else if(token == "*")  c = b * a;
            else if(token == "/")  c = b / a;
            else if(token == "^")  c = pow(b, a);

            s2.push(c);
        }
    }

    cout << s2.top() << endl;

    return 0;
}