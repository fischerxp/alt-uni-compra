#include <stdio.h>
#include <stdlib.h>

/*Os resistores custam R$ 1,30 cada, se forem comprados menos de 20
unidades, e R$ 1,00 se forem compradas pelo menos 20. Escreva um
programa que leia o número de resistores comprados, calcule e escreva
o custo total da compra.*/
/*desenvolvedora: @fischerxp*/


int main()
{
    float resistores1=1.30;
    float resistores2=1.00;
    int unidades;
    float valor;
    printf("quantas unidades compradas: ");
    scanf("%d",&unidades);
        if (unidades>=20)
        {
            valor=unidades*resistores2;
            printf("valor total: R$%.2f",valor);
        }
        else
        {
            valor=unidades*resistores1;
            printf("valor total: R$%.2f",valor);
        }
    return 0;


}
