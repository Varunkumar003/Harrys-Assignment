#include<stdio.h>
int main()
{
int n,n1,t=0,i,min=10000,min_ind,c=0;
scanf("%d",&n);
int arr[n];
char str[n][50];
n1=n;
while(n1--)
{
scanf("%d",&arr[t]);
if(arr[t]!=-1)
scanf("%s",str[t]);
t++;
}
for(i=0;i<n;i++)
{
if(arr[i]==-1)
{
printf("%d %s\n",c-1,str[min_ind]);
min=10000;
c=0;
}
else if(arr[i]<min)
{
min=arr[i];
min_ind=i;
c++;
}
}
return 0;
}

