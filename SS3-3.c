#include<stdio.h>
int main(){
	int ban_kinh;
	float pi = 3.14;
	printf("moi nhap ban kinh: ");
	scanf("%d", &ban_kinh); 
	float chu_vi = 2 * pi * ban_kinh;
	float dien_tich = (chu_vi * chu_vi)/(4 * pi); 
	printf("chu vi hinh tron la: %.2f\n", chu_vi);
	printf("dien tich hinh tron la: %.2f", dien_tich); 
	return 0; 
} 
