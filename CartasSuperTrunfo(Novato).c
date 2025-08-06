#include <stdio.h>

int main () {

int População;
float Área;
float PIB;
int Pontos;

int População2;
float Área2;
float PIB2;
int Pontos2;

//carta número 1

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

printf ("Digite a população: ");
scanf ("%d", &População2);

printf ("Digite a Área: ");
scanf ("%f", &Área2);

printf ("Digite o PIB do País: ");
scanf ("%f", &PIB2);

printf ("Digite a quantidade de pontos turísticos: ");
scanf ("%d", &Pontos2);

//Resultados Finais 

//Carta 1
printf ("Resultado número 1 \n");
printf ("População total: %d \n", População);
printf ("Área total: %.3f km²\n", Área);
printf ("PIB total do País: %.2f \n", PIB);
printf ("Pontos turísticos: %d \n", Pontos);


//Carta 2
printf ("Resultado número 2 \n");
printf ("População total: %d \n", População2);
printf ("Área total: %.3f km²\n", Área2);
printf ("PIB total do País: %.2f \n", PIB2);
printf ("Pontos turísticos: %d \n", Pontos2);

return 0;

}
