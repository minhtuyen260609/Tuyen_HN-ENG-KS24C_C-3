#include<stdio.h>
int main(){
	// buoc 1: khai bao bien 
	int edge, height;
	float acreage;
	// buoc 2: nhap du lieu
	printf("moi ban nhap canh va chieu cao: ");
	scanf("%d %d", &edge, & height);
	
	// buoc 3: xu ly tinh toan
	acreage = edge * height / 2.0; 
		
	// buoc 4: in du lieu ra man hinh
	printf("dien tich tam giac la: %.2f", acreage);
	
	// buoc 5: ket thuc chuong trinh 
	return 0; 
} 
