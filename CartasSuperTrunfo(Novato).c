#include <stdio.h>

int main () {

char Estado [3];
char Codigo [5];
char NomeCidade [50];    
int População;
float Área;
float PIB;
int Pontos;

char Estado2 [3];
char Codigo2 [5];
char NomeCidade2 [50];
int População2;
float Área2;
float PIB2;
int Pontos2;

//carta número 1

printf ("Carta Número 1 \n");

printf ("Digite a Sigla do Estado: ");
scanf ("%s", &Estado);

printf ("Digite o Código da carta: ");
scanf ("%s", &Codigo);

printf ("Digite o Nome da cidade: ");
scanf (" %49[^\n]", NomeCidade);

printf ("Digite a população: ");
scanf ("%d", &População);

printf ("Digite a Área: ");
scanf ("%f", &Área);

printf ("Digite o PIB do País: ");
scanf ("%f", &PIB);

printf ("Digite a quantidade de pontos turísticos: ");
scanf ("%d", &Pontos);

//carta número 2

printf ("Carta Número 2 \n");

printf ("Digite a Sigla do Estado: ");
scanf ("%s", &Estado2);

printf ("Digite o Código da carta: ");
scanf ("%s", &Codigo2);

printf ("Digite o Nome da cidade: ");
scanf (" %49[^\n]", NomeCidade2);

printf ("Digite a população: ");
scanf ("%d", &População2);

printf ("Digite a Área: ");
scanf ("%f", &Área2);

printf ("Digite o PIB do País: ");
scanf ("%f", &PIB2);

printf ("Digite a quantidade de pontos turísticos: ");
scanf ("%d", &Pontos2);

//Calculos para Densidade Populacional e PIB por capital

float Densidade1;
float Densidade2;
float PIBCapital1;
float PIBCapital2;

Densidade1 = (float) População / Área;
Densidade2 = (float) População2 / Área2;

PIBCapital1 = (float) PIB / População;
PIBCapital2 = (float) PIB2 / População2;

//Resultados Finais 

//Carta 1
printf("_____________________________ \n");
printf ("*** |Resultado número 1| *** \n");
printf ("____________________________ \n");

printf ("Estado: %s\n", Estado);
printf ("Código da Carta: %s\n", Codigo);
printf ("Nome da cidade: %s\n", NomeCidade);
printf ("População total: %d\n", População);
printf ("Área total: %.3f km²\n", Área);
printf ("PIB total do País: %.2f \n", PIB);
printf ("Pontos turísticos: %d \n", Pontos);
printf ("Densidade Populacional é: %.2f\n", Densidade1);
printf ("O Pib por capital é: %.3f\n", PIBCapital1);
printf("_____________________________ \n");

//Carta 2
printf ("*** |Resultado número 2| *** \n");
printf ("____________________________ \n");

printf ("Estado: %s\n", Estado2);
printf ("Código da Carta: %s\n", Codigo2);
printf ("Nome da cidade: %s\n", NomeCidade2);
printf ("População total: %d \n", População2);
printf ("Área total: %.3f km²\n", Área2);
printf ("PIB total do País: %.2f \n", PIB2);
printf ("Pontos turísticos: %d \n", Pontos2);
printf ("Densidade Populacional é: %.2f\n", Densidade2);
printf ("O Pib por capital é: %.3f\n", PIBCapital2);
printf ("____________________________");

return 0;

}
