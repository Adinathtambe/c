#include<stdio.h>

void main(){
	
	////even odd
//	int no=5;
//	if (no%2==0){
//		printf("no is even");
//	}else{
//		printf("no is odd");
//	}


//leap year
int year=2000;
if(year%4==0 && year%100!=0 || year%400==0){
	printf("%d is leap year\n",year);
}
else{
	printf("%d is not leap year");
}


//positive /negative

//int no=10;
//if(no>0){
//	printf("no is positive");
//	
//}else{
//	printf("no is negative");
//}


////vote eligible
//int age = 12;
//if (age>=18){
//	printf("eligible for vote");
//}else{
//	printf("not eligible for vote");
//}

//b is greater number
int a=10;
int b=20;
if(b>a){
	printf("b is greater");
	
}else{
	printf("a is greater");
}
}