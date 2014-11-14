#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include ".\prototipo.h"
#include ".\cores.h"

int main(int argc, char const *argv[]){

	iniciar_jogo();

	int n, pc , lim;
	int i;
	char *nome_cor[6] = {" - vm: Vermelho", " - vd: Verde", " - am: Amarelo", " - az: Azul" ," - mg: Magenta", " - ci: Ciano"};

	printf("Entre com o tamanho da senha: (de 4 a 12)\n");
	scanf("%d", &n);

	printf("Entre com a possibilidade de cores: (de 3 a 6)\n");
	scanf("%d", &pc);

	printf("Entre com o limite de tentativas de adivinhacao: (a partir de 1)\n");
	scanf("%d", &lim);
	verificar_entrada();

 	printf("Entre com uma combinacao de %d elementos dentre as %d cores seguintes:\n", n, pc);
 	for (i = 0; i < pc; i++)
		printf(" %s\n", nome_cor[i]);

 	printf("Entre a sua tentativa, separando os elementos por virgula:  \n");
 	//aloca a senha
 	//senha = (char (malloc(2* N-1)+(2*N)))
 	//scanf(" %[^\n]s", senha);
 	//gerar
 	// ideia receber a senha quebrar a senha usando strtok para separar as virgulas e os espaços e depois concatena usando strcap dentro da combinação que eh pra quando
 	//for comparar nao dar problema 
 	//strock cdicide a string


	return 0;
}
