#include<stdio.h>
#include<stdlib.h>
int main()
{
	int list[5]={50,100,40,200,300};
	char ip_item[12]={0};
	int ip_item1[5]={0};
	int ip_quantity[5]={0};
	char arr[1];
	float sum=0,total=0;
	int i=0,j=0,z=0;
	fgets(ip_item,12,stdin);
		for(i=0;;i++)
		{
		  if(ip_item[i]==10)
			  break;
		  if(ip_item[i]!=32)
			ip_item1[j++]=ip_item[i]-48;
		  if(i>9||ip_item1[j-1]>5||ip_item1[j-1]<1)
		  {
			  printf("invalid input\n");
			  return 0;
		  }
		}
		for(i=0;i<j;i++)
		{
			scanf("%d",ip_quantity+i);
		}
		if(i>j)
		{
			printf("invalid entry\n");
			return 0;
		}
               __fpurge(stdin);
	scanf("%c",&arr[0]);
	for(i=0;i<j;i++)
	{
		sum=sum+(list[ip_item1[i]-1]*ip_quantity[i]);
	}
	if(arr[0]=='y'&&sum>1000)
		total=sum-sum*15/100;
	else if(arr[0]=='y'&&sum<1000)
		total=sum-sum*5/100;
	else if(arr[0]=='n'&&sum>1000)
		total=sum-sum*10/100;
	else if(arr[0]=='n'&&sum<1000)
		total=sum;
	printf("%f\n",total);
}
