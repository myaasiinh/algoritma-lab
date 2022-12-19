#include <iostream>
using namespace std;
main()
{
    cout << "Nama: Muhammad Yaasiin Hidayatulloh \n";
    cout << "NIM: 32602200107\n\n";
    char h = 64, nama[4][3][13] = {
                     "Angsa",
                     "Anjing",
                     "Anoa",
                     "Banteng",
                     "Badak",
                     "Beruang",
                     "Camar",
                     "Capung",
                     "Cendrawasih",
                     "Dara",
                     "Domba",
                     "Duyung",
                 };
    printf("Daftar Hewan sesuai abjad : \n\n");
    for (int i = 0; i < 4; i++)
    {
        ++h;
        printf("Kelompok %c \n", h);
        for (int s = 0; s < 3; s++)
        {
            printf("%d. %s \n", s + 1, nama[i][s]);
        }
        printf("\n");
    }
}
