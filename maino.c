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

*/

#include <stdio.h>
#include <stdlib.h>


void affichertableau(int *tableau, int tailleDuTableau);
 
int main(int argc, char *argv[])
{
    int tableau[4] = {10, 15, 3};
 
    // On affiche le contenu du tableau
    affichertableau(&tableau, 4);
 
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