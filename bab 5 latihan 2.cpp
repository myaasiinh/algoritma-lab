#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

struct DAT {
    int id;
    char fname[20];
    char lname[20];
    char address[80];
    double salary;
    char tele_no[15];
}

struct NODE {

    DAT data;
    Node * N;
    Node * P;
    Node ( const int i, const char * f, so const char * l, const char * a, const double s, const char * t ) {
        data.id = i;
        strcpy ( data.fname, f );
        strcpy ( data.lname, l );
        strcpy ( data.address, a );
        data.salary = s;
        strcpy ( data.tele_no, t );
        N = NULL;
        P = NULL;
    }
};

class StackLinkedList {
    private:
    Node *front;
    public:
    StackLinkedList() {
        front = NULL;
    }
    StackLinkedList (){destroyList();}
    void push(Node *);
    Node * pop();
    void destroyList();
};

void StackLinkedList::push(Node *n) {
    if (front == NULL) {
        front = n;
    } else {
        n->N = front;
        front->P = n;
        front = n;
    }
}

Node * StackLinkedList::pop() {
    Node * temp;
    if (front == NULL ) {
        return NULL;
    } else if (front-> N == NULL ) {
        Node * temp = front;
        front = NULL;
        delete temp2;
        return temp;
    } else {
        Node * temp = front;
        front = front->N;
        front->P = NULL;
        temp->N = NULL;
        delete temp;
        return temp;
    }
}

void StackLinkedList::destroyList() {
    while (front != NULL) {
        Node * temp = front;
        front = front->N;
        delete temp;
    }
}

void disp(Node * N) {
    if (N == NULL ) {
        cout << "Empty List" << endl;
    } else {
        cout << "ID: " << N->data.id << endl;
        cout << "First Name: " << N->data.fname << endl;
        cout << "Last Name: " << N->data.lname << endl;
        cout << "Address: " << N->data.address << endl;
        cout << "Salary: " << N->data.salary << endl;
        cout << "Telephone Number: " << N->data.tele_no << endl;

    }
}

int main () {

    StackLinkedList * Stack = new StackLinkedList();
    Node No1(101, "Anggy", "Eka", "p", "Semarang 120", 7851243, 9475, "0750234121");
    Node No2(102, "Budi", "Santoso", "p", "Semarang 120", 7851243, 9475, "0750234121");
    Node No3(103, "Caca", "Santoso", "p", "Semarang 120", 7851243, 9475, "0750234121");

    Stack->push(&No1);
    Stack->push(&No2);
    Stack->push(&No3);

    disp(Stack->pop());
    disp(Stack->pop());
    disp(Stack->pop());

    delete Stack;
    return 0;

}