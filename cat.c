#include <stdio.h>

float a, b, c;
char naamLeerling[20];
char naamLeraar[20];
char naamVak[20];

void askStrings()
{
    printf("Wat is de naam van de leerling?\n");
    printf(">> ");
    scanf("%19s", naamLeerling);
    
    printf("Wat is uw naam?\n");
    printf(">> ");
    scanf("%19s", naamLeraar);

    printf("Wat is het vak wat u wilt berekenen.\n");
    printf(">> ");
    scanf("%19s", naamVak);
}

void askNumber()
{
    printf("Geef het 1e cijfer.\n");
    printf(">> ");
    scanf("%f", &a);
    
    printf("Geef het 2e cijfer.\n");
    printf(">> ");
    scanf("%f", &b);
} 

int main()
{
    
    askStrings();
    askNumber();
    
    c = (a + b) / 2;
    
    printf("====+-RAPPORT-+==== \n");
    printf("Naam leerling: %s \n", naamLeerling);
    printf("Naam leraar: %s \n", naamLeraar);
    printf("Vak: %s \n", naamVak);
    printf("Cijfer: %f \n", c);
    printf("====+-RAPPORT-+====");
    
    return 0;
    
}
