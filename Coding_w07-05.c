#include <stdio.h>

int main() {
    int age, vipLevel;
    float purchaseAmount, discount = 0;

    // รับข้อมูลลูกค้า
    printf("Enter  age: ");
    scanf("%d", &age);

    printf("Enter VIP level (1-5): ");
    scanf("%d", &vipLevel);

    printf("Enter purchase amount: ");
    scanf("%f", &purchaseAmount);

    // ตรวจสอบเงื่อนไขส่วนลด (เรียงตามความสำคัญ)
    if (vipLevel == 5 || purchaseAmount > 50000) {
        discount = 25;
    } else if (age > 60 || (vipLevel == 3 || vipLevel == 4)) {
        discount = 20;
    } else if (age >= 30 && age <= 40 && purchaseAmount > 2000) {
        discount = 15;
    } else if (age >= 18 && age <= 25 && purchaseAmount > 1000) {
        discount = 10;
    }

    // แสดงผลลัพธ์
    printf("\n--- Customer Info ---\n");
    printf("Age: %d  | VIP Level: %d | Amount: %.2f THB\n", age, vipLevel, purchaseAmount);
    
    if (discount > 0) {
        float discountAmount = purchaseAmount * (discount / 100);

        printf("Discount received: %.0f%%\n\n", discount);

        printf("Thank you for shopping with us!\n");
    } else {
        printf("No discount applied\n\n");
        printf("Thank you for shopping with us!\n");
    }

    return 0;
}
