#include <stdio.h>

int main() {
	
	int no;
	
	    printf("Enter no:");
	    scanf("%d",&no);
	    
    int i=2;
    int flag =0;
    
    while(i<no){
    	if(no%i==0){
    		flag =1;
		}
		i++ ;
	}
	if(flag==0){
		
		printf("prime");
		
	}else{
		
		printf("not prime");
	}
}
