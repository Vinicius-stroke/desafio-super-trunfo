#include <stdio.h>

int main() {
    // atribuicao simples (=)
    // atribuicao com soma (+=)
    // atribuicao com subtracao (-=)
    // atribuicao com multiplicacao (*=)
    // atribuicao com divisao (/=)

    int numero1, numero2, resultado;

    resultado = 10;
    printf("Resultado inicial: %d\n", resultado);

    resultado += 50; // resultado = resultado + 50
    printf("Resultado: %d\n", resultado);

    resultado -= 35; // resultado = resultado - 35
    printf("Resultado: %d\n", resultado);

    resultado *= 7; // resultado = resultado *7
    printf("Resultado: %d\n", resultado);

    resultado /= 5; // resultado = resultado / 5
    printf("Resultado: %d\n", resultado);
}