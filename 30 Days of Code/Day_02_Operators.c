/* Task
Given the meal price (base cost of a meal), tip percent (the percentage of the meal price being added as tip), and tax percent (the percentage of the meal price being added as tax) for a meal, find and print the meal's total cost. Round the result to the nearest integer.   */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>  

void solve(double meal_cost, int tip_percent, int tax_percent)
{
    float total_tip_percent = (tip_percent * meal_cost) / 100;
    float total_tax_percent = (tax_percent * meal_cost) / 100;

    int Total = round(meal_cost + total_tip_percent + total_tax_percent);
    printf("%d", Total);
}

int main()
{
    double meal_cost;
    int tip_percent;
    int tax_percent;

    scanf("%lf", &meal_cost);
    scanf("%d", &tip_percent);
    scanf("%d", &tax_percent);
    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}
