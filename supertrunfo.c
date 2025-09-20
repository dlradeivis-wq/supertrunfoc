// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char sigla;
    
    // Declarações de variáveis 
    //Rio Janeiro
    float habitantes_rj = 6.211;
    float area_rj = 1.200;
    float pib_rj = 359.64;
    int turisticos_rj = 22;
//Sao paulo
    float habitantes_sp = 21.5;
    float area_sp = 8.051;
    float pib_sp = 3.5;
    int turisticos_sp = 22;
    
    //Belo Horizonte
    
    float habitantes_b =2.315 ;
    float area_b = 331.354;
    float pib_b = 41.818 ;
    int turisticos_b = 20;
    
    printf(" R - Rio de Janeiro\n S - São Paulo\n B - Belo Horizonte\n");
    printf("Digite a sigla do estado: ");
    scanf(" %c", &sigla);
    
    // Se a sigla for 'R' ou 'r'
    if (sigla == 'R' || sigla == 'r') {
        printf("\nVoce digitou a sigla do Rio de Janeiro!\n");
        printf("Numero total de habitantes: %.2f milhões\n", habitantes_rj);
        printf("Total da Area em km²: %.2f\n", area_rj);
        printf("O PIB da cidade é de: %.2f bilhões\n", pib_rj);
        printf("O total de Pontos Turisticos são: %d\n", turisticos_rj);
        printf("Bondinho,Pão de açucar, Lapa, Arpuador etc");
        
    } 
    // Se a sigla for 'S' ou 's'
    else if (sigla == 'S' || sigla == 's') {
        printf("\nVoce digitou a sigla de Sao Paulo!\n");
        printf("Numero total de habitantes: %.2f milhões\n", habitantes_sp);
        printf("Total da Area em km²: %.2f\n", area_sp);
        printf("O PIB da cidade é de: %.2f trilhões\n", pib_sp);
        printf("O total de Pontos Turisticos são: %d\n", turisticos_sp);
        printf("Parque do Ibirapuera, Bairro da Liberdade, Edificil chão de vidro e outros");
    }
    //Belo Horizonte
    // Se a sigla for 'B' ou 'b'
    else if(sigla == 'B' || sigla == 'b'){
        printf("Voce digitou a sigla de Belo Horizonte!");
        
        printf("\nVoce digitou a sigla do Rio de Janeiro!\n");
        printf("Numero total de habitantes: %.2f milhões\n", habitantes_rj);
        printf("Total da Area em km²: %.2f\n", area_b);
        printf("O PIB da cidade é de: %.2f bilhões\n", pib_b);
        printf("O total de Pontos Turisticos são: %d\n", turisticos_b);
        printf(" Feira Hippie,Praça da Liberdade, Feira Hippie, entre outros");
    
        
    }
    // Se nenhuma sigla foi reconhecida
    else {
        printf("Sigla nao reconhecida.\n");
    }

    return 0;
}