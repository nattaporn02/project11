#include <stdio.h>

int main(void){
	int i = 0;
	int people;
	printf("Enter score : ");
	scanf("%d", & i);
	printf("Enter people : ");
	scanf("%d", & people);
	for(i = 0;i <= 10;i++){
		if(i >= 70){
		printf("Group A");
	}
		if(i <= 70){
		printf("Group B");
	}
	return 0;
}
}
