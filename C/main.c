#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main(void)
{
    
    char nome[15] = {"test"};
    char senha[15] = {"test"};
    char nome1[15];
    char senha1[15];


    
    printf("Digite seu nome\n:");
    scanf("%s",nome1);

    
    printf("Digite sua senha\n:");
    scanf("%s",senha1);

    if(strcmp(senha, senha1) == 0 && strcmp(nome, nome1) == 0){
        printf("Conectado com sucesso!");
        
        for(;;){
            int opc, i;

            system("cls");
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
                    for(i=0;i<=15;i++){
                    printf("%c\n",nome[i]);
                    }
                    system("pause");
                    system("cls");
                break;

                case 3:
                printf("Digite sua nova senha");
                scanf ("%s",senha);
                break;
            
                case 4:
                    printf("obrigado!!");
                    return 0;
                break;

                default:
                printf("\nOpcao Errada tente novamente\n");
                system("pause");
                system("cls");
            }
        }
        
    }else{
        printf("Senha errada");
        
    }
    return 0;
}
