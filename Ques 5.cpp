#include <stdio.h>
using namespace std;
int main(){
	int counter, grade, total, average;
	total = 0;
	counter = 1;
	while(counter <= 10){
		printf("Enter grade: ");
		scanf("%d", &grade);
		total = total + grade;
		counter = counter + 1;
	}
	average = total / 10;
	printf("Class average is %d\n", average);
	return 0;
}
