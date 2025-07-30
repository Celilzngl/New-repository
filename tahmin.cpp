#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	int sayi,deneme,tahmin = 0;
	srand(time(NULL));
	sayi = rand() % 100 +1;
	printf("1 ile 100 arasýnda sayýyý tahmin etmeye çalýþýn");
	do {
		deneme ++;
		scanf("%d",&tahmin);
		if(tahmin > sayi) {
			printf("Daha kucuk bir sayi söylemeye calisin");
		}
		else if(tahmin<sayi){
			printf("Daha buyuk bir sayi söylemeye calisin");
		}
		else {
			printf("Tebrikler %d denemede buldunuz",deneme);
		}
	}while(tahmin != sayi);
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
