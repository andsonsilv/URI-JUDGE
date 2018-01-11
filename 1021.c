#include<stdio.h>
#include<math.h>

int main(){

    float  valor = 0, vaitomarnocu = 0, aux = 0;
    int qnt = 0;

    scanf("%f", &valor);
    aux = valor;

    printf("NOTAS:\n");
    qnt = floorf(valor / 100);
    printf("%d nota(s) de R$ 100.00\n", qnt);
    vaitomarnocu = vaitomarnocu + (qnt * 100);
    valor = (valor - (qnt * 100));

    qnt = floorf(valor / 50);
    printf("%d nota(s) de R$ 50.00\n", qnt);
    vaitomarnocu = vaitomarnocu + (qnt * 50);
    valor = (valor - (qnt * 50));

    qnt = floorf(valor / 20);
    printf("%d nota(s) de R$ 20.00\n", qnt);
    vaitomarnocu = vaitomarnocu + (qnt * 20);
    valor = (valor - (qnt * 20));

    qnt = floorf(valor / 10);
    printf("%d nota(s) de R$ 10.00\n", qnt);
    vaitomarnocu = vaitomarnocu + (qnt * 10);
    valor = (valor - (qnt * 10));

    qnt = floorf(valor / 5);
    printf("%d nota(s) de R$ 5.00\n", qnt);
    vaitomarnocu = vaitomarnocu + (qnt * 5);
    valor = (valor - (qnt * 5));

    qnt = floorf(valor / 2);
    printf("%d nota(s) de R$ 2.00\n", qnt);
    vaitomarnocu = vaitomarnocu + (qnt * 2);
    valor = (valor - (qnt * 2));

    printf("MOEDAS:\n");

    qnt = floorf(valor / 1);
    printf("%d moeda(s) de R$ 1.00\n", qnt);
    vaitomarnocu = vaitomarnocu + (qnt * 1);
    valor = (valor - (qnt * 1));

    qnt = floorf(valor / 0.50);
    printf("%d moeda(s) de R$ 0.50\n", qnt);
    vaitomarnocu = vaitomarnocu + (qnt * 0.50);
    valor = (valor - (qnt * 0.50));

    qnt = floorf(valor / 0.25);
    printf("%d moeda(s) de R$ 0.25\n", qnt);
    vaitomarnocu = vaitomarnocu + (qnt * 0.25);
    valor = (valor - (qnt * 0.25));

    qnt = floorf(valor / 0.10);
    printf("%d moeda(s) de R$ 0.10\n", qnt);
    vaitomarnocu = vaitomarnocu + (qnt * 0.10);
    valor = (valor - (qnt * 0.10));

    qnt = floorf(valor / 0.05);
    printf("%d moeda(s) de R$ 0.05\n", qnt);
    vaitomarnocu = vaitomarnocu + (qnt * 0.05);
    valor = (valor - (qnt * 0.05));

    qnt = floorf(valor / 0.01);
    printf("%.0f moeda(s) de R$ 0.01\n", (aux - vaitomarnocu) * 100);

    return 0;
}
