#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main(){
   
 char letra_cidade1;
 char Codigo1[10];
 char Cidade[20];
 unsigned long int populacao1;
 float Area_cidade1;
 float Pib1;
 int Pontos_turisticos1;

 char letra_cidade2;
 char Codigo2[10];
 char Cidade2[20];
 unsigned long int Populacao2;
 float Area_cidade2;
 float Pib2;
 int Pontos_turisticos2;


printf("Digite uma letra de A a H para o estado: \n");
scanf("%c",&letra_cidade1);

printf("Digite a letra ja digitada mais um numero entre 01 e 04 juntos: \n");
scanf("%s",Codigo1);

printf("Digite o nome da cidade: \n");
scanf(" %19[^\n]", Cidade)

printf("NUmero de habitantes: \n");
scanf("%lu",&populacao1);

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
scanf("%s",Codigo2);

printf("Digite o nome da cidade: \n");
scanf(" %19[^\n]", Cidade2)

printf("NUmero de habitantes: \n");
scanf("%lu",&Populacao2);

printf("Digite a area da cidade: \n");
scanf("%f",&Area_cidade2);

printf("Digite seu respectivo PIB: \n");
scanf("%f",&Pib2);

printf("Digite quantos pontos turisticos: \n");
scanf("%i",&Pontos_turisticos2);

float  Densidade_Populacional1 = populacao1/Area_cidade1;
float  Densidade_Populacional2 = Populacao2/Area_cidade2;

float Pib_per_capita1 = (Pib1 * 1000000000.0)/populacao1; 
float Pib_per_capita2 = (Pib2 * 1000000000.0)/populacao2;

float Super_Poder1 = populacao1 + Area_cidade1 + Pib1 + (float)Pontos_turisticos1 + Densidade_Populacional1 + Pib_per_capita1 + (1.0 / Densidade_Populacional1);
unsigned Super_Poder2 =(1/Densidade_Populacional2)+Pib_per_capita2+Pib2+(float)Pontos_turisticos1+Area_cidade2+Populacao2;

int PopulaçãoComparada= populacao1>Populacao2;
int AreaComparada=Area_cidade1>Area_cidade2;
int PibComparado=Pib1>Pib2;
int PontosTuristicos=Pontos_turisticos1>Pontos_turisticos2;
int PibpercaptaComparado=Pib_per_capita1>Pib_per_capita2;
int DensidadePopulacional=Densidade_Populacional1<Densidade_Populacional2;
int Super_PoderComparar = Super_Poder1>Super_Poder2;

if(Pontos_turisticos1>Pontos_turisticos2){
    printf("Cidade1 Venceu %d\n",Pontos_turisticos1);
}else if(Pontos_turisticos2>Pontos_turisticos1){
    printf("Cidade2 Venceu %d\n",Pontos_turisticos2);
}else{
    printf("Empate");
}

printf("Carta 1:\nEstado:%c\nCódigo:%s\nNome da Cidade:%s\nPopulação:%li\nÁrea:%.2f\nPIB:%.2f\nNúmero de Pontos Turísticos:%i\nDensidade Populacional:%.2f\nPIB per Capita:%.2f\nSuper Poder1:%.2f\n",letra_cidade1,Codigo1,Cidade,populacao1,Area_cidade1,Pib1,Pontos_turisticos1,Densidade_Populacional1,Pib_per_capita1,Super_Poder1);

printf("Carta 2:\nEstado:%c\nCódigo:%s\nNome da Cidade:%s\nPopulação:%lu\nÁrea:%.2f\nPIB:%.2f\nNúmero de Pontos Turísticos:%i\nDensidade Populacional:%.2f\nPIB per Capita:%.2f\nSuper Poder2:%.2f\n",letra_cidade2,Codigo2,Cidade2,Populacao2,Area_cidade2,Pib2,Pontos_turisticos2,Densidade_Populacional2,Pib_per_capita2,Super_Poder2);

printf("População:%d\nÁrea:%d\nPIB:%d\nPontos Turísticos:%d\nDensidade Populacional:%d\nPIB per Capita:%d\nSuper Poder:%d\n",PopulaçãoComparada,AreaComparada,PibComparado,PontosTuristicos,DensidadePopulacional,PibpercaptaComparado,Super_PoderComparar);

return 0;
}
