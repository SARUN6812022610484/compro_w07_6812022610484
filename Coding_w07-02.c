#include <stdio.h>

int main() {
    int x, y;

    // รับค่าจากผู้ใช้ 2 ค่า
    printf("Enter x: ");
    scanf("%d", &x);

    printf("Enter y: ");
    scanf("%d", &y);

    // เปรียบเทียบค่าระหว่าง x และ y
    if (x > y) {
        // ถ้า x มากกว่า y
        printf("x มากกว่า y\n");
    } else if (x < y) {
        // ถ้า x น้อยกว่า y
        printf("x น้อยกว่า y\n");
    } else {
        // กรณี x เท่ากับ y
        printf("x เท่ากับ y\n");
    }

    return 0;
}
