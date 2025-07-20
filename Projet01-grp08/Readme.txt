**************************** DESCRIPTION DE LA FONCTIONALITE DU PROGRAMME ***********************************

Ce programme a pour but précis : la manipulation des tableaux. Ainsi dans cette optique, nous avons eu à manipuler plusieurs fonctions
 comme :

typedef struct MonEnsemble MonEnsemble
	C'est la structure qui nous permet de manipuler les tableaux. Elle comporte le tableau et sa taille

void init(MonEnsemble *A)
	Cette fonction permet en effet d'initialiser notre structure. Elle prend en parametre un pointeur sur la structure "MonEnsemble"

int get( MonEnsemble *A , int pos );
	Elle supprime de A et retourne l'élement à la position pos puis repositionne les autres éléments. Elle prend en parametre un pointeur sur la structure "MonEnsemble" et la position sur laquelle on veut operer. Cette position doit être inférieur à la taille de notre tableu et positif.

void add(MonEnsemble *A,int elem,int pos);
	Ajoute à A l ’élément elem à la position pos , puis repositionne les autres éléments. Elle prend en parametre un pointeur sur la structure "MonEnsemble",
	l'élément ajouter et la position où ont veut l'ajouter. Ainsi cette position doit être inférieure à la taille du tableau et positif.  
	
int set(MonEnsemble *A,int elem,int pos);
	Remplace l ’élément de la position pos de A et retourne l ’élément initiale de cette position. Elle prend en parametre un pointeur sur la
	 structure"MonEnsemble", l'élément à remplacer et la position où on veut le remplacer. Ainsi cette position doit être inférieure à la taille du tableau
	  et positif.
	
int Remove(MonEnsemble *A, int pos);
	Supprime l ’élément de position pos de A sans le renvoier, puis repositionne les autres éléments de A. Elle prend en parametre un pointeur sur la
	 structure "MonEnsemble", la position de l'élément à supprimer. Ainsi cette position doit être inférieure à la taille du tableau et positif.
	
void suppression(MonEnsemble *t);
	Permet de supprimer un élement dans un tableau de la structure. Elle prend en parametre un pointeur sur la structure "MonEnsemble"
	
void unionn(MonEnsemble *A, MonEnsemble *B, MonEnsemble *C)
	Construit l ’ union de A et B dans C. Elle prend en parametre trois pointeurs sur la structure "MonEnsemble" et opère son opération.
	
void diff( MonEnsemble *A , MonEnsemble *B , MonEnsemble *C );
	Construit la différence de A par B dans C. Elle prend en parametre trois pointeurs sur la structure "MonEnsemble" et passe à l'action.
	
int size(MonEnsemble *A);
	Renvoie le nombre réel d ’éléments de l ’ ensemble. Elle prend en parametre un pointeur sur la structure "MonEnsemble"
	
int isEmpty(MonEnsemble *A);
	Elle détermine le caractère vide ou non vide de notre ensemble. Renvoie 1 si l ’ ensemble est vide. Elle prend en parametre un pointeur sur 
	la structure "MonEnsemble"
	
int getFirst(MonEnsemble *A);
	Renvoie le premier élément de l ’ ensemble. Elle prend en parametre un pointeur sur la structure "MonEnsemble"
	
int getLast(MonEnsemble *A);
	Renvoie le dernier élément de l ’ ensemble. Elle prend en parametre un pointeur sur la structure "MonEnsemble"
	
void addLast(MonEnsemble *A,int elem)
	Ajoute elem à mon ensemble à la dernière position. Elle prend en parametre un pointeur sur la structure "MonEnsemble" et l'élément à ajouter
	puis l'ajoute à la dernière position.
	
void addFirst(MonEnsemble *A, int elem)
	Ajoute elem à mon ensemble à la première position. Elle prend en parametre un pointeur sur la structure "MonEnsemble" à ajouter
	puis l'ajoute à la première position.
	
void removeFirst(MonEnsemble *A)
	Supprime de A l'élément qui se trouve à la première position. Elle prend en parametre un pointeur sur la structure "MonEnsemble"
	
void removeLast(MonEnsemble *A)
	Supprime de A l'élément se trouvant à la  dernière position. Elle prend en parametre un pointeur sur la structure "MonEnsemble"
	
Pour le dépassement de capacité, nous avons proposés deux solutions :  
			La première utilisant les allocations dynamique .
			La seconde utilisant les liste doublement chaînées.
			Ils ont été soigneusement redigés dans les fichiers tache3.c et tache4.c.
			Les fonctions utilisées dans ces parties ont exactement le même rôle précedement exposé.

