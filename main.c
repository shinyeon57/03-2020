#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a;
	float b;
	
	printf("input two integers : ");
	scanf("%d %f", &a,&b);
	
	printf("the result is %f\n", a/b);

	return 0;
}
