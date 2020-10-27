#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char str[16],*temp;
       printf("enter ip address:");
      scanf("%[^\n]s",str);
      temp=str;
      while(temp=strchr(temp,48))
      {
	      if(temp==str&&temp[1]!='.')
	      {
		      memmove(temp,temp+1,strlen(temp+1)+1);
		      temp--;
	      }
            else if(temp[-1]=='.'&&temp[1]!=0)
	     {
		     if(temp[1]!='.')
		     {
		   memmove(temp,temp+1,strlen(temp+1)+1);
		  temp--;
		     }
	     }
	  temp++;
      }
      printf("%s\n",str);
}

