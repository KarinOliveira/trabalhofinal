#include <stdio.h>
#include <stdlib.h>
#include ".\cores.h"
#include <time.h>

// iniciar
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
 	n= malloc(*sizeof())
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

	char *nome_cor[6] = {"vm: Vermelho", "vd: Verde", "am: Amarelo", "az: Azul" ,"mg: Magenta", "ci: Ciano"};
	int i;
	int n, pc, lim;
	//char senha[20];

	printf("Entre com o tamanho da senha: (de 4 a 12)\n");
	scanf("%d", &n);

	printf("Entre com a possibilidade de cores: (de 3 a 6)\n");
	scanf("%d", &pc);

	printf("Entre com o limite de tentativas de adivinhacao: (a partir de 1)\n");
	scanf("%d", &lim);

	//fazer verificação de entradas
 	printf("Entre com uma combinacao de %d elementos dentre as %d cores seguintes:\n", n, pc);
 	for (i = 0; 1 < pc; i++)

 		printf(" %s\n", nome_cor[i]);

 	printf("Entre a sua tentativa, separando os elementos por virgula:  \n");
 	//scanf(" [^\n]%s", senha);


 

 	//for (i==1, i<=pc, i++){
 	//	printf("%s\n", escolhe[i]);
 	//}

	//verifica_cores(n, pc);
	//jogada(n, pc);


	
	return 0;
}