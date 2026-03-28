
/*
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int nombreDeVie = 5, niveau = 1;

    printf ("Vous demarrez avec %d vie et vous commencerez au niveau %d\n", nombreDeVie, niveau);
    printf ("****B A M ****\n"); // il se prends une attaque 
    nombreDeVie = 4, niveau = -1; //Il a perdu une vie 
    printf("Arhh, il ne me reste plus que %d vie, quoi !? je suis descendu au niveau %d\n ", nombreDeVie, niveau);

    return 0;
}





#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    printf("Quel age avez-vous ?\n");
    int age = 0;
    scanf("%d", &age);
    printf("Vous avez %d ans\n", age);

    return 0;
}




#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double result = 0;
    result = 5.0 / 2.0;
    printf("5 / 2 = %lf\n", result);

}



#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int nombre_1 = 0, nombre_2 = 0;
    scanf("%d", &nombre_1);
    scanf("%d", &nombre_2);
    int result = nombre_1 + nombre_2;
    printf("Le resultat de %d + %d est egale a %d\n", nombre_1, nombre_2, result);

    return 0;
}




#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int age = 15;

    if(age >= 18)
    {
        printf("Vous etes majeur !");
    }
    //return printf("Vous n'etes pas majeur");




    int ag = 20;
    int ages = 0;
    int majeur = ag >= ages;
    majeur = !majeur;
    printf("%d\n", majeur);
    return 0;
}
    



#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *args[])
{
    int age = 6;

    switch(age)
    {
        case 5:
            printf("yo");
            break;
            
        case 6:
            printf("yaaaaaaaa");
            break;
        case 7:
            printf("yi");
            break;
    }
}





#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argsv[])
{
    
    puts("\n===Menu===\n1. Royal Cheese\n2. Mc Deluxe\n3. Mc Bacon\n4. Big Mac\n\nChoisissez votre menu :");
    int choixClient = 0;
    scanf("%d", &choixClient);

    switch(choixClient)
    {
        case 1:
        printf("Tu as choisis le menu Royal Cheese");
        break;

        case 2:
        printf("Tu as choisis le menu Mc Deluxe");
        break;

        case 3:
        printf("Tu as choisis le menu Mc Bacon");
        break;

        case 4:
        printf("Tu as choisis le menu Big Mac");
        break;
        
        default:
        printf("Change");


    }
    return 0;
}


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int change = 5;
    int achange = (change <= 6) ? 1 : 0;
    printf("%d", achange);
    return 0;

}



#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int count = 0;

    while(count != 47)
    {
        printf("Tapez le nombre 47 :");
        scanf("%d", &count);

    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int count = 10;

    do 
    {
        printf("Hello Sir %d!\n", count);
        count++;
    }while(count<10);
    return 0;
}
    
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i;

    for(i = 20; i > 10; i --)
    {
        printf("Welcome %d\n", i);
    }
    return 0;
}


#include <stdio.h>
#include <stdlib.h>

int triple(int nombre)
{
    return 3*nombre;
}

int main(int argc, char *argv[])
{
    int nombreEntree = 0, nombreTriple = 0;
    printf("Entrez un nombre...");
    scanf("%d", &nombreEntree);

    nombreTriple = triple(nombreEntree);
    printf("Le triple de ce nombre est %d\n", nombreTriple);

    return 0;

}



#include <stdio.h>
#include <stdlib.h>

// La ligne suivante est le prototype de la fonction aireRectangle :
double aireRectangle(double largeur, double hauteur);

int main(int argc, char *argv[])
{   
    printf("Rectangle de largeur 5 et hauteur 10. Aire = %f\n", aireRectangle(5, 10));
    printf("Rectangle de largeur 2.5 et hauteur 3.5. Aire = %f\n", aireRectangle(2.5, 3.5));
    printf("Rectangle de largeur 4.2 et hauteur 9.7. Aire = %f\n", aireRectangle(4.2, 9.7));
   
    return 0;
}

// Notre fonction aireRectangle peut maintenant être mise n'importe où dans le code source :
double aireRectangle(double largeur, double hauteur)
{
    return largeur * hauteur;
}

*/

#include <stdio.h>
#include "helloworld.h"

int main(int argc, char *argv[])
{
    double resultat;
    resultat = aireRectangle(10.0, 20.0);

    printf("L'aire du rectangle est %f", resultat);
    return 0;
    
}