#include <stdio.h>  // <-- Faltavam < e >

int main()  // <-- 'void main()' não é padrão, o correto é 'int main()'
{
    float vf, vp, vi, soma;

    printf("Entre com o valor do carro: ");  // <-- Faltava ;
    scanf("%f", &vf);  // <-- Faltava ; e a aspa estava fora do lugar

    printf("Entre com a porcentagem do distribuidor: ");  // <-- Faltava ;
    scanf("%f", &vp);  // <-- Faltava ; e a aspa estava fora do lugar
    vp = vp / 100;

    printf("Entre com a porcentagem de impostos: ");  // <-- Faltava ;
    scanf("%f", &vi);  // <-- Faltava ; e a aspa estava fora do lugar
    vi = vi / 100;

    soma = vf + (vf * vp) + (vf * vi);  // <-- Faltava ;

    printf("O valor final do carro é: %.2f\n", soma);  // <-- Formato corrigido
    return 0;  // <-- Adicionado retorno para 'int main()'
}