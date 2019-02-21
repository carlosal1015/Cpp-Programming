#include<stdio.h>

int	main() {
	int upper = 0, lower = 0,digit=0,special=0;
	char ch[80];
	int i;

	printf("\nEnter The String : ");
	gets(ch);

	for(i = 0; ch[i]!='\0';i++){
		if (ch[i] >= 'A' && ch[i] <= 'Z')	upper++;
		else if (ch[i] >= 'a' && ch[i] <= 'z')	lower++;
		else if(ch[i] >='0' && ch[i] <='9')	digit++;
		else if(ch[i]!=' ')	special++;
	}

	printf("\nUppercase Letters : %d", upper);
	printf("\nLowercase Letters : %d", lower);
	printf("\nDigits : %d", digit);
	printf("\nSpecial Characters : %d",special);

	return 0;
}