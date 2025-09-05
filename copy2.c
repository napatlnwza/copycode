#include <stdio.h>

int main() {
	float ch,num,ans;
	printf("1.feet to meter\n");
	printf("2.meter to feet\n");
	printf("Selec your choice : ");
	scanf("%f" ,&ch);
	if (ch == 1) {
		printf("Enter feet : ");
		scanf("%f" ,&num);
		ans=num/3.28;
		printf("Answer is %.2f" ,ans);
	}
	else if (ch == 2) {
		printf("Enter meter : ");
		scanf("%f" ,&num);
		ans=num*3.28;
		printf("Answer is %.2f" ,ans);
    }
    else {
    	printf("NoNoNo");
	}
	return 0;
}