#include <stdio.h>

int main () {

char Estado [3];
char Codigo [5];
char NomeCidade [50];    
unsigned long int População;
float Área;
float PIB;
int Pontos;
float SuperPower;

char Estado2 [3];
char Codigo2 [5];
char NomeCidade2 [50];
unsigned long int População2;
float Área2;
float PIB2;
int Pontos2;
float SuperPower2;

//carta número 1

printf ("Carta Número 1 \n");

printf ("Digite a Sigla do Estado: ");
scanf ("%s", &Estado);

printf ("Digite o Código da carta: ");
scanf ("%s", &Codigo);

printf ("Digite o Nome da cidade: ");
scanf (" %49[^\n]", NomeCidade);

printf ("Digite a população: ");
scanf ("%lu", &População);

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
scanf ("%lu", &População2);

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

// Calculos Para o Super Power!

float InversoDensidade1;
float InversoDensidade2;

InversoDensidade1 = 1.0 / Densidade1;
InversoDensidade2 = 1.0 / Densidade2;

SuperPower = População + Área + PIB + Pontos + PIBCapital1 + InversoDensidade1;

SuperPower2 = População2 + Área2 + PIB2 + Pontos2 + PIBCapital2 + InversoDensidade2;

//Resultados Finais 

//Carta 1
printf("_____________________________ \n");
printf ("*** |Resultado número 1| *** \n");
printf ("____________________________ \n");

printf ("Estado: %s\n", Estado);
printf ("Código da Carta: %s\n", Codigo);
printf ("Nome da cidade: %s\n", NomeCidade);
printf ("População total: %lu\n", População);
printf ("Área total: %.3f km²\n", Área);
printf ("PIB total do País: %.2f \n", PIB);
printf ("Pontos turísticos: %d \n", Pontos);
printf ("Densidade Populacional é: %.2f\n", Densidade1);
printf ("O PIB per capita é: %.3f\n", PIBCapital1);
printf("_____________________________ \n");

//Carta 2
printf ("*** |Resultado número 2| *** \n");
printf ("____________________________ \n");

printf ("Estado: %s\n", Estado2);
printf ("Código da Carta: %s\n", Codigo2);
printf ("Nome da cidade: %s\n", NomeCidade2);
printf ("População total: %lu \n", População2);
printf ("Área total: %.3f km²\n", Área2);
printf ("PIB total do País: %.2f \n", PIB2);
printf ("Pontos turísticos: %d \n", Pontos2);
printf ("Densidade Populacional é: %.2f\n", Densidade2);
printf ("O PIB per capita é: %.3f\n", PIBCapital2);
printf ("____________________________ \n");

// Comparações 

printf ("O valor 1 é designado para a carta número 1, enquanto o valor zero para carta número 2 \n");

printf ("____________________________ \n");

int Resultado1, Resultado2, Resultado3, Resultado4, Resultado5, Resultado6, Resultado7;

Resultado1 = População > População2;
Resultado2 = Área > Área2;
Resultado3 = PIB > PIB2;
Resultado4 = Pontos > Pontos2;
Resultado5 = Densidade1 < Densidade2; 
Resultado6 = PIBCapital1 > PIBCapital2;
Resultado7 = SuperPower > SuperPower2;

printf("População: Carta %d venceu (%d)\n", Resultado1 ? 1 : 2, Resultado1);
printf (". \n");
printf("Área: Carta %d venceu (%d)\n", Resultado2 ? 1 : 2, Resultado2);
printf (". \n");
printf("PIB: Carta %d venceu (%d)\n", Resultado3 ? 1 : 2, Resultado3);
printf (". \n");
printf("Pontos Turísticos: Carta %d venceu (%d)\n", Resultado4 ? 1 : 2, Resultado4);
printf (". \n");
printf("Densidade Populacional: Carta %d venceu (%d)\n", Resultado5 ? 1 : 2, Resultado5);
printf (". \n");
printf("PIB per Capita: Carta %d venceu (%d)\n", Resultado6 ? 1 : 2, Resultado6);
printf (". \n");
printf("Super Poder: Carta %d venceu (%d)\n", Resultado7 ? 1 : 2, Resultado7);

return 0;

}
