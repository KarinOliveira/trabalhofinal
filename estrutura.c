#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct StructAluno {
	int matricula;
	char nome[20];
	struct StructAluno *proximo;
};

typedef struct StructAluno Aluno;
Aluno *inicio = NULL;

void insereFim(int matricula, char nome[20]);
void insereInicio(int matricula, char nome[20]);
void insereOrdenada(int matricula, char nome[20]);
Aluno *aloca(int matricula, char nome[20]);
void removeFim();
void removeInicio();
void removeOrdenada(int matricula);
void desaloca(Aluno *removido);
void imprime();


int main(void) {
	insereOrdenada(4, "Fidelix");
	insereOrdenada(3, "Dilma");
	insereOrdenada(2, "Aecio");
	insereOrdenada(1, "Marina");
	imprime();
	return 0;
}

Aluno *aloca(int matricula, char nome[20]) {
	Aluno *novo = malloc(sizeof(Aluno));
	novo->matricula = matricula;
	strcpy(novo->nome, nome);
	novo->proximo = NULL;
	return novo;
}

void insereFim(int matricula, char nome[20]) {
	
	if(inicio != NULL) {
		Aluno *percorre = inicio;
		while(percorre->proximo != NULL) {
			percorre = percorre->proximo;
		}
		percorre->proximo = aloca(matricula, nome);
	} else {
		inicio = aloca(matricula, nome);
	}
}

void insereInicio(int matricula, char nome[20]) {
	if(inicio != NULL) {
		Aluno *novo = aloca(matricula, nome);
		novo->proximo = inicio;
		inicio = novo;
	} else {
		inicio = aloca(matricula, nome);
	}
}

void insereOrdenada(int matricula, char nome[20]) {
	if(inicio != NULL) {
		Aluno *novo = aloca(matricula, nome);
		Aluno *atual, *anterior;
		atual = inicio;
		while(atual != NULL && atual->matricula <= matricula) {
			anterior = atual;
			atual = atual->proximo;
		}
		novo->proximo = atual;
		
		if (atual == inicio) {
			inicio = novo;
		} else {
			anterior->proximo = novo;
		}
	} else {
		inicio = aloca(matricula, nome);
	}	
}

void imprime() {
	Aluno *percorre = inicio;
	while(percorre != NULL) {
		printf("(%d) %s\n", percorre->matricula, percorre->nome);
		percorre = percorre->proximo;
	}
}




