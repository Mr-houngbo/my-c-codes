**************************** DESCRIPTION DE LA FONCTIONALITE DU PROGRAMME ***********************************

int pgcd(int n, int m)
	Cette fontion permet de calculer le plus grand commun diviseur(pgcd) de deux entiers.Elle prend en paramètre deux entiers relatifs et
	retourne le pgcd de ces derniers.Dans ce programme,il nous permet de déterminer la forme normalisée des rationnels qu'on a à manipuler.
	
void Addition(int r[] , int entier)
	Fais l'addition d'un entier et d'un rationnel et donne un résultat non normalisé
	
void DivisionE(int r[],int entier)
	Faire division d'un rationnel par un entier losque cela est possible et donne le résultat sous forme non normalisée
	
void normalisation(int r[])
	Faire la normalsation d'un rationnel qui consiste en effet à rendre irréductible un rationnel passé en paramètre. 
	
void affiche(Rationnel r)
	cette fonction qui prend en paramètre un rationnel permet d'afficher un nombre rationnel . il faut donc le tester dans un "main " sous le 	nom "affiche".
void AdditionNormalise(Rationnel r1, Rationnel r2)
	Cette fonction prend en paramètre deux nombres rationnels normalisés et donne leur somme normalisé 
	
void DivisonN( Rationnel r1, Rationnel r2)
	Cette fonction prend en paramètre deux nombres rationnels normalisés et donne leur division normalisé 
	
void SumProd_N( int m)
	fais la somme et le produit de m nombres rationnels 
	
void multiplication_rationnel(Rationnel rationnel[],int n)
	cette fonction permet de faire la multiplication entre deux rationnels et cette multiplication donne un rationnel.
	
void produit_norm(int a, int b, int c, int d)	
	Cette fonction nous permet de calculer le produit (multiplication) de deux rationnels normaliés.Elle prend en 	paramètre quatre (04)
	entiers dont les deux premiers(a et b) sont respectivement le numérateur et le dénominateur du 	premier rationnel et les deux derniers
  (c et d) sont respectivement le numérateur et le dénominateur du second rationnel.Elle fait le produit des deux numérateurs qu'elle
  divise par le produit des deux dénominateurs.Pour normaliser le résultat,elle divise et numérateur et le dénominateur par leur pgcd.Puis
  elle affiche le résultat.
	NB:Pour tester cette fonction dans la fonction main(),tant que l'utilisation n'a pas entré un rationnel normalisé, le programme lui
  affiche un message d'erreur et lui dire de réessayer.

void soustraction_norm(int a, int b, int c, int d)
	Cette fonction nous permet de calculer la soustaction de deux rationnels normaliés.Elle prend en paramètre quatre(04)
	entiers dont les deux premiers(a et b) sont respectivement le numérateur et le dénominateur du premier rationnel et les deux derniers(c et 	 d) sont respectivement le numérateur et le dénominateur du second rationnel.Elle fait le produit entre le
	numerateur du premier rationnel et le dénominateur du second rationnel à qui elle soustrait le produit du dénominateur du premier
  rationnel et du numérateur du second rationnel puis elle divise le tout par le produit des deux dénominateurs.Pour normaliser le
  résultat,elle divise et numérateur et le dénominateur par leur pgcd.Puis elle affiche le résultat.
	NB:Pour tester cette fonction dans la fonction main(),tant que l'utilisation n'a pas entré un rationnel normalisé, le programme lui
	affiche un message d'erreur et lui dire de réessayer.

void selection(double tab[], int n)
	cette fonction permet de trier par ordre croissant un tableau de taille n.Elle prend en paramètre le tableau (tab[]) et la taille (n)
	
void representation_reel()
	Cette fonction permet de donner la représention réel des rationnels d'un tableau. Elle ne prend rien en paramètre.
	
void soustractionRationnel(Rationnel rationnel[],int n)
	cette fonction fait la soustraction de deux nombres rationnels entrés au clavier par l'utilisateur et le résultat obtenu est un	rationnel.
	
void afficheRationnel(Rationnel rationnel[],int n)	
	cette fonction ne fait rien d'autre qu'afficher  un nombre rationnel entré au clavier sous forme de a/b.
	
void multi_ratio_entier()
	Prend un rationnel (la forme frationnelle ) et un entier et retourne la forme la formes rationnelle du produit de cet entier par le
	rationnel.
	
void soustration_ratio_entier()
	Prend la forme frationnelle d'un rationnel et un entier puis affiche la forme frationnelle de la soustraction de l'entier du rationnel.
	
void comparaison_ratio()
	Demande deux ratioonels r1 et r2 et retourne 1 si r1<=2 et 0 dans le cas contraire .

void prise_rationnel(rationnel *rat);

	Cette fonction permet de demander, prendre et stocker le nombre rationnel entre par l'utilisateur.Elle recoit un pointeur sur la structure rationnel pour pouvoir modifier les parametres de la structure qui sera passee par addresse lors de l'appel de la fonction dans la fonction main.

void affichage(rationnel *rat);

	Cette fonction permet d'afficher un nombre rationnel.Elle recoit un pointeur sur la structure rationnel pour pouvoir modifier les parametres de la structure qui sera passee par addresse lors de l'appel de la fonction dans la fonction main.

void addition(rationnel *rat1,rationnel *rat2,rationnel *rat);

	Cette fonction permet de faire la somme de deux nombres rationnels (rat1 et rat2).Elle recoit trois pointeurs de structure rationnel ,les deux premiers represente les nombres rationnels a additionner et le troisieme represente le resultat de la somme.Ainsi on passe ceux-ci par addresse lors de l'appel de la fonction dans la fonction main et apres ceci la troisieme structure represente la somme des deux autres. 

void division(rationnel *rat1,rationnel *rat2,rationnel *rat);

	Cette fonction permet de faire la division de deux nombres rationnels (rat1 et rat2).Elle recoit trois pointeurs sur la structure rationnel ,les deux premiers represente les nombres rationnels a diviser c'est a dire rat1/rat2 et le troisieme represente le resultat de la division.Ainsi on passe ceux-ci par addresse lors de l'appel de la fonction dans la fonction main et apres ceci la troisieme structure represente le resultat de la division .

void inverse(rationnel *rat1,rationnel *rat);
	
	Cette fonction permet de calculer l'inverse d'un nombre rationnel si cela est possible.Elle recoit deux pointeur de structure rationnel pour pouvoir modifier les parametres de ceux-ci qui seront passees par addresse lors de l'appel de la fonction dans la fonction main.Le premier represente le nombre rationnel a inverser et le second represente son inverse (c'est a dire le resultat de l'inverse).
