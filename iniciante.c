#include <stdio.h>
 
int main(){
//----CARTA 1
char estado1;
char codigo1 [10];        //TRING
char cidade1 [20];       //string
float populacao1;
float area1;
float pib1;
int pontos1;

 //----carta 2

char estado2;
char codigo2 [40];  //STRING
char cidade2 [40];  //STRING
float populacao2;
float area2;
float pib2;
int pontos2; 

//LEITURA CARTA 1
printf("======CARTA 1======\n");

printf("ESTADO: ");
scanf(" %c", &estado1);

printf("CODIGO: ");
scanf("%s", codigo1);

printf("CIDADE: ");
scanf("%s", cidade1);

printf("POPULAÇÃO ");
scanf("%f", &populacao1);

printf("ÁREA: ");
scanf("%f", &area1);

printf("PIB: ");
scanf("%f", &pib1);

printf("PONTOS TURISTICOS: ");
scanf("%i", &pontos1);

//LEITURA CARTA 2
printf("------CARTA 2------\n");

printf("ESTADO: ");
scanf(" %c", &estado2);

printf("CODIGO: ");
scanf("%s", codigo2);

printf("CIDADE: ");
scanf("%s", cidade2);

printf("POPULAÇÃO ");
scanf("%f", &populacao2);

printf("ÁREA: ");
scanf("%f", &area2);

printf("PIB: ");
scanf("%f", &pib2);

printf("PONTOS TURISTICOS: ");
scanf("%i", &pontos2);


    
    return 0;
}
