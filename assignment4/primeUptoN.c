void main() {

	int no;
	printf("Enter  number:");
	scanf("%d",&no);
	printf("prime number from 1 to %d\n",no);
	

	for (int i=2; i <= no ; i++) {
		int flag = 1;
		for (int num = 2 ; num <= i/2 ; num++) {
			if(i % num ==0){
				flag =0;
				break;
			}
		}
		if(flag){
			
				printf("%d\n",i);
		
		}
	}

}