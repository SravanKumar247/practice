#include<stdio.h>
int main()
{
	int arr1[3]={2,3,4};
	int arr2[3]={5,6,7};
	int arr3[10]={0};
	int l=0,r=0,i=0;
	while(l<3&&r<3)
	{
		if(arr1[l]>arr2[r])
		{
			arr3[i]=arr2[r];
			r++;
			i++;
		}
		if(arr2[r]>arr1[l])
		{
			arr3[i]=arr1[l];
			l++;
			i++;
		}
		if(r>=3)
		{
		for(l;l<3;l++)
		{
			arr3[i]=arr1[l];
		        i++;
		}
		}
		if(l>=3)
		{
		for(r;r<3;r++)
		{
			arr3[i]=arr2[r];
		         i++;
		}
		}
			
	}
	for(int j=0;j<i;j++)
		printf("%d ",arr3[j]);
}

