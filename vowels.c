#include <stdio.h>

int main(void) {
	// your code goes here
	char v[5]={'a','e','i','o','u'};
	char ch;
	int i,flag=0;
	scanf("%c",&ch);
	for(i=0;i<5;i++)
	{
	if(ch==v[i])
	flag=1;
	}
	if(flag==1)
	printf("vowels");
	else
	printf("consonents");
	return 0;
}
