#include<stdio.h>
int main(){
	// buoc 1: khai bao bien
	float Celsius, Fahrenheit;
	 
	// buoc 2: nhap du lieu 
	printf("moi ban nhap nhiet do theo do Celsius: ");
	scanf("%f", &Celsius);
	
	// buoc 3: xu ly tinh toan
	Fahrenheit = Celsius * 9 / 5 + 32;
	
	// buoc 4: in ket qua ra man hinh
	printf("nhiet do tuong ung theo do Fahrenheit la: %f", Fahrenheit) ;
	 
	 // buoc 5: ket thuc chuong trinh 
	return 0; 
} 
