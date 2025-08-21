#include<stdio.h>
void main(){
	int price,fprice;
	char ch ;
	
	printf("Enter the price of purchase:\n");
	scanf("%d",&price);

	printf("He is student or not (y/n):\n");
	scanf(" %c",&ch);
	
	
	
	if (ch=='y'){
		if (price>500){
			fprice = price-price*0.20;
			printf("20 percent discount applied:\n final value is:%d",fprice);
		}
		else{
			fprice = price-price*0.10;
			printf("10 percent discount applied:\n final value is:%d",fprice);
		}
	}else{
		if(price>600){
			
			fprice = price-price*0.15;
			printf("15 percent discount applied:\n final value is:%d",fprice);
		}else{
			printf("No discount applied:\n");
			
	}
	
}
}