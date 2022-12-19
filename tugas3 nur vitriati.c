#include<stdio.h>
#include<math.h>

main() {
	char jenis;
	int panjang, lebar, luas, keliling;
	float diagonal;
	printf("\nNama	:	Nur Vitriati");
	printf("\nNIM	:	32602200113");
	printf("\n\nKode Hitung Luas Persegi Panjang = L");
	printf("\n\Kode Hitung Keliling Persegi Panjang = K");
	printf("\n\nKode Hitung Diagonal Persegi Panjang = D");
	printf("%s \n\nMasukan Kode Perhitungan = ");
	scanf("%s", &jenis);
	printf("\n=============================================");
	
	if(jenis == 'L' || jenis == 'l' ) {
		printf("\n>>>>>Penghitungan Luas Persegi Panjang<<<<<");
		printf("\n\nMasukan Panjang = ");
		scanf("%i", &panjang);
		printf("\nMasukan Lebar = ");
		scanf("%i", &lebar);
		luas = panjang * lebar;
		printf("===========================================");
		printf("\nLuas Persegi Panjang Adalah %d",luas);
	}else if(jenis == 'K' || jenis == 'k' ) {
		printf("\n>>>>>Penghitungan Keliling Persegi Panjang<<<<<");
		printf("\n\nMasukan Panjang = ");
		scanf("%i", &panjang);
		printf("\nMasukan Lebar = ");
		scanf("%i", &lebar);
		
		keliling = 2 * (panjang + lebar);
		printf("\n==========================================");
		printf("\nKeliling Persegi Panjang = %i",keliling);
	}else if(jenis == 'D' || jenis == 'd') {
		printf("\n>>>>>Penghitungan Diagonal Persegi Panjang<<<<<");
		printf("\n\nMasukan Panjang = ");
		scanf("%i", &panjang);
		printf("\nMasukan Lebar = ");
		scanf("%i", &lebar);
		
		diagonal=sqrt (panjang*panjang + lebar*lebar);
		printf("\n===========================================");
		printf("\nDiagonal Persegi Panjang = %f",diagonal,panjang,lebar);
	}else
	printf("\nKode Tidak Valid");
}