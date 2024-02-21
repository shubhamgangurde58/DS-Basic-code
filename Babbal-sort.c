#include<stdio.h>
int main()
{
	int a[]={30,20,10,5,40,50,2,1};
	int j;
		//printf("%d,",a[j]);
		for( int i=0;i<8;i++)
		{
			for( j=0;j<8;j++)
			{
				if(a[j]>a[j+1])
				{	
					int temp=0;
					temp = a[j];
					a[j] = a[j+1];
					a[j+1] = temp;
				}
				
				printf("%d,",a[j]);
			}
			printf("\n");
		}
	return 0;
}