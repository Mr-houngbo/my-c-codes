#include<stdio.h>
#include "main.h"
int main()
{
	int arr[] = {5, 2, 7, 1, 8, 3};
	int size = sizeof(arr)/sizeof(int);
	
	
	printf("Tableau original : ");
	print_array(arr, size);
	
	
	printf("Somme des éléments du tableau : %d\n", sum_array(arr, size));
	
	
	reverse_array(arr, size);
	printf("Tableau inversé : ");
	print_array(arr, size);
	
	
	printf("Valeur maximale du tableau : %d\n", find_max(arr, size));
	printf("Valeur minimale du tableau : %d\n", find_min(arr, size));
	
	
	sort_array(arr, size);
	printf("Tableau trié : ");
	print_array(arr, size);
	
	
	return 0;
}
int max(int a, int b)
{
	if(a>=b)
		return a;
	else
		return b;	
}
void print_array(int arr[], int size)
{
	int i=0;
	for(i=0;i<size;i++)
		{
			printf("%d ",arr[i]);
		}
	printf("\n");
}
int sum_array(int arr[],int size)
{
	int i=0,sum=0;
	for(i=0;i<size;i++)
		{
			sum+=arr[i];
		}
	return sum;
}
void reverse_array(int arr[], int size)
{
	int i=0,j=0,k=size-1;
	while(i<k)
		{
			j=arr[i];
			arr[i]=arr[k];
			arr[k]=j;
			i++;
			k--;
		}
}
int find_max(int arr[], int size)
{
	int i=0,maximum=arr[0];
	for(i=1;i<size;i++)
		{
				maximum=max(maximum,arr[i]);
		}
	return maximum;
}
int find_min(int arr[],int size)
{
	int i=0,minimum=-arr[0];
	for(i=1;i<size;i++)
		{
				minimum=max(minimum,-arr[i]);
		}
	return -minimum;
}
void sort_array(int arr[], int size)
{
	int i=0,j=0,maxi=0,tmp=0;
	for(i=size-1;i>=0;i--)
		{
			maxi=i;
			for(j=i;j>=0;j--)
				{
					if(max(arr[j],arr[maxi])==arr[j])
						maxi=j;
				}
			tmp=arr[maxi];
			arr[maxi]=arr[i];
			arr[i]=tmp;
		}
}
