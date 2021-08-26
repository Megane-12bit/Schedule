#include <stdio.h>

int main(){
//Enunciado 01
int dia, mes, ano,data;
printf("\t\tIniciando enunciado 01");
printf("\n\n Digite a data em DDMMAAAA:");
    scanf("%d", &data);
    dia=data/1000000;  
    mes=data/10000;
    mes= mes % 100;
    ano=data % 10000;
printf("O ano digitado foi: %02d/%02d/%d", dia,mes,ano);


//Enunciado 02
printf("\n\n \t\tIniciando Enunciado 02");
float etanol, V_dinheiro, Consumo_litro,Lgasto,Idia,Fdia;
  etanol=2.44;


    printf("\n\nMarcacao no inicio do dia:");
        scanf("%f", &Idia);
    printf("Marcacao no final do dia:");
        scanf("%f", &Fdia);
    printf("Digite a quantidade de litros gastos:");
        scanf("%f", &Lgasto);
    printf("Digite o valor em R$ recebido:");
        scanf("%f", &V_dinheiro );
    Consumo_litro= (Fdia-Idia)/Lgasto;
    V_dinheiro=V_dinheiro-(Lgasto*etanol);
  printf("A media do consumo e: %0.1f Km por L", Consumo_litro );
  printf("\nLucro adquirido foi de: R$%0.2f", V_dinheiro);

}
