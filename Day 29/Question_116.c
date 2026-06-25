// 

#include <stdio.h>

int main() {
    int productId, quantity;
    char productName[50];
    float price, totalValue;

    printf("===== INVENTORY MANAGEMENT SYSTEM =====\n");

    printf("Enter Product ID : ");
    scanf("%d", &productId);

    getchar();

    printf("Enter Product Name : ");
    fgets(productName, sizeof(productName), stdin);

    printf("Enter Quantity : ");
    scanf("%d", &quantity);

    printf("Enter Price per Item : ");
    scanf("%f", &price);

    totalValue = quantity * price; // Calculate total value of inventory

    // Display Inventory Report
    printf("\n========== INVENTORY REPORT ==========\n");
    printf("Product ID      : %d\n", productId);
    printf("Product Name    : %s", productName);
    printf("Quantity        : %d\n", quantity);
    printf("Price per Item  : %.2f\n", price);
    printf("Total Value     : %.2f\n", totalValue);

    if(quantity < 10)
        printf("Stock Status    : Low Stock\n");
    else
        printf("Stock Status    : In Stock\n");

    printf("======================================\n");

    return 0;
}