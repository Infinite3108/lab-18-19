#include<stdio.h>
float sum2(float a, float b){
	float sum=a+b;
	return sum;
}
float min2(float a, float b){
	float min=(a>b)?b:a;
	return min;
}
float max2(float a, float b){
	float max=(a<b)?b:a;
	return max;
}
float interest(float p,float n,float r){
	int i=p*n*r/100;
	return i;
}
float max3(float a, float b,float c){
	float max=(a>b)?(a>c?a:c):(b>c?b:c);
	return max;
}
void getSwap(float a, float b){
	float temp=a;
	a=b;
	b=temp;
	printf("swaped values : %.2f, %.2f",a,b);
}
void swap(float *a, float *b){
	float temp=*a;
	*a=*b;
	*b=temp;
}
int fact(int a){
	if(a==1){
		return 1;
	}
	else {
		return a*fact(a-1);
	}
	
}
void ar(int a[50]){
	int i,n;
	printf("Enter limit:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter a  number: \n");
		scanf("%d",&a[i]);
	}
	printf("Entered array is: \n");
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	
}
int len_str(char a[100]){
	int i;
	for(i=0;a[i]!='\0';i++);
	return i;
}
