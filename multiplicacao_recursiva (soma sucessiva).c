/*multiplicar dois números(através da soma sucessiva);*/
//forma recursiva de soma
 #include<stdio.h>
 #include<stdlib.h>
 int soma(int x,int y){
	 if(y==0){
	 	return 0;
	 }else{
	 	return(x+soma(x,y-1));
	 }
 }
 int main(){
 	int num1,num2;
 	printf("digite num1:");
 	scanf("%d",&num1);
 	printf("digite num2:");
 	scanf("%d",&num2);
 	printf("o resultado he:%d",soma(num1,num2));
 	system("pause");
 }
