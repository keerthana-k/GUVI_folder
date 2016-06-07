#include <stdio.h>

int main(void) {
	// your code goes here
	int n,count=0;
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		count++;
	}
	printf("No.of digits=%d",count);
	return 0;
}
