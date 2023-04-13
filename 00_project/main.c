#include <stdio.h>
#include <math.h>

#include "rumus.h"
void functions()
{
	printf("\nMasukan fungsi yang ingin diakses : ");
	printf("\n1. Menghitung luas lingkaran");
	printf("\n2. Menghitung luas permukaan bola");
	printf("\n3. Menghitung volume silinder");
	printf("\n4. Menghitung volume bola");
	printf("\n5. Menghitung volume kubus");
}

int main()
{
	char ulang = 'y';
	#include "variabel.h"

	printf("=======================================================");
	printf("\nNAMA 		: NUGROHO INDRA KURNIAWAN");
	printf("\nNRP		: 2042221031");
	printf("\nMK		: ALGORITMA DAN PEMROGRAMAN");
	printf("\nDEPARTEMEN	: DEPARTEMEN TEKNIK INSTRUMENTASI\n");
	printf("=======================================================");
	
	
	while (ulang == 'y' || ulang == 'Y')
	{

	functions();
	printf("\nPilih 1/2/3/4/5 : ");scanf("%f", &fungsi);
	
		while(fungsi < 1 || fungsi > 5)
		{
			printf("\n~ Mohon ulangi pemilihan fungsi ~");
			printf("\n");
			functions();
			printf("\nPilih 1/2/3/4/5 : ");scanf("%f", &fungsi);
		}
			if (fungsi == 1)
				{
					printf("\nMENGHITUNG LUAS LINGKARAN");
					printf("\nJari - jari (dalam satuan cm) = "); scanf("%f", &radius);
					hasil = luasLingkaran(radius);
					printf("\nLuas lingkarannya adalah = %f cm", hasil);	
				} else if(fungsi == 2)
				{
					printf("\nMENGHITUNG LUAS PERMUKAAN BOLA");
					printf("\nJari - jari (dalam satuan cm) = "); scanf("%f", &radius);
					hasil = luasPermukaanBola(radius);
					printf("\nLuas permukaan bolanya adalah = %f cm", hasil);		
				}else if(fungsi == 3)
				{
					printf("\nMENGHITUNG VOLUME SILINDER ");
					printf("\nJari - jari (dalam satuan cm) = "); scanf("%f", &radius);
					printf("\nTinggi (dalam satuan cm)= "); scanf("%f", &tinggi);
					hasil = volumeSilinder(radius, tinggi);
					printf("\nVolume silindernya adalah = %f cm", hasil);	
				}else if (fungsi == 4)
				{
					printf("\nMENGHITUNG VOLUME BOLA");
					printf("\nJari - jari (dalam satuan cm) = "); scanf("%f", &radius);
					hasil = volumeBola(radius);
					printf("\nVolume bolanya adalah = %f cm", hasil);	
				}else if(fungsi== 5)
				{
					printf("\nMENGHITUNG VOLUME KUBUS");
					printf("\nSisi (dalam satuan cm) = "); scanf("%f", &sisi);
					hasil = volumeKubus(sisi);
					printf("\nVolume kubusnya adalah = %f cm", hasil);		
				}
			printf("\nApakah ingin melakukan perhitungan lainnya (Y/n) = "); 
			scanf("%s", &ulang);
	}
	printf("\n~ TERIMA KASIH ~");
	printf("\n");
	return 0;
}