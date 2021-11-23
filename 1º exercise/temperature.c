#include <stdio.h>

int main(){
    double celcius, farenheit;

    printf("Digite a temperatura em celcius");
    scanf("%f", celcius);

    farenheit = (celcius * 9/5) + 32;
    printf(" A Temperatura em farenheit é de: ", farenheit);
    return 0;
}