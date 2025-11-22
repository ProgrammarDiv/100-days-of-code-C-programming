#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profitOrLoss, percentage;

    printf("Enter cost price: ");
    scanf("%f", &costPrice);
    printf("Enter selling price: ");
    scanf("%f", &sellingPrice);
    if (sellingPrice > costPrice) {
        profitOrLoss = sellingPrice - costPrice;
        percentage = (profitOrLoss / costPrice) * 100;
        printf("Profit of %.2f%%\n", percentage);
    } else if (costPrice > sellingPrice) {
        profitOrLoss = costPrice - sellingPrice;
        percentage = (profitOrLoss / costPrice) * 100;
        printf("Loss of %.2f%%\n", percentage);
    } else {
        printf("No profit, no loss.\n");
    }
    return 0;
}
