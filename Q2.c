#include <stdio.h>
int main()
{
   int dia;
   
    printf("Insira um número de 1 até 7 para saber o dia da semana.\nInsira 0 para encerrar o programa.\n");
        scanf("%d", &dia);
   
   while(dia != 0){
        
        
       if(dia >= 1 || dia <= 7){
           switch(dia){
               case 1:
                    printf("O dia correspondente é segunda!\n");
                    break;
               case 2:
                    printf("O dia correspondente é terça!\n");
                    break;
               case 3:
                    printf("O dia correspondente é quarta!\n");
                    break;
               case 4:
                    printf("O dia correspondente é quinta!\n");
                    break;
               case 5:
                     printf("O dia correspondente é sexta!\n");
                    break;
               case 6:
                    printf("O dia correspondente é sábado!\n");
                    break;
               case 7:
                    printf("O dia correspondente é domingo!\n");
                    break;
                    
            }
        }else{
            printf("Número inválido!");
        }
           
    printf("Insira um número de 1 até 7 para saber o dia da semana.\nInsira 0 para encerrar o programa.\n");
        scanf("%d", &dia);
   }
       
    printf("O programa foi interrompido!\n");
    
    return 0;
}
