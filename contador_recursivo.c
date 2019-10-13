/*Receba um número positivo e mostre como o exemplo:
	Digitado: 10
	Saída: 1,2,3,4,5,6,7,8,9,10.
*/ 
 #include<stdio.h>
 #include<stdlib.h>
 
 int func(int x,int y){
	 
	 if(y==0){
	 	printf("%d",x);
	 }else{
	 	printf(" %d ",x-y);
	 	return(func(x,y-1));
	 }
 }
 
 int main(){
 	int num1;
 	printf("digite Num:");
 	scanf("%d",&num1);
 	func(num1,num1-1);
 
 }
