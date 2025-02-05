#include <stdio.h> //biblioteca de comunicação com o usuario
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocações de texto por região
#include <string.h> // biblioteca responsavel por cuidar das strings

int registro ()
{
     char arquivo[40];
     char cpf[40];
     char nome[40];
     char sobrenome[40];
     char cargo[40];
     
     printf("Digite o CPF a ser cadastrado:");
     scanf("%s", cpf);
     strcpy(arquivo,cpf);//Responsável por copiar os valores das strings
     
     FILE *file; //cria o arquivo
     file=fopen(arquivo, "w"); // cria o arquivo
     fprintf(file,cpf); // salvo o valor da variavel
     fclose(file); // fecha o arquivo
	 
	 file=fopen(arquivo, "a");
	 fprintf(file,",");
	 fclose(file);
	 
	 printf("Digite o nome a ser cadastrado: ");
	 scanf("%s", nome);
	 
	 file=fopen(arquivo, "a");
     fprintf(file,nome);
	 fclose(file);
	 
	 printf("Digite o sobrenome a ser cadastrado: ");
	 scanf("%s", sobrenome);
	 
	 file=fopen(arquivo, "a");
     fprintf(file,sobrenome);
	 fclose(file);
	 
	 file=fopen(arquivo, "a");
	 fprintf(file,",");
	 fclose(file);
	 
	 printf("Digite o cargo a ser cadastrado: ");
	 scanf("%s", sobrenome);
	 
	 file=fopen(arquivo, "a");
     fprintf(file,cargo);
	 fclose(file);
	 
	 file=fopen(arquivo, "a");
	 fprintf(file,",");
	 fclose(file);
	 
	 system("pause");
	 

		  }


	  int consulta()
 {
 	
	 setlocale(LC_ALL, "Portuguese"); //Definido a linguagem
	 
	 	char cpf[40];
 		char conteudo[200];
 		
 		printf("Digite o CPF a ser consultado: ");
        scanf("%s", cpf);
     
     FILE *file;
     file = fopen(cpf,"r");
     
     if(file == NULL)
     {
     	printf("Não encontrado!.\\n");
	 }
     
     while(fgets(conteudo, 200, file) != NULL)
     {
     	printf("\nEssas são as informações do usuário: ");
     	printf("%s", conteudo);
     	printf("\n\n");     	
	 }
     
   	system("pause");
   	
   	
 }

int deletar()
{
	printf("Você escolheu deletar nomes!\n");
	system("pause");
}


int main ()
{
     int opcao=0;
     int laco=1;
     
	 for (laco=1;laco=1;)
{

	system("cls");
	
	setlocale(LC_ALL, "Portuguese"); //Definido a linguagem
	
	printf("### Cartório da EBAC ###\n\n");//Inicio do menu
	printf("Escolha a opção desejada do menu:\n\n");
	printf("\t1 - Registrar nomes\n");
	printf("\t2 - Consultar nomes\n");
	printf("\t3 - Deletar nomes\n\n");
	printf("Opção:");//Fim do menu
	
	scanf("%d", &opcao);//Armazenando a escolha do usuário
	
	system("cls");
	
	 switch(opcao)
	 
	{
		case 1:
			registro();
		break;
		
		case 2:
			consulta();
		break;
		
		case 3:
			deletar();
		break;
		
		default:
			
		printf("Opção não disponível!\n");
		system("pause");//Fim da seleção
		break;
	
        }
    }
}

		
		
