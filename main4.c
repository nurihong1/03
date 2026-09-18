#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	float num1,num2;
	
	printf("enter two intergers:");
	scanf("%f %f", &num1, &num2);
	
	if (num2 ==0) {
		printf("error: can't divide by zero.\n");
	} else {
		printf("%f/%f=%f\n",num1,num2,num1/num2);
	}
	
	return 0;
}