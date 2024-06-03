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
    printf("Conectado com sucesso!");
    printf("\nSeja bem-vindo");

    for(;;){
      int opc, i;

      system("clear");
      printf("\n\n*------------------*");
      printf("\n1-Trocar de Nome");
      printf("\n2-trocar senha");
      printf("\n3-Mostrar login");
      printf("\n4-Sair");
      printf("\n*------------------*\n\n");
      printf("Selecione a opcao: ");
      scanf("%d",&opc);
      switch(opc){
        case 1:
          printf("Digite seu novo Nome:");
          scanf ("%s",nome);
        break;
        
        case 2:
          printf("Nome");
          printf("Digite sua3 nova senha");
          scanf ("%s",senha);
          pause();
          system("clear");
        break;

        case 3:
          printf("Nome:%s\nSenha:%s",nome,senha);
          scanf("%c",&vazio);
                break;
        
        case 4:
          printf("obrigado!!");
          return 0;
        break;

        default:
          printf("\nOpcao Errada tente novamente\n");
          system("pause");
          system("clear");
            }
        }

    }else{
        printf("Nome ou Senha errada!\n");
        system("clear");



    }
}
    return 0;
}
