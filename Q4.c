#include <stdio.h>

int main(){
    
    int jose, pedro, anos, cresc_jose, cresc_pedro;
    jose = 150;
    pedro = 110;
    cresc_jose = 2;
    cresc_pedro = 3;
    anos = 0;
    
    while(pedro <= jose){
        jose += cresc_jose;
        pedro += cresc_pedro;
        anos++;
    }
    
    
    printf("Pedro ficou maior que Jose em %d anos!", anos);
    
    
    
    
    return 0;
}
