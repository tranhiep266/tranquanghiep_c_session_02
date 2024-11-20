#include <stdio.h>
int main(){
	int length = 5; // chieu dai 
	int width = 2;  // chieu rong
	int girth = (length * width)*2; // chu vi hinh chu nhat
	int area = length * width; // dien tich hinh chu nhat
	printf("Chieu dai cua hinh chu nhat: %d\n", length);
	printf("Chieu rong cua hinh chu nhat: %d\n", width);
	printf("Chu vi cua hinh chu nhat: %d\n", girth);	
	printf("Dien tich cua hinh chu nhat: %d\n", area);
	return 0;
}
