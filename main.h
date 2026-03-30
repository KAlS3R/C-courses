typedef struct Coordonnees Coordonnees;
typedef struct Personne Personne;


struct Coordonnees 
{
	int x;
	int y;
};

struct Personne
{
	char nom[100];
	char prenom[100];
	char adresse[100];

	int age;
	int etudiant;
};