#include<stdio.h>
void main(){
	int signal;
	int emg;
	printf("Enter value of signal(1.red,2.yellow,3.green)\n");
	scanf("%d",&signal);
	
	if(signal==1){
		printf("stop");
		}else if(signal==2){
			
			printf("is emergency 0/1\n");
			scanf("%d",&emg);
			 if(emg==1){
				printf("go fast");
			}else if(emg==0){
				printf("slow");
			}
			}
			else{
		
		printf("green");
	}
}

