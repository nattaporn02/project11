#include <stdio.h>

int main(void){
	int i = 0;
	int a;
	int people;
	printf("Enter score : ");
	scanf("%d", & a);
	printf("Enter people : ");
	scanf("%d", & people);
	for(i = 0;i <= 10;i++){
		if(a >= 70){
		printf("Group A");
	}
		if(a <= 70){
		printf("Group B");
	}
	return 0;
}
}
