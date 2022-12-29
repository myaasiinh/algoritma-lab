#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

struct DAT
{
    int id;
    char fname[20];
    char mname[20];
    char lname[20];
    char address[80];
    double salary;
    char tele_no[15];
};

struct NODE
{
    DAT data;
    NODE *N;
    NODE*P;
    NODE(const int i , const char *f, const char *m, const char *l, const char *ad, const double s, const char *tel)
    {
        data.id = i;
        strcpy(data.fname,f);
        strcpy(data.mname,m);
        strcpy(data.lname,l);
        strcpy(data.address,ad);
        data.salary = s;
        strcpy(data.tele_no,tel);
        N = NULL;
        P = NULL;
    }
};

class StackLinkedList
{
    private:
        NODE *front;
    public:
        StackLinkedList(){front = NULL;}
        ~StackLinkedList(){destroyList();}
        void push(NODE *);
        NODE* pop();
        void destroyList();
};

void StackLinkedList::push(NODE *n)
{
    if(front == NULL)
    {
        front = n;
    }
    else
    {
        front->P = n;
        n->N = front;
        front = n;
    }
}

NODE* StackLinkedList::pop()
{
    NODE *temp;
    if(front == NULL) //no nodes
        return NULL;
    else if(front->N == NULL) //there is only one node
    {
        NODE *temp2 = front;
        temp = temp2;
        front = NULL;
        delete temp2;
        return temp;
    }
    else //there are more than one node
    {
        NODE *temp2 = front;
        temp = temp2;
        front = front->N;
        front->P = NULL;
        delete temp2;
        return temp;
    }
}

void StackLinkedList::destroyList()
{
    while(front != NULL)
    {
        NODE *temp = front;
        front = front->N;
        delete temp;
    }
}

void disp(NODE *N)
{
    if(N == NULL)
    {
        cout << "\nStack is Empty!!!" << endl;
    }
    else
    {
        cout << "\nId No. : " << N->data.id <<" ";
        cout << "\nFull Name : " << N->data.fname << " ";
        cout << N->data.mname << " ";
        cout << N->data.lname << endl;
        cout << "Address : " << N->data.address << endl;
        cout << "Salary : " << setprecision(15) << N->data .salary << endl;
        cout << "Telephone No. : " << N->data.tele_no << endl;
    }
}

int main()
{
    StackLinkedList S;
    NODE *N;
    int i;
    char f[20], m[20], l[20], ad[80], tel[15];
    double s;
    for(i = 0; i < 3; i++)
    {
        cout << "Enter Id No. : ";
        cin >> i;
        cout << "Enter First Name : ";
        cin >> f;
        cout << "Enter Middle Name : ";
        cin >> m;
        cout << "Enter Last Name : ";
        cin >> l;
        cout << "Enter Address : ";
        cin >> ad;
        cout << "Enter Salary : ";
        cin >> s;
        cout << "Enter Telephone No. : ";
        cin >> tel;
        N = new NODE(i,f,m,l,ad,s,tel);
        S.push(N);
    }
    cout << "\n\n";
    for(i = 0; i < 3; i++)
    {
        N = S.pop();
        disp(N);
    }
    return 0;
}
