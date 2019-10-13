/*Receba um número positivo e mostre como o exemplo:
	Digitado: 10
           Saída: 10,9,8,7,6,5,4,3,2,1 */ 
 #include<stdio.h>
 #include<stdlib.h>
 
 int func(int x){
	 if(x>0){
	 	printf("%d \t",x);
	 	return(func(x-1));
	 
	 }
 }
 
 int main(){
 	int num1;
 	
 	printf("digite Num:");
 	scanf("%d",&num1);
 	func(num1);
 
 }
