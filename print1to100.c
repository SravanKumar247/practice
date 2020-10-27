#include<stdio.h>
void print(int);
int main()
{
	int i=100;
	print(i);
}
void print(int i)
{
	int a=i;
	if(i!=1)
		print(--a);
	printf("%d\n",i);
	return;
}
