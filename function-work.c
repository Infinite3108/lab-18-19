#include<stdio.h>
#include"worker.h"
void main(){
	float a,b,c;
	int C;
	printf("1. sum of 2 numbers\n");
	printf("2. from max from 2 numbers\n");
	printf("3. from min from 2 numbers\n");
	printf("4. find simple interest\n");
	printf("5. find max from 3 numbers\n");
	printf("6. get swaped values only\n");
	printf("7. swap numbers in actual\n");
	printf("\nenter number for task:\n");
	scanf("%d",&C);
	switch(C){
		case 1:
			printf("enter numbers:\n");
			scanf("%f %f",&a,&b);
			printf("%.2f+%.2f=%.2f",a,b,sum2(a,b));
			break;
		case 2:
			printf("enter numbers:\n");
			scanf("%f %f",&a,&b);
			printf("max number is: %.2f",max2(a,b));
			break;
		case 3:
			printf("enter numbers:\n");
			scanf("%f %f",&a,&b);
			printf("min number is: %.2f",min2(a,b));
			break;
		case 4:
			printf("enter principle:\n");
			scanf("%f",&a);
			printf("enter time(in years):\n");
			scanf("%f",&b);
			printf("enter rate:\n");
			scanf("%f",&c);
			printf("interest for given details : %.2f",interest(a,b,c));
			break;
		case 5:
			printf("enter numbers:\n");
			scanf("%f %f %f",&a,&b,&c);
			printf("max number is: %.2f",max3(a,b,c));
			break;
		case 6:
			printf("enter numbers:\n");
			scanf("%f %f",&a,&b);
			getSwap(a,b);
			break;
		case 7:
			printf("enter numbers:\n");
			scanf("%f %f",&a,&b);
			swap(&a,&b);
			printf("a, b: %.2f, %.2f",a,b);
			break;
		default: 
		printf("enter a valid task number");
	}
}
