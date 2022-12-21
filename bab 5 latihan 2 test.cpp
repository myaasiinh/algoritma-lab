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
};
struct NODE {
    DAT data;
    NODE *next;
    NODE *prev;
    NODE(int id, const char *fname, const char *lname, const char *address, double salary, const char *tele_no) {
        this->data.id = id;
        strcpy(this->data.fname, fname);
        strcpy(this->data.lname, lname);
        strcpy(this->data.address, address);
        this->data.salary = salary;
        strcpy(this->data.tele_no, tele_no);
        this->next = NULL;
        this->prev = NULL;
    }
};
class StackLinkedList {
    private:
        NODE *front;
    public:
        StackLinkedList() {
            front = NULL;
        }
        ~StackLinkedList() {
            destroyList();
        }
        void push(NODE *);
        NODE * pop();
        void destroyList();
};

void StackLinkedList::push(NODE *n) {
    if (front == NULL) {
        front = n;
    } else {
        n->next = front;
        front->prev = n;
        front = n;
    }
}

NODE * StackLinkedList::pop() {
    NODE * temp;
    if (front == NULL) {
        return NULL;
    } else if (front-> next == NULL) {
        NODE * temp = front;
        front = NULL;
        delete temp;
        return temp;
    } else {
        NODE * temp = front;
        front = front->next;
        front->prev = NULL;
        temp->next = NULL;
        delete temp;
        return temp;
    }
}

void StackLinkedList::destroyList() {
    while (front != NULL) {
        NODE * temp = front;
        front = front->next;
        delete temp;
    }
}


void disp(NODE *node) {
    if (node == NULL) {
        cout << "Empty List" << endl;
    } else {
        cout << "ID: " << node->data.id << endl;
        cout << "First Name: " << node->data.fname << endl;
        cout << "Last Name: " << node->data.lname << endl;
        cout << "Address: " << node->data.address << endl;
        cout << "Salary: " << node->data.salary << endl;
        cout << "Telephone Number: " << node->data.tele_no << endl;
    }
}

int main() {
    StackLinkedList *stack = new StackLinkedList();
    NODE *node1 = new NODE(101, "Anggy", "Eka", "Semarang 120", 7851243, "0750234121");
    NODE *node2 = new NODE(102, "Budi", "Santoso", "Semarang 120", 7851243, "0750234121");
    NODE *node3 = new NODE(103, "Caca", "Santoso", "Semarang 120", 7851243, "0750234121");
    stack->push(node1);
    stack->push(node2);
    stack->push(node3);
    disp(stack->pop());
    disp(stack->pop());
    disp(stack->pop());
    delete stack;
    return 0;
}