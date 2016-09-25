#include <stdio.h>

int main()
{
	int a, b;

	for (a=1,b=-2;a<=50;a+=2,b-=2) {
		printf("%d, %d, ", a, b);
	}
}
