#include <stdio.h>

int main () {
    int decimal = 1;

    do
    {
        printf("informe o dia da semana? 1-7 \n sair -> 0 \n");
        scanf("%d", &decimal);

        if (decimal != 0)
        {
            switch (decimal){
                case 1:
                    printf("Domingo \n");
                    break;
                case 2:
                    printf("Segunda \n");
                    break;
                case 3:
                    printf("Terça \n");
                    break;
                case 4:
                    printf("Quarta \n");
                    break;
                case 5:
                    printf("Quinta \n");
                    break;
                case 6:
                    printf("Sexta \n");
                    break;
                case 7:
                    printf("Sabado \n");
                    break;
                default:
                    printf("Número de dia não válido \n \n");
                    break;
            }
        }
        
    } while (decimal != 0);
    
    printf("Encerrando :)\n");

    return 0;
}
