#include <stdio.h>
#include <stdlib.h>
#include <cores.h>


void inicio(){
	printf("################################ Bem Vindo ##############################################\n");
 	printf("# Neste jogo voce podera escolher as possibilidades de cores nesta ordem de prioridade: #\n");
 	printf("# Vermelho                                                                              #\n");
 	printf("# Verde                                                                                 #\n");
 	printf("# Amarelo                                                                               #\n"); 
 	printf("# Azul                                                                                  #\n"); 
 	printf("# Magenta                                                                               #\n");
 	printf("# Ciano                                                                                 #\n");  
  	printf("#########################################################################################\n");

}
/*
void opcao_cores(int n, int pc){
	char vermelho[] = "vm: Vermelho";
	char verde[]    = "vd: Verde";
	char amarelo[]  = "am: Amarelo";
	char azul[]     = "az: Azul";
	char magenta[]  = "mg: Magenta";
	char ciano[]=    "ci: Ciano";

	jogada[0]=
	jogada[1]=
	jogada[2]=
	jogada[3]=
	jogada[4]=
	jogada[5]=
	int jo*;
	//escollha de cores

 	printf("#########################################################################\n");
 	printf("# Entre com uma combinação de %d elementos dentre as %d cores seguintes:#\n", n, pc);
 	printf("# vm: Vermelho                                                          #\n");
 	printf("# vd: Verde                                                             #\n");
 	printf("# am: Amarelo                                                           #\n"); 
 	printf("# az: Azul                                                              #\n"); 
 	printf("# mg: Magenta                                                           #\n");
 	printf("# ci: Ciano                                                             #\n");  
  	printf("#########################################################################\n");
}
void jogada(n, pc){
	int tent;
 	printf("Entre a sua tentativa, separando os elementos por vírgula:  \n");
 	n= malloc(*size())
 	//leitura
 	//verificação da entrada

 	//verificação da jogada
 	printf("Essa foi a tentativa de número %d. Você não acertou. Entre sua nova tentativa.  \n", tent);
 	printf("Parabéns. Você conseguiu adivinhar a senha com %d tentativas\n", m);

}
*/
int main(int argc, char const *argv[])
{
	inicio();

	int n, pc, lim;
	printf("Entre com o tamanho da senha: (de 4 a 12)\n");
	scanf("%d", &n);

	printf("Entre com a possibilidade de cores: (de 3 a 6)\n");
	scanf("%d", &pc);

	printf("Entre com o limite de tentativas de adivinhacao: (a partir de 1)\n");
	scanf("%d", &lim);

 	printf(" Entre com uma combinacao de %d elementos dentre as %d cores seguintes:\n", n, pc);

 	typedef struct ArvoreBB{
	char cor[20];
	char nome[20];
	struct ArvoreBB *esq, *dir;
	}ArvoreBB;

 	char vermelho[] = "vm: Vermelho";
	char verde[]    = "vd: Verde";
	char amarelo[]  = "am: Amarelo";
	char azul[]     = "az: Azul";
	char magenta[]  = "mg: Magenta";
	char ciano[]    = "ci: Ciano";

 	for (i==1, i<=pc, i++){
 		printf("%s\n", escolhe[i]);
 	}

	//verifica_cores(n, pc);
	//jogada(n, pc);


	
	return 0;
}