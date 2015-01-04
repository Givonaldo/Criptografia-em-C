#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Configuração da Chave para criptografia
char CHAVE[]="AbCd";

int TAM_CHAVE=strnlen(CHAVE);

//-------------------------------------------

// Vetor de Entrada Criptografado

char TEXTO[100000];
int TAM_TEXTO=100000;

// ----------------------------------------------

void Recebe_Texto(char tipo){

    char aux[TAM_TEXTO];

    if(strcmp(tipo, "msg") == 0){
        printf("\n\nReceber Mensagem para criptografar\n\n");
        printf("\n\nDigite o Texto: ");
        gets(aux);

        if (strlen(aux) <= TAM_TEXTO){
            printf("\n\nTexto Recebido com sucesso");

        }else {
            printf("\n\nErro!\nTamanho do texto excede o limite de caracteres");

        }

        system("pause");
    }if(strcmp(tipo, "arquivo") == 0){
        printf("\n\n\nRecebendo arquivo\n\n");
    }else {
        printf("\n\nErro ao receber texto\n\n");

    }


}

void Menu_Criptografar(){
    int opcao;
    printf("\n\tCriptografia de Dados");
    printf("\n\nCriptografar mensagem ou arquivo");
    printf("\n\n\n 1 - Digitar Mensagem");
    printf("\n\n 2 - Importar Arquivo de Texto (txt)");
    printf("\n\n 3 - Voltar ao Menu Principal");
    printf("\n\n Informe a Opção desejada");
    scanf("%d",&opcao);
    setbuf(stdin, NULL);
    switch(opcao){
    case 1:

        Recebe_texto("msg");
        break;
    case 2:

        Recebe_texto("arquivo");
        break;
    case 3:
        break;
    default:
        printf("Opção Inválida! Tente Novamente...");
    }

}

void Menu(){

    int opcao;

    while(1){

        printf("\n\tCriptografia de Dados");
        printf("\n\n 1 - Criptografar Mensagem");
        printf("\n\n 2 - Receber Arquivo");
        printf("\n\n 3 - Sair");
        printf("\n\n Informe a opção desejada: ");
        scanf("%d",&opcao);
        setbuf(stdin, NULL);
        //_--------------------------------------------------------
        switch (opcao){
        case 1:

            Menu_Criptografar();

            break;
        case 2:

            Recebe_Arquivo();

            break;
        case 3:

            printf("\nFinalizando... \n\n");
            system("pause");
            exit(0);
            break;

        default:
            printf("Opção Inválida! Tente Novamente...");
        }
    }
}

int main() {

    Menu();

    return 0;
}
