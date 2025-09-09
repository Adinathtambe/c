#include<stdio.h>
void main() {
	int n =28;
	int rem;
	int temp;
	       
	while( n>0) {
		rem = n%10;
		n = n/10;
	    printf("number is :%d\n",n);
	    printf("rem is :%d\n",rem);
	}

}