#include<stdio.h>

void factorial();
void armstrong();

void main(){
	factorial();
	armstrong();
}

void factorial(){
	int fact=1,n;
	printf("Enter the number:");
	scanf("%d",&n);
	
	for(int i=1 ;i<=n;i++){
		fact = fact*i;
	
	}
	printf("factorial of %d is %d\n",n,fact);
}

void armstrong(){
	int num,temp,rem,sum=0;
	
	printf("Enter 3 digit number to check armstrong:");
	scanf("%d",&num);
	
	temp=num;
	while(num>0){
		rem = num % 10;
		sum = sum +(rem*rem*rem);
		num = num/10;
	}
	if (temp==sum){
		printf("armstrong number");
	}else{
		printf("not armstrong number");
	}
}