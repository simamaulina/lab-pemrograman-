#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
void daftar_menu();
void belanja();

void daftar_menu(){
	
	printf(" _________________________________________\n");
	printf("+    |                                    +\n");
	printf("| NO |  Menu                     Harga    |\n");
	printf("|____|____________________________________|\n");
	printf("+    |                                    +\n");
	printf("| 1. |  Hat                       50k     |\n");
	printf("| 2. |  T-shirt                   150k    |\n");
	printf("| 3. |  Sweater                   180k    |\n");
	printf("| 4. |  Hoodie                    200k    |\n");
	printf("|____|____________________________________|\n\n");
}
void belanja(){
	int pilih, uang, sisa;
	int harga[20]={50000,1500000,180000,200000};
	printf("Silahkan pilih yang pingin dibeli: ");
	scanf("%d", &pilih);
	if(pilih == 1){
		printf("Anda memilih Hat dengan harga %d\n", harga[0]);
		printf("Silahkan masukkan jumlah uang anda: \n");
		scanf("%d", &uang);
		sisa = uang - harga[0]; 
		printf("sisa uang anda: %d", sisa);
	}else if(pilih == 2){
		printf("Anda memilih T-shirt dengan harga %d\n", harga[1]);
		printf("Silahkan masukkan jumlah uang anda: \n");
		scanf("%d", &uang);
		sisa = uang - harga[1]; 
		printf("sisa uang anda: %d", sisa);
	}else if(pilih == 3){
		printf("Anda memilih Sweater dengan harga %d\n", harga[2]);
		printf("Silahkan masukkan jumlah uang anda: \n");
		scanf("%d", &uang);
		sisa = uang - harga[2]; 
		printf("sisa uang anda: %d", sisa);
	}else if(pilih == 4){
		printf("Anda memilih Hoodie dengan harga %d\n", harga[3]);
		printf("Silahkan masukkan jumlah uang anda: \n");
		scanf("%d", &uang);
		sisa = uang - harga[3]; 
		printf("sisa uang anda: %d\n", sisa);
	}
}
int main(){
	int pilih;
	char enter;
	do{
	printf("##=>>Selamat datang di ClothesOnYou<<=##\n\n");
	printf("1. Daftar menu\n");
	printf("2. Belanja\n");
	printf("3. Keluar\n\n");
	printf("Pilihan anda : ");
	scanf(" %d", &pilih);

		if(pilih == 1){
		daftar_menu();
		printf("Ingin kembali ke menu(y/n)");
		scanf(" %c", &enter);
		}
		if(pilih == 2){
			belanja();
		}
		if(pilih == 3){
			printf("##Terimakasih telah berbelanja##\n");
		}
	}while(tolower(enter) == 'y');
	return 0;
}