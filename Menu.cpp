#include <stdio.h>
#include <math.h>
#include <locale.h>
#define PI 3.1416

int pot(int n1, int n2){
	int res;
	res=pow(n1,n2);
	printf("Potencia = %d\n",res);
	return res;
}

float areaC(float raio){
	float r;
	//r = PI*pow(raio,2);
	r=3.1416*raio*raio;
	return r;
}//fim função area

int fat(int n){
	int i,res=1;
	
	for(i=1;i<=n;i++)
		 res=res*i;
		 
	printf("O fatorial de %d = %d\n",n,res);
	return res;
}//fim função fatorial

float fib(int n){
	int fibA=0,fibP=1,s=1,i;
	
	for(i=0;i<n;i++){
		printf("%d\n",s);
		
		s=fibA+fibP;
		fibA=fibP;
		fibP=s;
	}

}
	
int menu(){
	setlocale(LC_ALL,"");
	int op;
	printf("*** Sistema de Informações ***\n");
	printf("\n1 - Cálculo da área de um circulo;\n");
	printf("2 - Cálculo do fatorial;\n");
	printf("3 - Cálculo da potencia;\n");
	printf("4 - Sequência de Fibonacci\n");
	printf("5 - Soma de N valores\n");
	printf("0 - Sair;\n");
	printf("\nEntre com uma opção: ");
	scanf("%d",&op);
	return op;
}

int somaN(int qnt){
	
	int i,soma=0,num;
	for(i=1;i<=qnt;i++){
		printf("Insira um número: ");
		scanf("%d",&num);
			soma+=num;
		}
	
		
		printf("O resultado da soma dos valores é: %d",soma);
		
		return soma;
	
}
int main(){
	
	int qnt;//Soma N valores
	int op;//menu
	int n;//Fatorial
	int base,expo;//Potencia
	int fibnum;//Fibonacci
	float raio;//Area circulo
	op = menu();
	
	switch(op){
		
		case 1:
			printf("\nEntre com o raio: ");
			scanf("%f",&raio);
			printf("Área = %.2f\n",areaC(raio));
			break;
		case 2:
			printf("\nEntre com um número: ");
			scanf("%d",&n);
			fat(n);
			break;
		case 3:
			printf("\nEntre com o valor da base e do expoente: ");
			scanf("%d%d",&base,&expo);
			pot(base,expo);
			break;
		case 4:
			printf("\nInsira o limite da sequência: "); 
			scanf("%d",&fibnum);
			printf("Sequência Fibonacci, até termo de n°: %d\n",fibnum);
			fib(fibnum);
			break;
		case 5:
			printf("\nQuantos números deseja inserir: ");
			scanf("%d",&qnt);
			somaN(qnt);
			break;
		case 0: printf("\nSaindo...\n");
			break;	
		default: printf("\nOpção Inválida...\n");
	}
	
	return 0;
	
}
