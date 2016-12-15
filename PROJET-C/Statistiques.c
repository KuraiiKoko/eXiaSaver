#include <stdio.h>
#include <stdlib.h>
# define TAILLE_MAX 1000
int main()
{
	/*afficher un menu de statistiques
	 * a partir du menu historique : stats sur nombre/types d'écrans lancés, 
	 * dates de lancement triées chronologiquement ou inversement (avec paramètre -stats)*/
	
	 FILE* fichier = NULL;
	 int nbrLignes=0;
	 int nbrCarac=0;
	  int choixMenu;
	  int Stat_stat=0;
	  int Stat_dyn=0;
	  int Stat_inter=0;
	 int nbrCaractot=0;
	 int nbrLignestot=0;
	 int caractereActuel=0;
		int i=0;
	 int j=0;
	 
    char chaine[TAILLE_MAX] = ""; // Chaîne vide de taille TAILLE_MAX
    fichier = fopen("Heure Locale.txt", "r");

    if (fichier != NULL)
    {
		while (fgets(chaine, TAILLE_MAX, fichier)!= NULL) {
		nbrLignestot++;};
		
		fseek(fichier,0,SEEK_SET);
		nbrLignes=nbrLignestot;		
		
		
		while (caractereActuel != EOF)
        {
            caractereActuel = fgetc(fichier); // On lit le caractère
			
			if (caractereActuel!=EOF){ 
				nbrCaractot=nbrCaractot+1;};
        } ;
        
        nbrCarac=nbrCaractot/nbrLignes;
		
      fclose(fichier);
     printf("---Type d'affichage---\n");
     printf("1.Afficher l'historique\n");
     printf("2.Part d utilisation d ecran\n");
     printf("\nVotre choix?\n");
     scanf("%d", &choixMenu);
}
fseek(fichier,0,SEEK_SET);
 caractereActuel=0;
    switch(choixMenu)
    {
                     case 1:
		fichier = fopen("Heure Locale.txt", "r");
		fseek(fichier,0,SEEK_SET);
		printf("\nNombre de lignes :%d",nbrLignes);
		printf("\nNombre de caracteres par ligne :%d\n\n",nbrCarac);
		printf("Contenu:\n");
		while (caractereActuel != EOF)
        {
            caractereActuel = fgetc(fichier); // On lit le caractère
			printf("%c",caractereActuel);}
 
		fclose(fichier);         
                          break;
 //**************************************************
                     case 2:
		fichier = fopen("Heure Locale.txt", "r");

		for (i=0;i<nbrLignestot;i++)
        {
			caractereActuel=0;
			for(j=0;j<21;j++){
            caractereActuel = fgetc(fichier); };
            fseek(fichier,-21+nbrCarac,SEEK_CUR);
          
            caractereActuel=caractereActuel-48;
printf("%d",caractereActuel);
       
             switch(caractereActuel)
				{
						case 1:

					Stat_stat=Stat_stat+1;
					break;
					
						case 2:

					Stat_dyn=Stat_dyn+1;
					break;
						case 3:

					Stat_inter=Stat_inter+1;
					break;};
				printf("coucou\n");
				getchar();	
		}
            
            
            
            
        printf("L'ecran de veille statique a ete affiche %d fois, pour une part de %d/%d\n",Stat_stat,Stat_stat,nbrLignes);
        printf("L'ecran de veille dynamique a ete affiche %d fois, pour une part de %d/%d\n",Stat_dyn,Stat_dyn,nbrLignes);
        printf("L'ecran de veille interactif a ete affiche %d fois, pour une part de %d/%d\n",Stat_inter,Stat_inter,nbrLignes);
            
            
            
//*****************************************************
                          break;
                     case 3:
                          printf("Vous avez choisis le BAAAAAMMMMM!");
                          break;   
                     case 4:
                          printf("Vous n'auriez pas du choisir ca...");
                          break;
                     default:
                             printf("Vous ne ferez rien du tout!");
                             break;

}

	return 0;	
	
	
}
