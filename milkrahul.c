#include<stdio.h>
enum{mon=0,tue,wen,thr,fri,sat,sun};
int main()
{
	char arr[7];
	int total=0;
	for(int i=0;i<7;i++)
	{
		scanf("%c",arr+i);
		getchar();
	}
	if(arr[mon]=='W')
		total=total+1;
	if(arr[tue]=='W')
		total=total+1;
	if(arr[wen]=='W'||arr[wen]=='B')
		total=total+1;
	if(arr[thr]=='W')
		total=total+1;
	if(arr[fri]=='W'||arr[fri]=='B')
		total=total+1;
	if(arr[sat]=='W'||arr[sat]=='B')
		total=total+1;
	if(arr[sun]=='W')
		total=total+1;
	printf("%d\n",total);
}
