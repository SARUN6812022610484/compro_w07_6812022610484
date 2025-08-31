#include <stdio.h>

int main() {
    int level;

    printf("Enter membership level (1-4): "); //แสดงผลเพื่อรับค่า Enter membership level (1-4):
    scanf("%d", &level); //รับค่าจากแป้นพิมพ์ของผู้ใช้

    // ตรวจสอบระดับสมาชิกและแสดงสิทธิประโยชน์
    if (level == 1) {
        printf("Silver Member: 5%% discount\n");
    } else if (level == 2) {
        printf("Gold Member: 10%% discount + Reward points\n");
    } else if (level == 3) {
        printf("Platinum Member: 15%% discount + Reward points + Birthday gift\n");
    } else if (level == 4) {
        printf("Diamond Member: All benefits + VIP events\n");
    } else {
        printf("Invalid membership level\n");
    }

    return 0;
}
//ข้อดีของ if-else if: สามารถใช้เงื่อนไขที่ซับซ้อนได้
//                 :  ใช้เปรียบเทียบช่วงค่าได้ 
//                 :  เหมาะสำหรับเงื่อนไขที่ไม่ใช่ค่าคงที่