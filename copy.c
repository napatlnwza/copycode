#include <stdio.h>

int main() {
	float divide,n,n1;
	printf("Enter Num1 : ");
	scanf("%f" ,&n);
	printf("Enter Num2 : ");
	scanf("%f" ,&n1);
	if (n1 == 0) {
		printf("Cannot divide by zero");
	}
	else if ( n1 != 0) {
		divide=n/n1;
		printf("Answer is %.2f" ,divide);
	}
	return 0;
}