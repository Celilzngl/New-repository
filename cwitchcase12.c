#include<stdio.h>

int main() {
	int islem;
	int bakiye = 1000;
	int tutar;
	printf("İşlemler:\n1:parayatırma\n2:Paraçekme\n3:Havaleyatırma\n4:Bakiyesorgulama\n5:Kartiade\n");
	scanf("%d",&islem);
	switch(islem) {
		case 1:
			printf("Bakiyeniz:%d\n",bakiye);
			printf("Yatırılacak Tutar:\n");
			scanf("%d",&tutar);
			
			
			bakiye += tutar;
			printf("Yeni bakiye: %d",bakiye);
			break;
		
			case 2:
			printf("Bakiyeniz:\n %d",bakiye);
			printf("Çekilecek Tutar:\n");
			scanf("%d",&tutar);
			if (tutar > bakiye) {
				printf("Bakiye Yetersiz");
			}
			else {
					bakiye -= tutar;
			}
		
			break;
		
			case 3:
			printf("Bakiyeniz:%d\n",bakiye);
			printf("yatırılacak Tutar:\n");
			scanf("%d",&tutar);
		
			bakiye += tutar;
			break;
		
			case 4:
			printf("Bakiyeniz:%d\n",bakiye);
			break;
			
		
			case 5:
			printf("Kart iade edildi");
			break;
		
		
	}
	
	
	
	return 0;
}




	

