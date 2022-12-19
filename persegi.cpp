///create in c++
#include <iostream>
using namespace std;
int main()
{
    int panjang;
    cout << "Masukkan panjang sisi: ";
    cin >> panjang;
    for (int i = 0; i < panjang; i++)
    {
        for (int j = 0; j < panjang; j++)
        {
            if (i == 0 || i == panjang - 1 || j == 0 || j == panjang - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << "\n";
    }
    return 0;
}


///pseudo code
// 1.  declare variable panjang
// 2.  print "Masukkan panjang sisi: "
// 3.  read panjang
// 4.  for i = 0 to panjang
// 5.      for j = 0 to panjang
// 6.          if i == 0 or i == panjang - 1 or j == 0 or j == panjang - 1
// 7.              print "* "
// 8.          else
// 9.              print "  "
// 10.         end if
// 11.     end for
// 12.     print "\n"
// 13. end for
// 14. return 0


