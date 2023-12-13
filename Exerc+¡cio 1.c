/*Criar variáveis estáticas e dinâmicas para representar:
a)	O salário de uma pessoa;
b)	O nome de uma pessoa;
c)	A data de nascimento de uma pessoa (dia, mês e ano);
d)	Uma pessoa através do seguinte conjunto de informações: nome, data de nascimento e salário.
e)	Um vetor de 100 pessoas com os dados do item d) acima;
f)	Uma matriz 10x10 de pessoas com os dados do item d) acima.*/

#include <stdio.h>
#include <stdlib.h>
//a)                     salario      sal          *sal
main ()                 1000,00       220          5000
{                        100          102          220
 float salario,*sal;

 printf("Digite o salario 1: ");
 scanf("%f",&salario);
 sal=(float *)malloc(sizeof(float));
 printf("Digite o salario 2: ");
 scanf("%f",&*sal);
 printf("Salario 1 = R$ %.2f | Salario 2 = R$ %.2f\n\n",salario,*sal);
 free(sal);

//b)
 char nome[50], *nom;
 printf("Digite o nome 1: ");
 fflush(stdin);
 gets(nome);
 nom=(char *)malloc(50*sizeof(char));
 printf("Digite o nome 2: ");
 //gets(nom);
 scanf("%[^\n]",&*nom);    //le caracteres até o fim de linha   ou usar gets(nom);
 printf("Nome 1 = %s | Nome 2 = %s\n\n",nome,nom);
 free(nom);

 //c)
 struct data
 {
   int dia,mes,ano;
 };
 typedef struct data DATA;
 DATA nascimento, *nasc;

 printf("Digite a data de nascimento (dd/mm/aa): ");
 scanf("%d/%d/%d",&nascimento.dia,&nascimento.mes,&nascimento.ano);
 nasc=(DATA *)malloc(sizeof(DATA));
 printf("Digite a data de nascimento (dd/mm/aa): ");
 scanf("%d/%d/%d",&(*nasc).dia,&nasc->mes,&nasc->ano);
 printf("Nascimento 1 = %d/%d/%d | Nascimento 2 = %d/%d/%d\n\n",nascimento.dia,
        nascimento.mes,nascimento.ano,nasc->dia,nasc->mes,nasc->ano);
 free(nasc);
//d)
 struct pessoa
 {
   char nome[50];
   DATA nasc;
 };
 typedef struct pessoa PESSOA;
 PESSOA p_est, *p_din;

 printf("Digite o nome 1: ");
 fflush(stdin);
 gets(p_est.nome);
 printf("Digite a data de nascimento 1 (dd/mm/aa): ");
 scanf("%d/%d/%d",&p_est.nasc.dia,&p_est.nasc.mes,&p_est.nasc.ano);

 p_din=(PESSOA *)malloc(sizeof(PESSOA));
 printf("Digite o nome 2: ");
 fflush(stdin);
 gets(p_din->nome);
 printf("Digite a data de nascimento 2 (dd/mm/aa): ");
 scanf("%d/%d/%d",&p_din->nasc.dia,&p_din->nasc.mes,&p_din->nasc.ano);

 printf("%s nasceu em %d/%d/%d | %s nasceu em %d/%d/%d\n\n",p_est.nome,p_est.nasc.dia,
        p_est.nasc.mes,p_est.nasc.ano,p_din->nome,p_din->nasc.dia,p_din->nasc.mes,p_din->nasc.ano);
 free(p_din);
//e)

 printf("\n\n");

#define MAX 2
 PESSOA v_est[MAX], *v_din;

 for(int i = 0; i<MAX; i++)
 {
   printf("Digite o nome: ");
   fflush(stdin);
   gets(v_est[i].nome);
   printf("Digite a data de nascimento 1 (dd/mm/aa): ");
   scanf("%d/%d/%d",&v_est[i].nasc.dia,&v_est[i].nasc.mes,&v_est[i].nasc.ano);
 }
 printf("\n");
 for(int i = 0; i<MAX; i++)
 {
   printf("%s nasceu em %d/%d/%d\n",v_est[i].nome,v_est[i].nasc.dia,v_est[i].nasc.mes,v_est[i].nasc.ano);
 }

 printf("\n");

 v_din=(PESSOA *)malloc(MAX*sizeof(PESSOA));
 for(int i = 0; i<MAX; i++)
 {
   printf("Digite o nome: ");
   fflush(stdin);
   gets((v_din+i)->nome);
   printf("Digite a data de nascimento 1 (dd/mm/aa): ");
   scanf("%d/%d/%d",&(v_din+i)->nasc.dia,&(v_din+i)->nasc.mes,&(v_din+i)->nasc.ano);
 }
 printf("\n");
 for(int i = 0; i<MAX; i++)
 {
   printf("%s nasceu em %d/%d/%d\n",(v_din+i)->nome,(v_din+i)->nasc.dia,(v_din+i)->nasc.mes,(v_din+i)->nasc.ano);
 }
 free(v_din);

//f)
 PESSOA m_esta[MAX][MAX], *m_din;
 m_din=(PESSOA *)malloc(MAX*MAX*sizeof(PESSOA));
 int i,j;
 for(i = 0; i<MAX*MAX; i++)
 {
    printf("\nDigite o nome: ");
    fflush(stdin);
    gets((m_din+i)->nome);
    printf("Digite a data de nascimento (dd/mm/aa): ");
    scanf("%d/%d/%d",&(m_din+i)->nasc.dia,&(m_din+i)->nasc.mes,&(m_din+i)->nasc.ano);
 }
 printf("\n");
 for(int i = 0; i<MAX*MAX; i++)
 {
    if (i == MAX)
       printf("\n");
    printf("%s nasceu em %d/%d/%d\n",(m_din+i)->nome,(m_din+i)->nasc.dia,
             (m_din+i)->nasc.mes,(m_din+i)->nasc.ano);
 }
 free(m_din);
}

