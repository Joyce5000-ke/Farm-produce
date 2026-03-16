#include <stdio.h>

int main() {
    int cows;
    float average_amount, cost_of_production, total_milk, total_cost;

    printf("Enter the number of cows in the farm: ");
    scanf("%d", &cows);

    printf("Enter the average amount of milk produced per cow per day (in liters): ");
    scanf("%f", &average_amount);

    printf("Enter the cost of milk per liter (in local currency): ");
    scanf("%f", &cost_of_production);

    // Calculations
    total_milk = cows * average_amount;
    total_cost = total_milk * cost_of_production;

    // Output results
    printf("Amount of milk produced in one day is %.2f liters\n", total_milk);
    printf("The cost of milk per day is: %.2f\n", total_cost);

    return 0;
}