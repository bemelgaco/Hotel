// Online C compiler to run C program online
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


//obtém o cargo do funcionário
printf("digite o cargo do funcionário: ");
fgets(funcionario.cargo,sizeof(funcionario.cargo),stdin);

//obtém o salario do funcionário
printf("digite o salário do funcionário: ");
("%f",&funcionario.salario);

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
    printf("salario......: %f\n",listaFuncionarios[cadastro].salario);
    printf("codigo.......: %d\n",listaFuncionarios[cadastro].codigo);
    
    return 0;
    
}



