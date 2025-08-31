#include <stdio.h>

int main() {
    int level;

    printf("Enter membership level (1-4): ");
    scanf("%d", &level);

    // ใช้ switch-case ตรวจสอบและแสดงสิทธิประโยชน์
    switch (level) {
        case 1:
            printf("Silver Member: 5%% discount\n");
            break;
        case 2:
            printf("Gold Member: 10%% discount + Reward points\n");
            break;
        case 3:
            printf("Platinum Member: 15%% discount + Reward points + Birthday gift\n");
            break;
        case 4:
            printf("Diamond Member: All benefits + VIP events\n");
            break;
        default:
            printf("Invalid membership level\n");
    }

    return 0;
}
//ข้อดีของ switch-case: ลดโอกาสเกิด error จากการลืมเงื่อนไข
//                  : อ่านง่ายกว่าเมื่อมีหลายกรณี
//                  : ประสิทธิภาพดีกว่าเมื่อมี case จำนวนมาก
//                  : โครงสร้างชัดเจน ดูแลรักษาง่าย
//ความเหมาะสมกับโปรแกรมนี้: สำหรับโปรแกรมแสดงสิทธิประโยชน์สมาชิกนี้switch-case เหมาะสมกว่า เพราะ:
//1. ระดับสมาชิกเป็นค่าคงที่ (1-4)
//2. มีกรณีที่ชัดเจนและไม่ซับซ้อน
//3. โค้ดอ่านง่ายและ maintain ง่ายกว่า 4. หากต้องการเพิ่มระดับสมาชิกในอนาคต เพิ่ม case ใหม่ได้ง่าย