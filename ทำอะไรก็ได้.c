#include <stdio.h>
float cal(int n);
int main(void){
	int i,n;
	printf("(l) voltage (2) Current (3) Resistance\n");
	printf("enter : ");
	scanf("%d", &n);
	
	return 0;
}

float cal (int n){
	float result = 0.0;
	float v, i, r;
	
	if (n == 1){
		printf("V = ?\n");
		scanf("%f", &i);
		printf("R = ?\n");
		scanf("%f", &r);
		result = i * r;
	}
	if (n == 2){
		printf("V = ?\n");
		scanf("%f", &v);
		printf("R = ?\n");
		scanf("%f", &r);
		result = v * r;
	}
	if (n == 3){
		printf("V = ?\n");
		scanf("%f", &v);
		printf("R = ?\n");
		scanf("%f", &r);
		result = v * r;
	}
	return result;
}



