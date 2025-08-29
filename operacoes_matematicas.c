#include <stdio.h>


int main() {
int numero1, numero2;
int soma, subtracao, multiplicacao, divisao;

printf("digite o primeiro numero: ");
scanf("%d", &numero1);

printf("digite o segundo numero: ");
scanf("%d", &numero2); 

// operacao de soma
soma = numero1 + numero2;

// opercao de subtracao
subtracao = numero1 - numero2;

// operacao de multiplicacao
multiplicacao = numero1 * numero2;

//operacao de divisao
divisao = numero1 / numero2;

printf("A soma dos numeros é: %d\n", soma);
printf("A subtracao dos numeros é: %d\n", subtracao);
printf("A multiplicacao dos numeros é: %d\n", multiplicacao);
printf("A divisao dos numeros é: %d\n", divisao);

}