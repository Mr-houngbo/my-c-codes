#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv)
{
	//Vérifiez s'il y a suffisamment d'arguments en ligne de commande
	if(argc != 3)
	{
		printf("Usage :%s <input file> <output file>\n",argv[0]);
		return 1;
	}
	
	//Ouvrez les fichiers d'entrées et de sortie
	FILE *infile = fopen(argv[1],"rb");
	if(!infile)
	{
		printf("Impossible d'ouvrir le fichier\n");
		return 1;
	}
	
	FILE *outfile = fopen(argv[2],"wb");
	if(!outfile)
	{
		printf("Impossible d'ouvrir le fichier\n");
		return 1;
	}
	
	//Allouez de la mémoire pour stocker l'image
	unsigned char *image_data = NULL;
	int image_size = 0;
	fseek(infile,0,SEEK_END);
	image_size = ftell(infile);
	rewind(infile);
	image_data = (unsigned char*)malloc(image_size);
	if(!image_data)
	{
		printf("Impossible d'allouer d'espace en mémoire\n");
		fclose(infile);
		fclose(outfile);
		return 1;
	}
	
	//Lisez les donnénes de l'image dans la mémoire 
	if(fread(image_data,1,image_size,infile) != image_size)
	{
		printf("Impossible de lire les données de l'image\n");
		free(image_data);
		fclose(infile);
		fclose(outfile);
		return 1;
	}
	
	//Modifiez les données de l'image en inversant les couleurs
	int i;
	for(i = 0; i < image_size; i++)
	{
		image_data[i] = 255 - image_data[i];
	}
	
	//Ecrivez les données modifiées de l'image dans le ficher de sortie
	if(fwrite(image_data,1,image_size,outfile) != image_size)
	{
		printf("Impossible d'écrire les données modifiées de l'image\n");
		free(image_data);
		fclose(infile);
		fclose(outfile);
		return 1;
	}
return 0;
}
