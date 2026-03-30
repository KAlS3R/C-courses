/*#include <stdio.h>

int main(void)
{
	//declaration d'une variable de type entier (int)
	const float PI = 3.14;

	printf("PI = %.2f\n", PI);

	printf("PI = %.2f\n", PI);

	
	return 0;
}


 

wertwertwer wer wert wrt wer we
er twertewrtwert w
 wer t

wertwertwe 


int main(void)
{
	int ageUtilisateur = 0;

	printf("Quel age avez-vous ?");
	scanf("%d /n", &ageUtilisateur);

	printf("Vous avez %d ans.\n", ageUtilisateur);


	return 0;

}
	




#include <stdio.h>

int main(void)
{

	int nombre = 25;

	if(nombre < 20 )
	{
		printf("Nombre est inferieur a 20.\n");
	}
	else if(nombre == 25)
	{
		printf("calculer le nombre 1 \n");
	}
	else 
	{
		printf("Vous netes pas le bienvenue \n");
	}
	return 0;
}



#include <stdio.h>

int main(void)

{
	int balleX;
	int balleY;

	balleX = 0;
	balleY = 0  ;


}
 

#include <stdio.h>


int main(void)
{
	int v1 = -156;
	unsigned int v2 = 1645546;
	printf("INT : %d\n", v1);
	printf("UNSIGNED INT : %u\n", v2);

	float v3 = 23.2553f;
	printf("FLOAT : %f\n", v3);

	double v4 = 155312.1515;
	printf("DOUBLE : %.4lf\n", v4);

	puts("Bonjour tout le world");
	
	return 0;
	
}
	


#include <stdio.h>
#include <stdbool.h>

int main(void)

{
	bool result = (10 > 1) || (10 < 100);

	printf("%d\n", result);

	return 0;
}




#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	bool HasAccess = true;

	if(HasAccess)
	{

		puts("Vous avez acces au site.");
	}

	return 0;

}


#include <stdio.h>

int main(void)
{
	int i = 0;

	while(i < 5)
	{
		puts("ouai !!!!!");
		i++;
	}
	
	return 0;

}
 


#include <stdio.h>

void printHello()
{
	puts("----");
	puts("Bonjour tout le monde");
	puts("----");
}

void printInt(int n)
{
	printf("n = %d\n", n);
}


int returnmax(int a, int b)
{
	return (a > b) ? a : b;
	printf("first number = %d\n", a);
}
 int main(void)
{
	int maxnumber = returnmax(9, 6);
	printf("%d\n", maxnumber );
	return 0;  
}
	

#include "language.h"
#include <stdio.h>


int main(void)
{
	say_french_hello();
	say_japanese_hello();
	say_english_hello();
	
	return 0;
} 



#include <stdio.h>

#define ARRAY_SIZE(format, ...) fprintf(stderr, "ERREUR : " format, ##__VA_ARGS__)

int main(void)
{

	return 0;
}



#include <stdio.h>

int triple(int *nombre)
{
	*nombre *= 3;
}

int main(int argc, char * argv[])
{
	int value = 10;
	triple(&value);
	printf("%d", value);
	return 0;
}

*
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[])
{

	int tableau[4], i = 0;

	tableau[0] = 10;
	tableau[1] = 23;
	tableau[2] = 505;
	tableau[3] = 8;
	for (i = 0 ; i < 4 ; i++)
	{

		tableau[i] = i;
	}	

	for (i = 0; i < 4 ; i++)
	{
		printf("%d\n", tableau[i]);
	}
	return 0; 
}



#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
	int tableau[4] = {0, 0, 0, 0}, i = 0;
	for (i = 0; i < 4; i++)
	{
		printf("%p\n", &tableau[i]);
	}
	return 0;
}



#include <stdio.h>
#include <stdlib.h>


void affichertableau(int *tableau, int tailleDuTableau);
 
int main(int argc, char *argv[])
{
    int tableau[4] = {10, 15, 3};
 
    // On affiche le contenu du tableau
    affichertableau(tableau, 4);
 
    return 0;
}
 

void affichertableau(int *tableau, int tailleDuTableau)
{
	int i = 0;
	for (i = 0; i < tailleDuTableau; i++)
	{
		printf("%d\n", tableau[i]);
	}
}



#include <stdio.h>
#include <stdlib.h>
int sommeTableau(int *tableau, int tailleDuTableau);
double moyenneTableau(int sommeTableau, int moyenneDuTableau);

int main(int argc, char * argv[])
{
	int tableau[5] = {5, 3, 4, 8 , 7};

	double somme = sommeTableau(tableau, 5);
	printf("%f\n", somme);

	double moyenne = moyenneTableau(somme, 5);
	printf("\n%f\n", moyenne);


	return 0;


}

int sommeTableau(int *tableau, int tailleDuTableau)
{
	int somme = 0;
	for (int i = 0; i < tailleDuTableau; i++)
	{
		somme += tableau[i];
		
	}
	return (double)somme;
}


double moyenneTableau(int sommeTableau, int tailleTableau)
{
	return (double)sommeTableau / (double)tailleTableau;
}	


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
	char lettre = 'S';

	//scanf("%c", &lettre);
	printf("%c\n", &lettre);
	return 0;
}



#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
	char prenom[100];
	
	printf("Commetn tu t'appelles ?");
	scanf("%s", &prenom);
	printf("Salut %s", prenom);
	return 0;
}




#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//size_t strlen(const char* chaine);
//int lenghtSentence(const char* chaine);
char* strcpy(char* copieDeLaChaine, const char* chaineACopier);
char* strcat(char* copieDeLaChaine, const char* chaineACopier);
int strcmp(const char* chaine1, const char* chaine2);
char* strchr(const char* chaine, int caractereARechercher);
char* strstr(const char* chaine, const char* chaineARechercher);

int main(int argc, char * argv[])
{
	char chaine[] = "Salut";
	int longueurChaine = 0;

	longueurChaine = lenghtSentence(chaine);

	printf("La chaine %s fait %d de long", chaine, longueurChaine);

	return 0;
}

int lenghtSentence(const char* chaine)
{
	int nombreDeCharacteres = 0;
	char caractereActuel = 0;

	do 
	{
		caractereActuel = chaine[nombreDeCharacteres];
		nombreDeCharacteres++;
	}
	while(caractereActuel != '\0');

	nombreDeCharacteres--;

	return nombreDeCharacteres;


}


{
	char chaine[] = "Salut", copie[100] = {0};

	strcpy(copie, chaine);

	printf("chaine de base : %s\n", chaine);
	printf("chaine de copié : %s\n", copie);

	return 0;
}

{
	char chaine1[100] = "Salut", chaine2[] = "Mat";
	strcat(chaine1, chaine2);
	printf("chaine1 vaut : %s\n", chaine1);
	return 0;

}

{
    char chaine1[] = "Texte de test", chaine2[] = "Texte de test";

    if (strcmp(chaine1, chaine2) == 0) // Si chaînes identiques
    {
        printf("Les chaines sont identiques\n");
    }
    else
    {
        printf("Les chaines sont differentes\n");
    }

    return 0;
}



{
    char chaine[] = "Texte de test", *suiteChaine = NULL;

    suiteChaine = strchr(chaine, 'd');
    if (suiteChaine != NULL) // Si on a trouvé quelque chose
    {
        printf("Voici la fin de la chaine a partir du premier d : %s", suiteChaine);
    }

    return 0;
}



{
    char *suiteChaine;

    // On cherche la première occurrence de "test" dans "Texte de test" :
    suiteChaine = strstr("Texte de test", "Texte");
    if (suiteChaine != NULL)
    {
        printf("Premiere occurrence de test dans Texte de test : %s\n", suiteChaine);
    }

    return 0;
}

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

void initialiserCoordonnees(Coordonnees *point)


int main(int argc, char * argv[])
/*{
	Coordonnees *point1 = NULL, *point2 = NULL;
	//scanf("%d", &point.x);
	//scanf("%d", &point.y);
	//printf("La valeur de point.x est : %d, et celle de point y est : %d", point.x, point.y);
	point.x = 10;
	point.y = 20;
	//printf("Le point x est %d", point.x);
	//puts("hello");

	Personne utilisateur;
	printf("Quel est votre nom ?");
	scanf("%s", utilisateur.nom);
	printf("Votre prenom ? ");
    scanf("%s", utilisateur.prenom);

    printf("Vous vous appelez %s %s", utilisateur.prenom, utilisateur.nom);

	return 0;
}

*/

{
	Coordonnees monPoint;

	initialiserCoordonnees(&monPoint);

	return 0;
}

void initialiserCoordonnees(Coordonnees *point)
{
	//(*point).x = 0;
	//(*point).y = 0;
	point->x = 0;
	point->y = 0;

}


typedef enum Volume Volume;
enum Volume
{
	FAIBLE, MOYEN, FORT
};
