#include<stdio.h>

int compare(char[],char[]);
int search(char[],char[]);

int main()
{
	char str[25],pat[25],rep[25],t[25],d[25];
	int ls=0,lp=0,lr=0;
	int i,j,l,l1=0,k=0;
	printf("\nEnter main string:");
	scanf("%s",str);
	printf("\nEnter pattern string:");
	scanf("%s",pat);
	printf("Enter replace string:");
	scanf("%s",rep);
	if(search(str,pat)==-1)
		printf("\npattern not found!!!!\n");
	else
	{
	   for(i=0;str[i]!='\0';i++)
	   ls++;
	   for(i=0;pat[i]!='\0';i++)
	   lp++;
	   for(i=0;rep[i]!='\0';i++)
	   lr++;
	   for(i=0;i<ls;i++)
	   { 
	      for(j=0;j<lp;j++)
	      t[j]=str[i+j];
	      t[j]='\0';
	      if(compare(t,pat)==0)
	      {
		k++;
		for(l=0;l<lr;l++)
		{
		 d[l1]=rep[l];
		 l1++;
		}
		i=i+(lp-1);
 	      }
	      else
	      {
	           d[l1]=str[i];
		   l1++;
	      }
	  }
	d[l1]='\0';
	printf("\nThe number of string =%d\n",k);
	printf("\nOriginal string =%s\n",str);
	printf("\nPattern string =%s\n",pat);
	printf("\nReplace string =%s\n",rep);
	printf("\nString after replacment =%s\n",d);
    }
}
int compare(char str1[],char str2[25])
{
	int i=0;
	while(str1[i]==str2[i]&&str1[i]!='\0')
	 i++;
	if(str1[i]>str2[i])
  	 return 1;
	else if(str1[i]<str2[i])
	 return-1;
	else
	 return 0;
}
int search(char src[],char str[])
{
 	int i,j,firstOcc;
	i=0,j=0;
	while(src[i]!='\0')
	{
	  while(src[i]!=str[0]&&src[i]!='\0')
	  i++;
	  if(src[i]=='\0')
	  return(-1);
	  firstOcc=i;
	  while(src[i]==str[j]&&src[i]!='\0'&&str[j]!='\0')
	{
	  i++;
	  j++;
	}
	if(str[j]=='\0')
	 return(firstOcc);
	if(src[i]=='\0')
	 return(-1);
	i=firstOcc+1;
	}
}

	


		 
