#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	
	printf("input the second :");
	scanf("%d", &x);
	
	printf("The time for %d second if %d : %d : %d", x, x/3600, (x%3600)/60, x%3600%60 );
	return 0;
}
