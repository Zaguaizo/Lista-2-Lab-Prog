int main()
{
   int dia;
   
  
   
   do{
        printf("Insira um número de 1 até 7 para saber o dia da semana.\nInsira 0 para encerrar o programa.\n");
        scanf("%d", &dia);
        
        
        
       if(dia == 1){
           printf("O dia correspondente é segunda!\n");
       }
       else if(dia == 2){
           printf("O dia correspondente é terça!\n");
       }
       else if(dia == 3){
           printf("O dia correspondente é quarta!\n");
       }
       else if(dia == 4){
           printf("O dia correspondente é quinta!\n");
       }
       else if(dia == 5){
           printf("O dia correspondente é sexta!\n");
       }
       else if(dia == 6){
           printf("O dia correspondente é sábado!\n");
       }
       else if(dia == 7){
           printf("O dia correspondente é domingo!\n");
       }
       else if(dia == 0){
           printf("O programa foi interrompido!\n");
       }else{
           printf("Número inválido!\n");
       }
       
   } while(dia != 0);

    
    return 0 ;
}
