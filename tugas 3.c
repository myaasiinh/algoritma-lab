#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main ()  {

	char  jenis;
	int panjang, lebar;
	printf(“ Fungsi persegi panjang\n”);
	printf(“ Luas ( L )\n”);
	printf(“ Keliling ( K )\n”);
	printf(“ Diagonal ( D)\n”);
	printf(“pilih fungsi persegi panjang: “);
	scanf(“%s”, &jenis);

	jenis = tolower(jenis);
	if ( jenis != ‘l’ && jenis != ‘k’ && jenis != ‘d’ ) {
			printf( “ fungsi yang anda masukkan salah”);
			return 0;		
}
	printf( “ Masukan panjang : “);
	scanf(“%d”, &panjang);
	printf(“Masukan lebar: “);
	scanf(“%d”, &lebar);
	if  ( jenis == ‘l’)  {

	int luas = panjang * lebar;
	printf(“Luas = %d”, luas);
	} else if ( jenis == ‘k’ )  {
	int keliling = ( 2 * panjang ) + ( 2 * lebar ) ;
	printf( “ keliling = %d”, keliling);
	} else if ( jenis == ‘d’) {
	float diagonal = sqrt ( ( panjang * panjang ) + ( lebar * lebar) );
	} 
	return 0;
}
