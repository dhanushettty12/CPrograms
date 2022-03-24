#include<stdio.h>
#include<math.h>
int main()
{
int i,n;
float a[10],mean,sd,sum,var;
float *p;
printf("enter number of elemnets\n");
scanf("%d",&n);
printf("input elementsare : \n");
for (i=0;i<n;i++)
{
sacnf("%f",&*p);
p++;
}
p=a;
sum=sd=mean=var=0;
for(i=0;i<n;i++)
{
 sum=sum+(*p)
 p++
}
mean =sum/n;
p=a;
for(i=0;i<n;i++)
{
var=var+pow(*p-mean),2);
p++;
}
var=var/n;
sd=sqrt(var);
printf("mean=%f\nsum=%f\nsd=%f\nvar=%f\n",mean,sum,var,sd);
return 0;
}


