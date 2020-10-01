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
    /*************************************Exercice n°5******************************************************/
    float c,f=0; //initialisation déclaration des variables
    printf("Veuillez saisir une valeur en farenheit\n");
    scanf("%f",&f);  //saisie de f
    printf("Valeur en Celcius: %0.2f\n",(float)5/9*(f-32)); //Affichage de la valeur de la formule attention cast en float d'un entier obligatoire
    printf("Veuillez saisir une valeur en Celcius\n");
    scanf("%f",&c); //saisie de c
    printf("Valeur en Farenheit: %0.2f\n",((9*c)/5)+32); //Affichage de la valeur de la foraule
    /***********************************Exercice n°6*********************************************************/
    int u,v,w=5;
    float fl,fl1=2;

    w=u/v; //pas de conversion tous est du même type
    printf("resultat %d",w);
    fl=(float)u/v; //conversion imperative car u et v sont deux entiers
    printf("resultat %f",fl);
    fl=u/fl1; //ok présence d'un float dans le calcul
    printf("resultat %d %f",fl,fl);










    return 0;



}
