#include<stdio.h>

int main() {
	int islem;
	int bakiye = 1000;
	int tutar;
	printf("��lemler:\n1:parayat�rma\n2:Para�ekme\n3:Havaleyat�rma\n4:Bakiyesorgulama\n5:Kartiade\n");
	scanf("%d",&islem);
	switch(islem) {
		case 1:
			printf("Bakiyeniz:%d\n",bakiye);
			printf("Yat�r�lacak Tutar:\n");
			scanf("%d",&tutar);
			
			
			bakiye += tutar;
			printf("Yeni bakiye: %d",bakiye);
			break;
		
			case 2:
			printf("Bakiyeniz:\n %d",bakiye);
			printf("�ekilecek Tutar:\n");
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
			printf("yat�r�lacak Tutar:\n");
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




	

