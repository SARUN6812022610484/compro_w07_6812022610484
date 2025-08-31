#include <stdio.h>

int main() {
    int level;

    printf("Enter level (1-4): "); //พิมพ์ Enter level (1-4):
    scanf("%d", &level); //รับค่าจาแป้นพิมพ์

    switch(level) {
        case 1: printf("Beginner\n"); //รับค่าได้ 1 ให้แสดง Beginner
        case 2: printf("Intermediaten\n"); //รับค่าได้ 2 ให้แสดง Intermediate
        case 3: printf("Advanced\n"); break; //รับค่าได้ 3 ให้แสดง Advanced
        case 4: printf("Expert\n"); break; //รับค่าได้ 4 ให้แสดง Expert                      
        default: printf("Invalid level\n"); //แสดงค่าปกติ Invalid level ถ้าไม่มีค่าใน case
    }

    return 0;
}
// กรณี level 0 , 10  ไม่อยู่ในเงื่อนไข จะแสดงผล Invalid level
// กรณี level 1-4 เข้าเงื่อนไข จะแสดงผลตาม case ที่เข้าเงื่อนไข 
//level = 1 Beginner,Intermediate,Advanced
//level = 2 Intermediate,Advanced
//level = 3 Advanced
//level = 4 Expert
//level = 0,10 Invalid level
//case 1,2 ไม่มี break ทำให้โปรแกรมไม่หยุดทำงาน และรันต่อจนถึง case 3 ที่มี break
