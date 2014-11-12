#include <stdio.h>
#include <stdlib.h>
#include ".\cores.h"

#define VERMELHO = "vm: Vermelho"
#define VERDE    = "vd: Verde"
#define AMARELO  = "am: Amarelo"
#define AZUL     = "az: Azul"
#define MAGENTA  = "mg: Magenta"
#define CIANO    = "ci: Ciano"


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
	char nome_cor[20];
	int i;

	int n, pc, lim;
	char senha[20];
	printf("Entre com o tamanho da senha: (de 4 a 12)\n");
	scanf("%d", &n);
	//	char senha[] = (char[1]) malloc(sizeof(n));
	//alloca o tamanho correto da variavel senha

	printf("Entre com a possibilidade de cores: (de 3 a 6)\n");
	scanf("%d", &pc);

	printf("Entre com o limite de tentativas de adivinhacao: (a partir de 1)\n");
	scanf("%d", &lim);

 	printf("Entre com uma combinacao de %d elementos dentre as %d cores seguintes:\n", n, pc);
 	//ideia cria uma estrutura em forma de lista e para cada adição da cor limpa e insere a nova cor na lista
 	for (i=1;1<=pc;i++)
 	printf("%s\n", nome_cor);

 	printf("Entre a sua tentativa, separando os elementos por virgula:  \n");
 	scanf("%s", senha);


 	typedef struct lista{
	char cor[20];
	char nome[20];
	struct lista *dir;
	}tipolista;

 	char vermelho[] = "vm: Vermelho";
	char verde[]    = "vd: Verde";
	char amarelo[]  = "am: Amarelo";
	char azul[]     = "az: Azul";
	char magenta[]  = "mg: Magenta";
	char ciano[]    = "ci: Ciano";

 	//for (i==1, i<=pc, i++){
 	//	printf("%s\n", escolhe[i]);
 	//}

	//verifica_cores(n, pc);
	//jogada(n, pc);


	
	return 0;
}