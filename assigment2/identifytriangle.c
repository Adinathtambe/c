#include<stdio.h>

void main(){
	
	printf("Identify type of the triangle\n");
	
	int side1,side2,side3;
	
	printf("Enter side 1:\n");
	scanf("%d",&side1);
	
	printf("Enter side 2:\n");
	scanf(" %d",&side2);
	
	printf("Enter side 3:\n");
	scanf(" %d",&side3);
	
	if(side1 + side2> side3 && side2 + side3> side1 && side1 + side3> side2 ){
		
	    if (side1 == side2  && side2 == side3){
		     printf("Triangle is equilateral");
	    }
	    else if(side1 == side2 || side2 == side3 || side1 == side3){
	         printf("Triangle is isosceles");
	         
        }else{
        	printf("The triangle is Scalene.\n");
		}
    }else{
    	 printf("The given sides do not form a valid triangle.\n");
	}
}
	