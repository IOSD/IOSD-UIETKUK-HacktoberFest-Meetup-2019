#include<stdio.h>
#include<stdlib.h>
 
int current_date, birth_date, calculated_date, current_month, birth_month, calculated_month, current_year, birth_year, calculated_year;
 
void year(int current_date, int current_month, int current_year, int birth_date, int birth_month, int birth_year)
{
      if(birth_date > current_date)
      {
            current_month = current_month - 1;
            current_date = current_date + 30;
      }
      if(birth_month > current_month)
      {
            current_year = current_year - 1;
            current_month = current_month + 12;
      }
      if(birth_year > current_year)
      {
            exit(0);
      }
      calculated_date = current_date - birth_date;
      calculated_month = current_month - birth_month;
      calculated_year = current_year - birth_year;
      printf("\nPresent Age\nYears: %d\tMonths: %d\tDays: %d\n",calculated_year, calculated_month, calculated_date);
}
 
int main()
{
      printf("\nEnter Current Date Details (In Numerical Figures)\n");
      printf("Enter Today's Date:\t");
      scanf("%d", &current_date);
      printf("Enter Current Month:\t");
      scanf("%d", &current_month);
      printf("Enter Current Year:\t");
      scanf("%d", &current_year);
      printf("\nEnter Your Birth Details (In Numerical Figures)\n");
      printf("Enter Day:\t");
      scanf("%d", &birth_date);
      printf("Enter Month:\t");
      scanf("%d", &birth_month);
      printf("Enter Year:\t");
      scanf("%d", &birth_year);
      year(current_date, current_month, current_year, birth_date, birth_month, birth_year);
      return 0;
}
