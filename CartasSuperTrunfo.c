#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
char letra_cidade1;
 char letra_numero1[10];
 char nome_cidade1[20];
 int numero_de_habitantes1;
 float Area_cidade1;
 float Pib1;
 int Pontos_turisticos1;

 char letra_cidade2;
 char letra_numero2[10];
 char nome_cidade2[20];
 int numero_de_habitantes2;
 float Area_cidade2;
 float Pib2;
 int Pontos_turisticos2;


printf("Digite uma letra de A a H para o estado: \n");
scanf("%c",&letra_cidade1);

printf("Digite a letra ja digitada mais um numero entre 01 e 04 juntos: \n");
scanf("%s",&letra_numero1);

printf("Digite o nome da cidade: \n");
scanf("%s",&nome_cidade1);

printf("NUmero de habitantes: \n");
scanf("%i",&numero_de_habitantes1);

printf("Digite a area da cidade: \n");
scanf("%f",&Area_cidade1);

printf("Digite seu respectivo PIB: \n");
scanf("%f",&Pib1);

printf("Digite quantos pontos turisticos: \n");
scanf("%i",&Pontos_turisticos1);

printf("Agora os dados da cidade 2\n");

printf("Digite uma letra de A a H para o estado: \n");
scanf(" %c",&letra_cidade2);

printf("Digite a letra ja digitada mais um numero entre 01 e 04 juntos: \n");
scanf("%s",&letra_numero2);

printf("Digite o nome da cidade: \n");
scanf("%s",&nome_cidade2);

printf("NUmero de habitantes: \n");
scanf("%i",&numero_de_habitantes2);

printf("Digite a area da cidade: \n");
scanf("%f",&Area_cidade2);

printf("Digite seu respectivo PIB: \n");
scanf("%f",&Pib2);

printf("Digite quantos pontos turisticos: \n");
scanf("%i",&Pontos_turisticos2);

printf("Carta 1:\nEstado:%c\nCódigo:%s\nNome da Cidade:%s\nPopulação:%i\nÁrea:%f\nPIB:%f\nNúmero de Pontos Turísticos:%i\n",letra_cidade1,letra_numero1,nome_cidade1,numero_de_habitantes1,Area_cidade1,Pib1,Pontos_turisticos1);

printf("Carta 2:\nEstado:%c\nCódigo:%s\nNome da Cidade:%s\nPopulação:%i\nÁrea:%f\nPIB:%f\nNúmero de Pontos Turísticos:%i\n",letra_cidade2,letra_numero2,nome_cidade2,numero_de_habitantes2,Area_cidade2,Pib2,Pontos_turisticos2);
    
return 0;
}
