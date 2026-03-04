#include <stdio.h>

int main() {
    char dir;

    scanf(" %c", &dir);

    switch (dir) {
        
        case 'w':
		printf("Up\n");
		break;
        case 's':
		printf("Down\n");
		break;
        case 'a':
		printf("Left\n");
		break;
        case 'd':
		printf("Right\n");
		break;
	default:
		printf("Wrong\n");
    }

    return 0;
}

/* EXERCÍCIO PRÁTICO
Controles do Jogo
Você está fazendo um jogo, que é controlado pelo teclado.
As seguintes teclas precisam ser manuseadas:
    w para "Up"
    s para "Down"
    a para "Left"
    d para "Right"
Tarefa: Pegue o caractere da tecla de entrada e produza a direção correspondente. 
Para qualquer outra tecla, produza "Wrong".
Use uma declaração switch para lidar com os casos.
Lembre-se, os valores de char precisam ser envolvidos em aspas simples. */