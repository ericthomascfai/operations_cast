#include <stdio.h>

int main() {
    /************************************Révision********************************************************/
    double x=0,y=0; //Attention le résultat d'une operation est du même type
    double s=0;
    printf("Veuillez saisir la valeur de x\n");
    scanf("%d",&x);
    printf("Veuillez saisir la valeur de y\n");
    scanf("%d",&y);
    /***************premiere façon**************************/
    s=x/y;
    printf("Le résultat de la division de x/y est %0.2lf\n",s); // 0.2 deux chiffres après la virgule
    /***************deuxième façon***************************/
    printf("Le résultat de la division de x/y est %0.2lf\n",x/y);
    /******************************************Exercice n°3**********************************************/
    int n=0;
    printf("Veuillez saisir un nombre entier");
    scanf("%d",&n);
    printf("opposé:%d\n",n*-1);
    printf("Moitier exacte: %lf\n",(double)n/2);
    /*****************************************Exercice n°4*************************************************/
    float franc,euro=0; //déclaration & init des variables
    const float taux=6.555967; //déclaration & init des variobles
    printf("Veuillez taper la valeur en franc\n");
    scanf("%f",&franc); //saisie de la valeur en franc
    euro=franc/taux; //calcul de valeur en euro
    printf("la valeur en euro est %0.2f\n",euro); //affichage de la valeur en euro




    return 0;



}
