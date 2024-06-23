#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<stdbool.h>

// Define a estrutura para cadastro de cliente
struct cadastro_de_cliente {
    char nome[40];
    char endereco[40];
    int telefone;
    int codigo;

};
void scanClean() {
    int c;
    
    while ((c = getchar()) != '\n' && c != EOF) { }
}
 int numero = 1;
    struct  cadastro_de_cliente listaClientes [30];
    
     struct cadastro_de_cliente cadastrarCliente( ){
     // Declara uma variável do tipo cadastro_de_cliente
    struct cadastro_de_cliente cliente;
    cliente.codigo = numero++;
    // Imprime o cabeçalho
    printf("\n------Cadastro de cliente------\n\n\n");

    // Obtém o nome do usuário
    printf("Nome do usuário: ");
    // Usa fgets para ler a entrada e armazenar em cliente.nome
    fgets(cliente.nome, sizeof(cliente.nome), stdin);

    // Obtém o endereço do usuário
    printf("Endereço: ");
    // Usa fgets para ler a entrada e armazenar em cliente.endereco
    fgets(cliente.endereco, sizeof(cliente.endereco), stdin);

    // Obtém o telefone do usuário
    printf("Informe o seu telefone: ");
    // Usa scanf para ler a entrada e armazenar em cliente.telefone
    scanf("%d", &cliente.telefone);

    // Imprime os dados do usuário
   
     scanClean();
     return cliente;

}

int main(void) {

 int poltrona = 0;
// Função para remover o caractere de nova linha (\n) capturado por fgets


    for(int max; max < 3; max++){
    listaClientes[numero - 1] = cadastrarCliente ();
    }
    printf("Número do cliente: \n");
    scanf("%d",&poltrona);
    printf("\n\n --------- Lendo os dados da struct ---------\n\n");
    // Retorna 0 para indicar execução bem-sucedida
    printf("Nome ...........: %s\n", listaClientes[poltrona].nome);
    printf("Endereço .......: %s\n", listaClientes[poltrona].endereco);
    printf("Telefone .......: %d\n", listaCliente[poltrona].telefone);
    printf("Código .........: %d\n", listaClientes[poltrona].codigo);
    
    return 0;
    
}

