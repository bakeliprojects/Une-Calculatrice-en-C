
#include <stdio.h>
  double a, b, result;

     double addition(double a, double b){
     result=a+b;
     return a+b;
 }

  double soustracton(double a, double b){
     result = a-b;
     return a-b;
 }

  double multiplication(double a, int b){
     result= a*b;
     return a*b;
 }

  double division(double a, double b){
     result= a/b;
     return a/b;
 }

 int main(){

    int choix;


 printf("que voulez-vous faire\n");
    printf("1.Addition\n");
     printf("2.Soustraction\n");
      printf("3.division\n");
       printf("4.multiplication\n");
        scanf("%d", &choix);
         printf("\n");

         switch(choix){
         case (1)://addition
             printf("vous faite une addition");
            printf("votre premier nbre\n");
             scanf("%lf", &a);
              printf("votre deuxieme nbre\n");
               scanf("%lf", &b);
                result=addition(a,b);
                 printf("le resultat de l'addition est:%f", result);
                  break;

                 case(2)://soustraction
               printf("vous faite une soustraction");
            printf("choix votre premier nbre\n");
             scanf("%lf", &a);
              printf("choix votre deuxieme nbre\n");
               scanf("%lf", &b);
                result=soustracton(a,b);
                 printf("le resultat est de la soustraction:%f", result);
                 break;



                 case (3)://division
               printf("vous faite une division\n");
            printf("votre premier nbre\n");
             scanf("%lf", &a);
              printf("votre deuxieme nbre\n");
               scanf("%lf", &b);
               if(a==0)
                printf("Impossible de divise par zero\n");
                else {
                result=division(a,b);
                 printf("le resultat de la division est:%f", result);
                 }
                 break;


                       case (4)://multiplication
                printf("vous faite une multiplication");
            printf("votre premier nbre\n");
             scanf("%lf", &a);
              printf("votre deuxieme nbre\n");
               scanf("%lf", &b);
                result=multiplication(a,b);
                 printf("le resultat de la multiplication est:%f", result);
                 break;


                    default:
                      printf("choisir une operation");

         }
         return 0;
}
