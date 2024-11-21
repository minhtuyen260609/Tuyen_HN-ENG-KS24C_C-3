#include<stdio.h>
int main(){
	// buoc 1: khai bao bien
	float diem_toan, diem_van, diem_anh, tong_diem, diem_tb;
	
	// buoc 2: nhap du lieu 
	printf("moi nhap diem toan, van, anh: ");
	scanf("%f %f %f", &diem_toan, &diem_van, &diem_anh);
	
	// buoc 3: xu ly tinh toan
	tong_diem = diem_toan + diem_van + diem_anh; 
	diem_tb = tong_diem / 3;
	
	// buoc 4: in ket qua ra man hinh
	printf("tong diem 3 mon la: %.2f", tong_diem);
	printf("diem trung binh 3 mon la: %.2f", diem_tb);
	 
	// buoc 5: ket thuc chuong trinh 
	return 0; 
} 
