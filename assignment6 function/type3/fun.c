void main(){
	int a=10,b=20,c;
	char ch='x';
	double d = 10.25;
	
	fun1(a,b,c+2,ch,d,10+20);
//	fun2('a',b+3,c+d,ch,'y');
//	fun3(a*b+c,d+10,3*5,5.2);

}
void fun1(int x,int y,int z,char p,double q,int r){
	printf("%d%d%d%c%f%d",x,y,z,p,q,r);
}