/******************************************************************************
 * Họ và tên: [LÊ TẤN THÀNH]
 * MSSV:      [PS 48491]
 * Lớp:       [COM108 CS21302]
 *****************************************************************************/

// BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH TÍNH HỌC LỰC  
// Input: Nhập vào điểm của sinh viên (0-10) 
// Output: Hiển thị ra màn hình học lực của sinh viên 
// Biết rằng: 
// Học lực xuất sắc: Điểm >= 9 
// Học lực giỏi: 9 > điểm >= 8 
// Học lực khá: 8 > điểm >= 6.5 
// Học lực trung bình: 6.5 > điểm >= 5 
// Học lực yếu: 5 > điểm >= 3.5 
// Học lực kém: 3.5 > điểm

#include <stdio.h>

int main(){
    // khai bao bien
    float diem;
    // nhap du lieu
    printf("xet hoc luc\n");
    printf("nhap diem:");
    scanf("%f",&diem);
    // xu ly, tinh toan VA hien thi ket qua
if (diem<=0||diem>=10){printf("Điểm không hợp lệ");
    }else if(diem>=9){printf("Học lực xuất sắc");
    }else if(diem<9&&diem>=8){printf("Học lưc giỏi");
    }else if(diem<8&&diem>=6.5){printf("Học lực khá");
    }else if(diem<6.5&&diem>=5){printf("Học lực trung bình");
    }else if(diem<5&&diem>=3.5){printf("Học lực yếu");
    }else if(diem<3.5){printf("Học lực kém");}


    return 0;
}