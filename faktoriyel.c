#include<stdio.h>
int main() {
	int faktoriyel = 1 ;
	int n;
	printf("Faktoriyeli al�nmas�n� istedi�iniz say�y� girin:");
	scanf("%d",&n);
	while( n != 0) {
		
		faktoriyel = n * faktoriyel;
		
		n--;
	}
	printf("Faktoriyel: %d",faktoriyel);
	
	
	
	
	
	
	return 0;
}
