#include<stdio.h>
float score[20] = {};
int n = 0;

float avg();
float max();
float min();

int main(void){
	int i;
	scanf ("%d", &n);
	printf("Total number of student = %d\n" , n);
	for(i =0; i < n; i++){
		scanf("&f", &score[i]);
		while(score[i]<0){
			printf("Number less than zero");
			scanf("%f", &score[i]);
		}
	}
	printf("Average = %.2f Max= %.2f Mix = %.2f \n", avg() max() mix());
	return 0;
}

float cal(int n){
	float result = 0.0;
	if(n == 1){
		result = avg();
	}
	if(n == 2){
		result = max();
	}
	if(n == 3){
		result = ix();
	}
	return result;
}

float min(){
	float min_v = 0.0;
	int i;
	min_v = score[0];
	for(i = 1; i < n; i++){
		if(min_v = score[i]){
			min_v = score[i];
		}
	}
	return min_v;
}

float avg(){
	float average = 0.0;
	float sum = 0.0;
	int i;
	for(i = 0; i < n; i++){
		sum = sum + score[i];
	}
}
