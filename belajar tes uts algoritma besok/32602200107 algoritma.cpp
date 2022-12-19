/*

if p * q = positive number
then ask for input type
if input type = A
then output = Apple
if input type = B
then output = Duck
next ask for amount
loop as much as the input entered
if p * q = negative number
then output = You cannot display the menu, program terminates

*/

//create in c++


#include <iostream>

using namespace std;

int main()
{
    double p, q;
    int amount;
    char input;
    cout << "Enter p: ";
    cin >> p;
    cout << "Enter q: ";
    cin >> q;
    if (p * q > 0.0)
    {
        cout << "Enter input type: ";
        cin >> input;
        if (input == 'A')
        {
            cout << "Apple" << endl;
        }
        else if (input == 'B')
        {
            cout << "Duck" << endl;
        }
    } else if (p * q < 0.0)
    {
        cout << "You cannot display the menu" << endl;
    }
    cout << "Enter amount: ";
    cin >> amount;
    for (int i = 0; i < amount; i++)
    {
        cout << input << endl;
    }
    return 0;
}
