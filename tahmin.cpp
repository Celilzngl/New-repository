#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	int sayi,deneme,tahmin = 0;
	srand(time(NULL));
	sayi = rand() % 100 +1;
	printf("1 ile 100 aras�nda say�y� tahmin etmeye �al���n");
	do {
		deneme ++;
		scanf("%d",&tahmin);
		if(tahmin > sayi) {
			printf("Daha kucuk bir sayi s�ylemeye calisin");
		}
		else if(tahmin<sayi){
			printf("Daha buyuk bir sayi s�ylemeye calisin");
		}
		else {
			printf("Tebrikler %d denemede buldunuz",deneme);
		}
	}while(tahmin != sayi);
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
