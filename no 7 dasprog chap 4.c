
#include <stdio.h>
#include <math.h>

int leap(int year){
        if (year % 400 == 0)
        {
            return 1;
        }
        else if(year % 100 == 0)
        {
            return 0;
        }
        else if (year % 4 == 0)
        {
            return 1;
        }
        else {
            return 0;
        }
   }

int main (){

    int dayYear, year, day, month, dayMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf("Input month date, year ",day ,month ,year);
    scanf("%d %d, %d", &month, &day, &year);

   for (int i = 0; i < month -1 ; i++){
        dayYear += dayMonth[i];
        if(i == 1 && leap(year)){
        dayYear++;
        }
   }
   
   dayYear += day;

   printf("Day of the year: %d\n", dayYear);


    return 0;
}