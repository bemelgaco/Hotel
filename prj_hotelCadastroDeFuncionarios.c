
#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<stdbool.h>

struct cadastro_funcionario {
    int codigo;
    char nome[30];
    int telefone;
    char cargo[30];
    float salario;
};
void scanClean() {
    int c;
    
    while ((c = getchar()) != '\n' && c != EOF) { }
}

int numero = 1;
//iniciaizando o cadastro de funcionarios 
struct cadastro_funcionario listaFuncionarios [30];
struct cadastro_funcionario cadastrarFuncionario ( ){
struct cadastro_funcionario funcionario;
funcionario.codigo = numero++;

//imprime o cabeçalho
printf("\n---cadastro de funcionários---\n\n\n");

//Obtém o nome do funcionário
printf("digite o nome do funcionário: ");
fgets(funcionario.nome, sizeof(funcionario.nome),stdin);

//Obtem o telefone do funcionário
printf("digite o telefone do funcionário: ");
scanf("%d",&funcionario.telefone);
scanClean();

//obtém o cargo do funcionário
printf("digite o numero do cargo:\n");
printf("numero 1 - recepcionista\n");
printf("numero 2 - auxiliar de limpeza\n");
printf("numero 3 - garçom\n");
printf("numero 4 - gerente\n");

int cargo = 0;
bool erro = true;

while(erro){
    
    printf("digite  o número do cargo do funcionário:");
    scanf("%d",&cargo);
    
    switch (cargo) {
            case 1:
                strcpy(funcionario.cargo, "Recepcionista");
                erro = false;
                break;

            case 2:
                strcpy(funcionario.cargo, "Auxiliar de Limpeza");
                erro = false;
                break;

            case 3:
                strcpy(funcionario.cargo, "Garçom");
                erro = false;
                break;

            case 4:
                strcpy(funcionario.cargo, "Gerente");
                erro = false;
                break;

            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }
}



//obtém o salario do funcionário
printf("digite o salário do funcionário: ");
scanf("%2f",&funcionario.salario);

//imprime os dados do usuário
    scanClean();
    return funcionario;

}

int main (void){
    int cadastro = 0;
    
    for(int max;max < 3; max++){
    listaFuncionarios[numero - 1] = cadastrarFuncionario();
    }
    
    printf("Numero do funcionario: \n");
    scanf("%d", &cadastro);
    printf("\n-----Lendo os dados do funcionario-----\n\n");
    printf("nome.........: %s\n",listaFuncionarios[cadastro].nome);
    printf("telefone.....: %d\n",listaFuncionarios[cadastro].telefone);
    printf("cargo........: %s\n",listaFuncionarios[cadastro].cargo);
    printf("salario......: %.2f\n",listaFuncionarios[cadastro].salario);
    printf("codigo.......: %d\n",listaFuncionarios[cadastro].codigo);
    
    
    
    return 0;
    
}
