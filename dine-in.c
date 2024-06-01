#include <stdio.h>

void process_order(char order_type, double items, double price, double *total_cost, double *service_charge) {

    switch (order_type) {
        case 'D':
        case 'd':
            *service_charge = 5;
            break;
        case 'T':
        case 't':
            *service_charge = 0.05 * items * price;
            break;
        default:
            printf("Invalid order type. Please enter either 'D' for dine-in or 'T' for takeout.\n");
            return;
    }

    *total_cost = items * price + *service_charge;
}

void display_bill(char *customer_name, char order_type, double items, double price, double total_cost, double service_charge) {
    printf("\nBill Details for %s\n", customer_name);
    printf("Order Type: %c\n", order_type);
    printf("Items Ordered: %.2lf\n", items);
    printf("Price per item: %.2lf\n", price);
    printf("Service Charge: %.2lf\n", service_charge);
    printf("Total Cost: %.2lf\n", total_cost);
}

int main() {
    char customer_name[50];
    char order_type;
    double items;
    double price;
    double total_cost;
    double service_charge;
    char exit_program;

    do {
        printf("\nEnter customer name: ");
        scanf("%s", customer_name);

        printf("Enter order type (D for dine-in, T for takeout): ");
        scanf(" %c", &order_type);

        printf("Enter the number of items: ");
        scanf("%lf", &items);

        printf("Enter the price per item: ");
        scanf("%lf", &price);

        process_order(order_type, items, price, &total_cost, &service_charge);

        display_bill(customer_name, order_type, items, price, total_cost, service_charge);

        printf("Do you want to exit the program? (Y/N): ");
        scanf(" %c", &exit_program);
    } while (exit_program != 'Y' && exit_program != 'y');

    return 0;
}



     