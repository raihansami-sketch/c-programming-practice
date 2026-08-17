#include <stdio.h>

int main() {
    float price, vatRate, vatAmount, totalPrice;
    printf("Enter Price:");
    scanf("%f", &price);
    printf("Enter Vat Rate:");

    scanf("%f",&vatRate);


    vatAmount = (price * vatRate) / 100.0;

    totalPrice = price + vatAmount;

    printf("VAT = %.2f\n", vatAmount);
    printf("Total = %.2f\n", totalPrice);

    return 0;
}
