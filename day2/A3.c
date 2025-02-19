#include <stdio.h>

// Function to calculate the discounted price
float calculateFinalAmount(float billAmount) {
    float discount = 0.0;

    if (billAmount >= 500 && billAmount <= 1000) {
        discount = 0.10;  // 10% discount
    } else if (billAmount > 1000) {
        discount = 0.20;  // 20% discount
    }

    return billAmount * (1 - discount);
}

int main() {
    float billAmount, finalAmount;

    // Taking input
    printf("Enter total bill amount: ₹");
    scanf("%f", &billAmount);

    // Calculate final amount
    finalAmount = calculateFinalAmount(billAmount);

    // Display result
    if (billAmount >= 500 && billAmount <= 1000) {
        printf("Final Payable Amount: ₹%.2f (after 10%% discount)\n", finalAmount);
    } else if (billAmount > 1000) {
        printf("Final Payable Amount: ₹%.2f (after 20%% discount)\n", finalAmount);
    } else {
        printf("Final Payable Amount: ₹%.2f (No discount applied)\n", finalAmount);
    }

    return 0;
}
