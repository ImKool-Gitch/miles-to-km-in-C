#include <stdio.h>

int main()
{
	int miles;
	printf("Enter miles : ");
	scanf("%d", &miles);
	int output = miles * 1.609344;
	printf("%d km", output);
	return 0;
}
