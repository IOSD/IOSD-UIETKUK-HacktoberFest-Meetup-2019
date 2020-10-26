#include <stdio.h>
int main()
{
	
	int a[100];
	int n;
	printf("Enter the size of array:- ");
	scanf("%d",&n);
	printf("Enter the elements:- ");
	for(int i = 0; i<n ; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Which operation do you want to perform?\n");
	printf("1. Traversing the array\n2. Insertion in the array\n3. Deletion in the array\n4. Sorting the array\n5. Linear search in the array\n");
	int c;
	printf("Enter your choice(in number from 1 to 5)\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1: ;
			for(int i = 0; i<n ; i++)  //Traversing and printing the elements
			{
				printf("%d ", a[i]);
			}
			break;
		case 2:  ;
			int pos,val;
			printf("Enter the value to be inserted:- "); //Insertion in an Array
			scanf("%d",&val);
			printf("Enter the position to be inserted:-");
			scanf("%d",&pos);
			/* If position of element is not valid */
              if(pos > n+1 || pos <= 0)
    {
        printf("Invalid position! Please enter position between 1 to %d", n);
    }
    else
    {
       
         /* Make room for new array element by shifting to right */
			for(int i = n ; i>=pos; i--)
			{
				a[i] = a[i-1];
			}
			/* Insert new element at given position and increment size */
			a[pos-1] = val;
			n+=1;
			printf("New Array\n");
			for(int i = 0; i<n ; i++)
			{
				printf("%d ",a[i]);
			}
    }
			break;
		case 3: ;
			int position;
			printf("Enter the position to be deleted:-"); //Deletion in an Array
			scanf("%d",&position);
			 /* Invalid delete position */
            if(pos < 0 || pos > n)
            {
              printf("Invalid position! Please enter position between 1 to %d", n);
             }
           else
           {
        
            /* Copy next element value to current element */
			for(int i = position-1 ; i<n-1 ; i++)
			{
				a[i] = a[i+1];
			}
			/* Decrement array size by 1 */
              n--;
			printf("New array\n");
			for(int i = 0;i<n;i++)
			{
				printf("%d ",a[i]);
			}
           }
			break;
		case 4: ;
			int temp;
			for(int i=0 ; i<n-1 ;i++)
			{
				for(int j=0 ; j<n-i-1 ;j++) //bubble sort
				{
					if(a[j]>a[j+1])
					{
						temp = a[j];
						a[j] = a[j+1]; //swapping of elements
						a[j+1] = temp;
					}
				}
			}
			printf("New array\n");
			for(int i = 0;i<n;i++) //printing the new array formed
			{
				printf("%d ",a[i]);
			}
			break;
		case 5: ;
			int value;
			printf("Enter the value to be searched:-"); //linear search
			scanf("%d",&value);
			for(int i = 0;i<n;i++)
			{
				if(a[i] == value)
				{
					printf("The value is present in array at position %d" , i+1 );
					break;
				}
			}
			printf("Element could not be found");
			break;
	}
    return 0;

}