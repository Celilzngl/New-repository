#include<stdio.h>
#include<time.h>
#include<windows.h>
int main() {
	while(1) {
		
		
		time_t current_time;
		struct tm *time_info;
		time(&current_time);
		time_info = localtime(&current_time);
		system("cls");
		
		printf("Gerçek zamanlý saat\n");
		printf("---------\n");
		printf("%02d %02d %02d\n",
		time_info->tm_hour ,
		time_info->tm_min ,
		time_info->tm_sec) ;
		
		Sleep(1000);
	}
	
	
	
	
	
	return 0;
}
