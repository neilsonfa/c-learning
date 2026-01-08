#include <stdio.h>

int main () {
	float altura, peso, imc;
/*
	printf ("*************************************************************************************\n");
	printf ("*************************************************************************************\n");
	printf ("Esse programa calcula o Índice de Massa Corporal (IMC), de um adulto de 20 a 59 anos.\n");
	printf ("\n");
	printf ("O IMC é uma medida simples usada pela OMS para avaliar se o peso de uma pessoa é\n");
	printf ("saudável em relação à sua altura, calculada dividindo o peso (em kg) pela altura\n");
	printf ("(em metros) ao quadrado; ele ajuda a identificar riscos de saúde como desnutrição,\n");
	printf ("sobrepeso e obesidade, embora não diferencie massa muscular de gordura, sendo um\n");
	printf ("bom indicador inicial para a maioria dos adultos.\n");
	printf ("*************************************************************************************\n");
	printf ("*************************************************************************************\n");
*/
	printf ("Digite a altura em cm: ");
	scanf ("%f", &altura);
	printf ("Digite o peso em Kg: ");
	scanf ("%f", &peso);

	imc = peso / (altura * altura);

	if (imc < 18.5) {
		printf ("Baixo peso\n");
	}
	else if (imc >= 18.5 && imc < 25) {
		printf ("Peso normal\n");
	}
	else if (imc >= 25 && imc < 30) {
		printf ("Sobrepeso\n");
	}
	else if (imc >= 30 && imc < 35) {
		printf ("Obesidade grau I\n");
	}
	else if (imc >= 35 && imc < 40) {
		printf ("Obesidade grau II\n");
	}
        else { //(imc >= 40)
		printf ("Obesidade grau III\n");
	}
/*	
	printf ("*************************************************************************************\n");
	printf ("*************************************************************************************\n");
	printf ("Este é o referencial para ADULTOS de 20 a 59 anos, independentemente do sexo.\n");
	printf ("\n");
	printf ("São as orientações do Ministério da Saúde, que afirma que a classificação do\n");
	printf ("IMC para adultos não diferencia homens e mulheres.\n");
	printf ("\n");
	printf ("Crianças e adolescentes (2 a 19 anos) usam tabelas específicas por idade e sexo,\n");
	printf ("baseadas em curvas de crescimento.\n");
	printf ("\n");
	printf ("Idosos (60 anos ou mais) têm pontos de corte diferentes, pois a composição\n");
	printf ("corporal muda com a idade.\n");
	printf ("\n");
	printf ("Gestantes → usam curvas próprias de ganho de peso.\n");
	printf ("*************************************************************************************\n");
	printf ("*************************************************************************************\n");
*/
	return 0;
}