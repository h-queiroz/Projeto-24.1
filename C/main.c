#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(void)
{
  char vazio;
  char nome[15] = {"aluno"};
  char senha[15] = {"1234"};
  char nome1[15];
  char senha1[15];
for(;;){
  printf("Digite seu nome\n:");
  scanf("%s",nome1);

  printf("Digite sua senha\n:");
  scanf("%s",senha1);

  if(strcmp(senha, senha1) == 0 && strcmp(nome, nome1) == 0){
  	system("clear");
    printf("Conectado com sucesso!");
    printf("\nSeja bem-vindo %s\n\n", nome1);

    for(;;){
      int opc, i;

      printf("*------------------*");
      printf("\n1-Trocar de Nome");
      printf("\n2-Trocar senha");
      printf("\n3-Mostrar login");
      printf("\n4-Gerar Boleto");
      printf("\n5-Sair");
      printf("\n*------------------*\n\n");
      printf("Selecione a opção: ");
      scanf("%d",&opc);
      switch(opc){
        case 1:
          printf("Digite seu novo nome: ");
          scanf ("%s",nome);
		  printf("Nome alterado com sucesso\n");
		  sleep(2);
          system("clear");
        break;
        
        case 2:
          printf("Digite sua nova senha: ");
          scanf ("%s",senha);
		  printf("Senha alterada com sucesso\n");
		  sleep(2);
          system("clear");
        break;

        case 3:
		  printf("Nome: ");
		  puts(nome);
		  printf("Senha: ");
		  puts(senha);
		  sleep(3);
		  system("clear");
		break;

        /* case 4:
	  	  printf("\n Segunda Terça\t Quarta\t Quinta\t Sexta\t Sábado\t Domingo\n");
		  sleep(3);
          system("clear");
		break; */

        case 4:
		  printf("Boleto Gerado, clique no link abaixo para conferir\n");
		  printf("https://t.ly/w8ZM2\n");
		  sleep(3);
          system("clear");
		break;

        case 5:
          printf("Obrigado!!\n");
          return 0;
        break;

        default:
          printf("\nOpcao Errada tente novamente\n");
		  sleep(3);
          system("clear");
            }
        }

    }else{
        printf("Nome ou Senha errada!\n");
	    sleep(2);
        system("clear");
    }
}
    return 0;
}
