#include<stdio.h>
int main()
{
	int a[10];
	int n,i,j,tem;
	printf("enter the number of integers to be sorted\n");
	scanf("%d",&n);
	printf("enter the integers to be sorted\n");
	for (i=0;i<n;i++)
	{
   		printf("enter the element \n");
   		scanf("%d",&a[i]);
	}
	for (i=0;i<n-1;i++)
	{
 		for (j=0;j<n-1-i;j++)
		{
 			if (a[j]>a[j+1])
			{ 
 				tem = a[j];
 				a[j] =a[j+1];
 				a[j+1] = tem;
			}
		}
	}
	int first,last,mid,key;
	first =0;
	last =n-1;
	printf("enter the key element\n");
	scanf("%d",&key);
	while(first<=last)
	{
		mid =(first+last)/2;
		if(key == a[mid])
		{
			printf("elements %d found at %d\n",a[mid],mid+1);
			return 1;
		}
		else if (key<a[mid])
		{
			last =mid-1;
		}
		else 
		{
			first =mid+1;
		}
	}
	printf("element %d not found ",key);
	return 0;
}


