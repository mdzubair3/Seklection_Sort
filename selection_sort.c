/* Selection Sort
Date: 15-09-2020*/
#include<stdio.h>
#include<stdlib.h>

void SelectionSort(int *list,int n );
int main()
{
	int i,n,*list;
	printf("Please Enter the number of elements in list:");
	scanf("%d",&n);
	list=(int*)malloc(n*sizeof(int));
	printf("\nEnter the elements of list....\n");
	for(i=0;i<n;i++)
	{
         scanf("%d",&list[i]);
  	}
  	SelectionSort(list,n);
  	return 0;
}

void SelectionSort(int *list,int n)
{

	int temp=0,min,i,j;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(list[j]<list[min])
				min=j;

		}
		temp=list[i];
		list[i]=list[min];
		list[min]=temp;
	}
	printf("Sorted List...\n");
	for(i=0;i<n;i++)
		printf("%d\t",list[i]);
}
