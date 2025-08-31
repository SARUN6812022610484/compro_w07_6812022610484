#include <stdio.h>

int main() {
int level;

printf("Enter level (1-4): "); //รับค่าระดับจากผู้ใช้
scanf("%d", &level);

if (level <= 0) { 
printf("The level below 1 is not allowed\n"); // ตรวจสอบค่า level ก่อนเข้า switch
} else if (level > 4) {
printf("The level above 4 is not allowed\n");
} else {
switch (level) {
case 1: printf("Beginner\n"); break;
case 2: printf("Intermediate\n"); break;
case 3: printf("Advanced\n"); break;
case 4: printf("Expert\n"); break;
}
}

return 0;
}                                                       
//level = -4: "The level below 1 is not allowed"            
//level = 0: "The level below 1 is not allowed"
//level = 1: "Beginner"
//level = 2: "Intermediate"
//level = 3: "Advanced"
//level = 4: "Expert"
//level = 100: "The level above 4 is not allowed"
//การใส่ผลลัพธ์ที่คาดไม่ถึง จะให้โปรแกรมไปใช้เงื่อนไขใน if , else if แทน