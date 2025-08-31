#include <stdio.h>

int main() {
    float midterm_score, Total_score;

    // รับคะแนนจากผู้ใช้
    printf("Enter you Midterm score: ");
    scanf("%f", &midterm_score);

    // ตรวจสอบเงื่อนไข: ถ้าคะแนน >= 50 ให้เพิ่มอีก 5%
    if (midterm_score >= 50) {
        // คำนวณคะแนนเพิ่ม 5%
        Total_score = midterm_score + (midterm_score * 0.05);
    } else {
        // ถ้าคะแนนน้อยกว่า 50 ไม่เพิ่มคะแนน
        Total_score = midterm_score;
    }

    // แสดงคะแนนรวมหลังจากการเพิ่ม 
    printf("Total score: %.2f\n", Total_score);

    // แสดงข้อความว่าจบการประเมินผล
    printf("End of evaluation\n");

    return 0;
}
