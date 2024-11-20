#include <stdio.h>
int main(){
	const float PI = 3.14; // Hang so Pi
	float radius = 5.0; // Ban kinh hinh tron
	float girth = 2 * PI * radius; // Chu vi hinh tron
	float area = PI * radius * radius; // Dien tich hinh tron
	printf("Ban kinh hinh tron: %.2f\n", radius);
	printf("Chu vi hinh tron: %.2f\n", girth);
	printf("Dien tich hinh tron: %.2f\n", area);
	return 0;
}
