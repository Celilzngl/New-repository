#include<stdio.h>
int main() {
	int faktoriyel = 1 ;
	int n;
	printf("Faktoriyeli alýnmasýný istediðiniz sayýyý girin:");
	scanf("%d",&n);
	while( n != 0) {
		
		faktoriyel = n * faktoriyel;
		
		n--;
	}
	printf("Faktoriyel: %d",faktoriyel);
	
	
	
	
	
	
	return 0;
}
