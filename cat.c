#include <stdio.h>

int main()
{

    float a, b, c;

    char name[20];
    char nameTeacher[20];
    char vak[20];

    printf("Voer de naam van de leerling in.\n");
    printf(">> ");
    scanf("%19s", &name);

    printf("================================== \n");

    printf("Voer uw eigen naam in.\n");
    printf(">> ");
    scanf("%19s", &nameTeacher);

    printf("================================== \n");

    printf("Voer het vak voor het rapportcijfer in.\n");
    printf(">> ");
    scanf("%19s", &vak);

    printf("================================== \n");

    printf("Voer het 1e cijfer in.\n");
    printf(">> ");
    scanf("%f", &a);

    printf("================================== \n");

    printf("Voer het 2e cijfer in.\n");
    printf(">> ");
    scanf("%f", &b);

    printf("================================== \n");
    c = (a + b) / 2;
    printf("================================== \n");

    printf("    +-+( Rapport Van %s )+-+ \n", name);
    printf("    +-+( Docent: %s )+-+ \n", nameTeacher);
    printf("    +-+( Vak: %s Cijfer: %f )+-+ \n", vak, c);

    return 0;
}
