#include <stdio.h>  

int main() 
{
    float vf, vp, vi, soma;

    printf("Entre com o valor do carro: ");  
    scanf("%f", &vf);  

    printf("Entre com a porcentagem do distribuidor: ");  
    scanf("%f", &vp);  
    vp = vp / 100;

    printf("Entre com a porcentagem de impostos: ");  
    scanf("%f", &vi);  
    vi = vi / 100;

    soma = vf + (vf * vp) + (vf * vi);  

    printf("O valor final do carro é: %.2f\n", soma); 
    return 0;  
}
