#include<bits/stdc++.h>
using namespace std;

stack<char>s;

int priority(char s) {
    if(s == '^') return 100;
    else if(s == '*' || s == '/') return 50;
    else if(s == '+' || s == '-') return 20;
    else return 0;
}

int main() {
    string infix, postfix = "";
    cin >> infix;

    for(int i = 0; i < infix.size(); i++) {
        char symbol = infix[i];
        if(symbol >= '1' && symbol <= '9') {
            postfix += symbol;
        }
        else if(symbol == '(') {
            s.push(symbol);
        }
        else if(symbol == ')') {
            while(!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            s.pop();
        }
        else {
            while(!s.empty() && priority(s.top()) >= priority(symbol)) {
                postfix += s.top();
                s.pop();
            }
            s.push(symbol);
        }
    }

    while(!s.empty()) {
        postfix += s.top();
        s.pop();
    }

    cout << "The postfix expression is: " << postfix << "\n";

    //part 2
    stack<char>s2;

    for(int i = 0; i < postfix.size(); i++) {
        char symbol = postfix[i];
        if(symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/') {
            int a = s2.top()-48;
            s2.pop();
            int b = s2.top()-48;
            s2.pop();

            int c;

            if(symbol == '+') {
                c = b + a;
            }
            else if(symbol == '-') {
                c = b - a;
            }
            else if(symbol == '*') {
                c = b * a;
            }
            else {
                c = b / a;
            }

            s2.push((char)(c + 48));
        }
        else {
            s2.push(symbol);
        }
    }

    cout << s2.top() - 48 << endl;

    return 0;
}
