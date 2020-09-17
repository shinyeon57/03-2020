#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char input;
	
	printf("input an alphabet : ");
	scanf("%c", &input);
	
	printf("the next character of %c(%d) is %c(%d)\n", input, input, input+1, input+1);
		
	return 0;
}
