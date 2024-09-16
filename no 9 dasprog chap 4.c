#include <stdio.h>

int main (){

    int weekday_min, flat_rate, night_min, weekend_min, extra_min_cost, total_bill, average_cost, total_min, pretax, tax;

    printf("Weekdays minutes = ",weekday_min);
    scanf("%d", &weekday_min);

    printf("Night minutes = ",night_min);
    scanf("%d", &night_min);

    printf("Weekend minutes = ",weekend_min);
    scanf("%d", &weekend_min);

    total_min = 600 + night_min + weekday_min;
    extra_min_cost = (weekday_min - 600) * 0.4;
    total_bill = 39.99 + extra_min_cost + (39.99 * (5.25/100)) + (extra_min_cost * (5.25/100));
    average_cost = (39.99 + extra_min_cost) * 100 / total_min;
    pretax = 39.99 + extra_min_cost;
    tax = (39.99 * (5.25 / 100)) + (extra_min_cost * (5.25 / 100));

    printf("Pretax bill $%.2lf\n", (float)pretax);
    printf("Average min cost $%.2lf\n", (float)average_cost);
    printf("Taxes $%.2lf\n", (float)tax);
    printf("Total bill $%.2lf", (float)total_bill);


    
    return 0;
}