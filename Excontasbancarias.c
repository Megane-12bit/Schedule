#include <stdio.h>
#include <string.h>



/*1 Cadastrar contas.   OK
2 Visualizar todas as contas de determinado cliente  OK 
 3 Excluir a conta com menor saldo (Suponha a nKao-existKencia de saldos
iguais).  OK and 
4 Sair.OK
*/
void mostrar_menu(){

  printf ("\nSelecione a opcao: ");
  printf ("\n1 Cadastrar contas");
  printf ("\n2 Visualizar todas as contas de determinado cliente");
  printf ("\n3 Excluir a conta com menor saldo");
  printf ("\n4 Sair\n");       
}
int ler_opcao() {
    int opcao_sel;
    scanf ("%d", &opcao_sel);
    return opcao_sel;
} 
int main ()
{ 
  
  struct cadatro_de_contas
  {
    int numero_da_conta[15];
    char nome_do_cliente[15][20];        // primeiro numero max de clientes e segundo n max carara
    float saldo[15];
  };
  struct cadatro_de_contas Cadastrar;
   int opcao_desejada;
  //primieiro vamos limitar os 15 clientes a 3 para facil teste;
  
 mostrar_menu(); // MENU DE OPCOES OK 
 opcao_desejada=ler_opcao();
  
//menu OK   

  if (opcao_desejada == 1)
    {
      for (int i = 0; i <= 14; i++)          // quantidade de cadastros controlada aqui
	  { 
	  printf ("Digite o numero da conta:");
	  scanf ("%d", &Cadastrar.numero_da_conta[i]);
	  printf ("Digite o nome do cliente: ");
	  scanf ("%s", &Cadastrar.nome_do_cliente[i]);
	  printf (" Digite o saldo: ");
	  scanf ("%f", &Cadastrar.saldo[i]);
     if (Cadastrar.numero_da_conta[i]==Cadastrar.numero_da_conta[i-1])
         {                                                               //verifica se já foi cadastrado
          printf("\n \tConta ja cadastrada!\n");
          return 0;
         }
	   }
    printf("\n\tNumero maximo de contas cadastradas!\n");                      
    mostrar_menu(); 
    opcao_desejada=ler_opcao();
    }
 if (opcao_desejada == 2)
    {
    printf("%s\n", Cadastrar.nome_do_cliente[0]);   
    char nome_aux[20];
    int retorno, i;
    printf("Lozalizar contas cadastradas pelo nome: ");
    scanf("%s", &nome_aux);
 for ( i=0; i <= 14; i++){ 
  retorno= strcmpi(nome_aux, Cadastrar.nome_do_cliente[i]);
     if (retorno == 0){
          printf("Encontrado a seguinte conta vinculada ao nome: %d \n", Cadastrar.numero_da_conta[i]);
        }
      }
     if(retorno != 0 ){
            printf("Nenhuma conta vinculadao ao seu nome!\n  ");
      }                   
    }
if (opcao_desejada == 3){
 
        int i; 
        for ( i=0; i<=14; i++ ){             
            //Faz a verificação se o saldo é diferente a posição sucessora e antecessora respectivamente e executa o codigo somente
            if(Cadastrar.saldo[i] != Cadastrar.saldo[i+1] && Cadastrar.saldo[i] != Cadastrar.saldo[i-1]) {       
                if(Cadastrar.saldo[i] < Cadastrar.saldo[i+1] && Cadastrar.saldo[i] < Cadastrar.saldo[i-1]){
                    printf("O menor saldo eh: %f ", Cadastrar.saldo[i]);
                    Cadastrar.saldo[i]= 0;  
                }
           }
        }
         printf("\n Deletado com sucesso! ");
         //reverify
         for (int i=0; i <= 14;i++){              //Prova que excluiu a posicao correta, nao consegui imprimir a posicao
         printf("\n %f", Cadastrar.saldo[i]); 
         }
          mostrar_menu(); 
          opcao_desejada=ler_opcao();
    }
    
  if (opcao_desejada == 4)
    {
      printf ("Voce optou por sair!!");
      return 0;

    }
} // FINAL PROGRAM.



