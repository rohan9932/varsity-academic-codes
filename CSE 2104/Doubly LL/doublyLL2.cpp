#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* next;
    node* prev;
};

node* root = NULL;
node* tail = NULL;

//print
void printingF() {
    node* temp = root;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}

void printingB() {
    node* temp = tail;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << "\n";
}

//searching
void searchingF(int data) {
    node* temp = root;
    while(temp != NULL) {
        if(temp->data == data) {
            cout << "Data Found.\n";
            return;
        }
        temp = temp->next;
    }
    cout << "Data not found.\n";
}

void searchingB(int data) {
    node* temp = tail;
    while(temp != NULL) {
        if(temp->data == data) {
            cout << "Data Found.\n";
            return;
        }
        temp = temp->prev;
    }
    cout << "Data not found.\n";
}

//3
void printFirst() {
    cout << root->data << "\n";
}

//4
void printLast() {
    cout << tail->data << "\n";
}

//5
void printSecLast() {
    cout << tail->prev->data << "\n";
}

//6
void printrev() {
    node* temp = tail;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << "\n";
}

//7
void insertFirst(int data) {
    node* temp = new node();
    temp->data = data;

    if(root == NULL && tail == NULL) {
        temp->prev = NULL;
        temp->next = NULL;
        root = tail = temp;
    }
    else {
        temp->prev = NULL;
        temp->next = root;
        root->prev = temp;
        root = temp;
    }
}

//8
void insertLast(int data) {
    node* temp = new node();
    temp->data = data;

    if(tail == NULL) {
        temp->prev = NULL;
        temp->next = NULL;
        root = tail = temp;
    }
    else {
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

//9
void delFirst() {
    if(root == NULL) {
        cout << "DLL is empty.\n";
        return;
    }

    if(root->next == NULL) {
        root = tail = NULL;
    }
    else {
        root = root->next;
        root->prev = NULL;
    }
}

int main() {
    node *p, *q, *r;
    p = new node();
    q = new node();
    r = new node();

    p->data = 10;
    q->data = 20;
    r->data = 30;

    p->next = q;
    q->next = r;
    r->next = NULL;

    r->prev = q;
    q->prev = p;
    p->prev = NULL;

    root = p;
    tail = r;

    printingF();
    printingB();

    searchingF(70);
    searchingB(90);

    printFirst();
    printLast();
    printSecLast();

    printrev();

    insertFirst(50);
    printingF();
    printingB();

    insertLast(70);
    printingF();
    printingB();

    return 0;
}

