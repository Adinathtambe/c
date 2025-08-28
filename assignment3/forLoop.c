void main() {

//
//	//print no 1-10
//	int i;
//	for(i=0;i<=10;i++){
//		printf("%d\n",i);
//	}

//no prime or not

	int no;
	printf("Enter no:");
	scanf("%d",&no);
	int flag = 0;
	int i ;

	if(no>1) {
		for (i=2; i< no; i++) {
			if(no%i ==0) {
				flag = 1;
			}
		}
		if(flag) {
			printf("%d is Not prime number",no);
		} else {
			printf("%d is prime number",no);
		}
	} else {
		printf("envalid number");
	}

}