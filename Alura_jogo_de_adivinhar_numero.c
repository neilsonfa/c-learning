#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMERO_DE_TENTATIVAS 5

int main() {
	printf("\n");
	printf("*******************************************\n");
	printf("* Bem-vindo ao nosso jogo de adivinhacao! *\n");	
	printf("*******************************************\n");
	printf("\n");

	//Determina que o número secreto é aleatório.
	int segundos = time(0);
	srand(segundos);
	int numerogrande = rand();
	int numerosecreto = numerogrande % 100;

	int chute;
	int tentativas = 1;
	double pontos = 1000;
	while(1) {
		printf("Tentativa %d\n", tentativas);
		printf("Qual e o seu chute?");
		scanf("%d", &chute);
		printf("Seu chute foi %d\n", chute);
		if(chute < 0) {
			printf("Voce nao pode chutar numeros negativos\n");
			printf("\n");
			continue;
		}
		int acertou = (chute == numerosecreto);
		int maior = chute > numerosecreto;
		if(acertou) {
			printf("Parabens! Voce acertou!\n");
			printf("Jogue de novo, voce e um bom jogador!\n");
			printf("\n");
			break;
		}	
		else if(maior) {
			printf("Seu chute foi maior que o numero secreto\n");
			printf("\n");
		}
		else {
			printf("Seu chute foi menor que o numero secreto\n");
			printf("\n");
		}
		tentativas++;
		//Determina que será considerado o valor absoluto no chute para calcular os pontos perdidos.
		double pontosperdidos = abs(chute - numerosecreto) / (double) 2;
		if(pontosperdidos < 0) {
			pontosperdidos = pontosperdidos * -1;
		}
		pontos = pontos - pontosperdidos;
	}
	printf("Fim de jogo.\n");
	printf("Voce acertou em %d tentativas!\n", tentativas);
	printf("Total de pontos: %f\n", pontos);
	printf("\n");

	return 0;
}