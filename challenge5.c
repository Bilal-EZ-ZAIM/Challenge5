#include <stdio.h>
#include <math.h>

// Challenge 5 : Distance entre deux points
// prof Aymane
// prof Said
// étudiant Bilal EZZAIM
// function welcom to project
void premierFonction()
{
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
    printf("                 =================== Challenge 5 : Distance entre deux points ====================\n");
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
}

int main()
{
    premierFonction();
    int x1, y1, x2, y2 , MN;
    printf("Ecrevez le numéro x1 coordonnées M : ");
    scanf("%d" , &x1);
    printf("Ecrevez le numéro y1 coordonnées M : ");
    scanf("%d" , &y1);
    printf("Ecrevez le numéro x2 coordonnées N : ");
    scanf("%d" , &x2);
    printf("Ecrevez le numéro y2 coordonnées N : ");
    scanf("%d" , &y2);

    MN = sqrt(pow((x2 - x1) , 2) + pow((y2 - y1) , 2) );

    printf("la distance entre deux points = %d",MN);

    //la distance entre deux points
    

    return 0;
}