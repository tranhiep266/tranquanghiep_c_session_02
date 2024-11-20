#include<stdio.h>
int main(){
	int firstnumber = 10;
	int secondnumber = 5;
	int sum = firstnumber + secondnumber;
	int minus = firstnumber - secondnumber;
	int multiply = firstnumber * secondnumber;
	int divide = firstnumber / secondnumber;
	printf("Tong cua %d va %d la %d\n", firstnumber, secondnumber, sum);
	printf("Hieu cua %d va %d la %d\n",firstnumber, secondnumber, minus);
	printf("Tich cua %d va %d la %d\n",firstnumber, secondnumber, multiply);
	printf("Thuong cua %d va %d la %d\n",firstnumber, secondnumber, divide);
	return 0;
}
