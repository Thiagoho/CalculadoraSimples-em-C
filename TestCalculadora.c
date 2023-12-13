#include <stdio.h>
#include <stdbool.h>


//Variais globais
//Declarações das funções

void solicitarNumeros(float *num1, float *num2);
void solicitarOperacao(char *operador);
void calcularOpcao(float num1, float num2, char operador);

//Variaveis Locais.
int main(){
    char continuar;
    
    do
    {
        float num1, num2;
        char operador;
        solicitarNumeros(&num1, &num2);
        solicitarOperacao(&operador);
        calcularOpcao(num1, num2, operador);
        printf("\nDeseja realizar outro operacao (S/N): ");
        scanf("%s", &continuar);
    } while (continuar == 'S' || continuar == 's');
    return 0;
}
//Implementação das funções

void solicitarNumeros(float *num1, float *num2) {
    bool entradaValida = false;

    do{
         printf("Inseri o primeiro numero: ");
    if(scanf("%f", num1) == 1) {
        printf("\n");
        entradaValida = true;
    }else {
        printf("\tEntrada invalida. Por favor, ineira um numero.\n");
        while (getchar() != '\n');        
    }
        
    } while (!entradaValida);

entradaValida = false;

do { printf("Inseri o segundo numero: ");
    if(scanf("%f", num2) == 1) {
        printf("\n");
        entradaValida = true;
    }else {
        printf("\tEntrada invalida. Opr favor, ineira um numero.\n");
        while (getchar() != '\n');        
    }

} while (!entradaValida);

}
void solicitarOperacao(char *operador) {
    printf("Qual opcao desejaria fazer ('+, -, *, /'): ");
    scanf("%s", operador);
    printf("\n");
}
void calcularOpcao(float num1, float num2, char operador) {
    
    switch (operador) {
    case '+':
        printf("Resultado: %.2f", num1 + num2);
        break;
    case '-':
        printf("Resultado: %.2f", num1 - num2);
        break;
    case '*': 
        printf("Resultado: %.2f", num1 * num2);
        break;
    case '/':
        if(num2 != 0) {
            printf("Resultado: %.2f",num1 / num2);
            
        }else {
            printf("Erro: Divisao por zero.\n");
        }
        break;
    
    default:
        printf("Operador invalido.\n");

        break;
    }
}



