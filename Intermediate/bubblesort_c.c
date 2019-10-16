#include <stdio.h>
int comparisions=0,total_swaps=0;/*variables to store total comparisions and swaps made*/
void bubblesort(long long int numbers[],int n); /*defining the bubble sort function*/
int main(void)
{
	int n;
  printf("enter the number of numbers to be entered: ");
  scanf("%d",&n);
	long long int numbers[n];
  printf("enter the numbers\n")
  for (int i=0;i<n;i++)
		scanf("%lld,",&numbers[i]); /*storing of the numbers in the array numbers*/
        bubblesort(numbers,n); /*first call of the bubble sort function*/
	for (int i=0;i<n;i++)
		printf("%lld ",numbers[i]); /*printing of the sorted array*/
	printf("\n%d %d",total_swaps,comparisions);
}


void bubblesort(long long int numbers[],int n)
{
		for (int i=0;i<=n-2;i++)
		{

			for (int j=0;j<=n-i-2;j++)
			{

			        if (numbers[j+1]<numbers[j])/*checking the adjacent numbers and swapping them if necessary*/
			        {
				        int a=numbers[j+1];
				        numbers[j+1]=numbers[j];
				        numbers[j]=a;
				        total_swaps++;
			        }
			        comparisions++;/*after each comparision incrementing comparision's count*/
			}

		}

}
