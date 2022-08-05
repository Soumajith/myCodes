#include<stdio.h>
#include<string.h>

int main()
{
	
	char leftStr[] = "BITS";
	char rightStr[] = "Pilani";
	
	// Using strcmp()
	int res = strncmp(leftStr, rightStr,3);
	
	if (res==0)
		printf("Strings are equal");
	else
		printf("Strings are unequal");
	printf("\nValue returned by strcmp() is: %d" , res);
	return 0;
}