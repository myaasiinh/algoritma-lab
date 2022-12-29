#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
struct DAT{
	int id;
	char fname[20];
	char mname[20];
	char lname[20];
	char address[80];
	double salary;
	char tele_no[15];
};
Struct NODE {
	DAT data;
	NODE *N;
	NODE*P;
	NODE(const int i, const char * f, const char * m, const char * l, const char *ad, const double s, const char*tel)  {
              data.id = I;
	    strcpy(data.fname,f);
               strcpy(data.mname, m);
	     strcpy(data.lname, l);
	     strcpy(data.address, ad);
	     data.salary = s;
               strcpy(data.tele_no, tel);
	     N = NULL;
               P = NULL;
	}
};
class StackLinkedList {
	private: NODE * front;
	StackLinkedList () {
	       front = NULL;
	} ~StackLinkedList() {
		destroyList(); {
			void push(NODE*);
			NODE* pop();
			void destroyList();s
		}
	}
};
void StackLinkedList::push(NODE*n) {
	if ( front == NULL ) {
		front = n;
	} else {
	    front -> = n;
	    n -> N = front;
	   front = n;	
	}
}
NODE * StackLinkedList::pop() {
	NODE * temp;
	if ( front == NULL ) {
		return NULL;
	} else if (front -> N == NULL ) {
		NODE * temp2 = front;
		temp = temp2;
		front = NULL;
		return temp;
	} else {
	             NODE * temp2 = front;
		 temp = temp2;
		 front -> P = NULL;
		return temp;
	}
}
void StackLinkedList::destroyList() {
	while ( front != NULL ) {
		NODE* temp =  front;
		front = front -> N;
	}
}
void disp(NODE * N ) {
	if ( N == NULL ) {
		cout << “\nStack is Empty!!!” << endl;
	} else {
		cout << “\nId no. : “ <<N->data.id <<” “;
		cout << “\nFull Name : “ <<N->data.fname <<” “;
		cout  <<N->data.mname <<” “;
		cout <<N->data.lname <<endl;
		cout << “Adress  : “ <<N->data.adress << endl;
		cout << “Salary : “ <<setprecision(150) << N->data.salary << endl;
		cout << “\nTele no. : “ <<N->data.tele_no << endl << endl;
	}
}
int main() {
	StackLinkedList * Stack = new StackLinkedList();
	Node No1(101, “Anggy”, “Eka”, “P”, “Semarang 120”, 7851243.9475, “07502334121”);
	Node No2(101, “Wa Ode”, “Kanartia”, “Ningsi”, “Timor leste 121”, 5681125.9457, “07507534127”);
	Node No3(103, “Fatimah”, “Nurul”, “Intan”, “Irian Jaya 123”, 2344003.48345, “07578654129”);
	Stack -> push(&No1);
	Stack -> push(&No2);
	Stack -> push(&No3);
	disp(Stack->pop());
	disp(Stack->pop());
	disp(Stack->pop());
	disp(Stack->pop());
	return 0;
}
