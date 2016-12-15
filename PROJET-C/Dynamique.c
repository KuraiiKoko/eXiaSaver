#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#define nbrtotl 5
#define nbrtotc 32
#define TAILLE_MAX 1000
#define PIXEL 219
int recup_heure(char *format)
{
    time_t temps;
    struct tm date;
    // On récupère la date et l'heure actuelles.
    time(&temps);
    date=*localtime(&temps);

    // On remplit la chaîne avec le format choisi, puis on l'affiche.
    strftime(format, 30, "%X", &date);

return 0;
}

int refresh(int tab[][32]){
	system("clear");
	int pause=0;
	char tampon[17]="";
	
	   static char const VAR[] = "EXIASAVER2_SLEEP";
char *var = getenv(VAR);
 
   if (var != NULL)
   {
      //printf("%s\n", var);
      pause=atoi(var);
   }
   else
   {
      //printf("The '%s' environment variable is not defined\n", VAR);
      pause=10;
   }

	int i = 0;
	int j = 0;
	char plat[23][80];
	
char phrase[50]="Rafraichissement dans ";
sprintf(tampon,"%d",pause);
strcat(phrase, tampon);
strcat(phrase," secondes ");

	for(i = 0;i<23;i++){
		for(j =0;j<80;j++)
		{plat[i][j] = ' ';}
		}
	for (i=12-2;i<=12-2+4;i++){	
		for(j=40-16;j<24+32;j++){		
			if(	tab[i-12+2][j-40+16] == 1){
			plat[i][j]=PIXEL;};};};
	

	for(i = 0;i<23;i++){
		for(j = 0;j<80;j++){
			printf("%c",plat[i][j]);};
		};
		
		

	for(i=0;i<34;i++)
	{putc(phrase[i],stdout);};

	fflush(stdout);
	for (i=0;i<=pause;i++){
		fflush(stdout);
		printf(".");
		sleep (1);
		
}
fflush(stdout);
return 0;




}


int main()
{
    int affheure[5][(3+1)*8];
    int i=0;
	int j=0;
	int k=0;
	int tempo;
    char nomfichier[7]="Horloge";
    char ex_heure[8];
    FILE* fichierchar=NULL;
    char chaine[TAILLE_MAX];
    while (1){
recup_heure(ex_heure);

for (k=0;k<8;k++){printf("Chiffre %d\n",ex_heure[k]);
fflush(stdout);

tempo=(int)ex_heure[k];
tempo=tempo-48;
switch(tempo)
{
		case 0:
			fichierchar=fopen("Caractere0","r");
			/* On passe les trois premières lignes du fichier*/
			for(i=0;i<3;i++){ fgets(chaine, TAILLE_MAX, fichierchar);};
			/* On remplit le tableau avec les carctères*/
			for (i=0;i<5;i++){
				fscanf(fichierchar, "%d %d %d", &affheure[i][0+k*4], &affheure[i][1+k*4], &affheure[i][2+k*4]);
				affheure[i][3+k*4]=0;}
			fclose(fichierchar);
		

		break;


case 1:

			fichierchar=fopen("Caractere1","r");
			/* On passe les trois premières lignes du fichier*/
			for(i=0;i<3;i++){ fgets(chaine, TAILLE_MAX, fichierchar);};
			/* On remplit le tableau avec les carctères*/
			for (i=0;i<5;i++){
				fscanf(fichierchar, "%d %d %d", &affheure[i][0+k*4], &affheure[i][1+k*4], &affheure[i][2+k*4]);
				affheure[i][3+k*4]=0;}
			fclose(fichierchar);
		

		break;
case 2:

			fichierchar=fopen("Caractere2","r");
		
			/* On passe les trois premières lignes du fichier*/
			for(i=0;i<3;i++){ fgets(chaine, TAILLE_MAX, fichierchar);};
			
			/* On remplit le tableau avec les carctères*/
			for (i=0;i<5;i++){
				fscanf(fichierchar, "%d %d %d", &affheure[i][0+k*4], &affheure[i][1+k*4], &affheure[i][2+k*4]);
				affheure[i][3+k*4]=0;}
			fclose(fichierchar);
		


		break;
case 3:

			fichierchar=fopen("Caractere3","r");
			/* On passe les trois premières lignes du fichier*/
			for(i=0;i<3;i++){ fgets(chaine, TAILLE_MAX, fichierchar);};
			/* On remplit le tableau avec les carctères*/
			for (i=0;i<5;i++){
				fscanf(fichierchar, "%d %d %d", &affheure[i][0+k*4], &affheure[i][1+k*4], &affheure[i][2+k*4]);
				affheure[i][3+k*4]=0;}
			fclose(fichierchar);
		

		break;

case 4:


			fichierchar=fopen("Caractere4","r");
			/* On passe les trois premières lignes du fichier*/
			for(i=0;i<3;i++){ fgets(chaine, TAILLE_MAX, fichierchar);};
			/* On remplit le tableau avec les carctères*/
			for (i=0;i<5;i++){
				fscanf(fichierchar, "%d %d %d", &affheure[i][0+k*4], &affheure[i][1+k*4], &affheure[i][2+k*4]);
				affheure[i][3+k*4]=0;}
			fclose(fichierchar);
		

		break;
case 5:

			fichierchar=fopen("Caractere5","r");
			/* On passe les trois premières lignes du fichier*/
			for(i=0;i<3;i++){ fgets(chaine, TAILLE_MAX, fichierchar);};
			/* On remplit le tableau avec les carctères*/
			for (i=0;i<5;i++){
				fscanf(fichierchar, "%d %d %d", &affheure[i][0+k*4], &affheure[i][1+k*4], &affheure[i][2+k*4]);
				affheure[i][3+k*4]=0;}
			fclose(fichierchar);
		

		break;
case 6:

			fichierchar=fopen("Caractere6","r");
			/* On passe les trois premières lignes du fichier*/
			for(i=0;i<3;i++){ fgets(chaine, TAILLE_MAX, fichierchar);};
			/* On remplit le tableau avec les carctères*/
			for (i=0;i<5;i++){
				fscanf(fichierchar, "%d %d %d", &affheure[i][0+k*4], &affheure[i][1+k*4], &affheure[i][2+k*4]);
				affheure[i][3+k*4]=0;}
			fclose(fichierchar);
		


		break;
case 7:

			fichierchar=fopen("Caractere7","r");
			/* On passe les trois premières lignes du fichier*/
			for(i=0;i<3;i++){ fgets(chaine, TAILLE_MAX, fichierchar);};
			/* On remplit le tableau avec les carctères*/
			for (i=0;i<5;i++){
				fscanf(fichierchar, "%d %d %d", &affheure[i][0+k*4], &affheure[i][1+k*4], &affheure[i][2+k*4]);
				affheure[i][3+k*4]=0;}
			fclose(fichierchar);
		


		break;

case 8:

			fichierchar=fopen("Caractere8","r");
			/* On passe les trois premières lignes du fichier*/
			for(i=0;i<3;i++){ fgets(chaine, TAILLE_MAX, fichierchar);};
			/* On remplit le tableau avec les carctères*/
			for (i=0;i<5;i++){
				fscanf(fichierchar, "%d %d %d", &affheure[i][0+k*4], &affheure[i][1+k*4], &affheure[i][2+k*4]);
				affheure[i][3+k*4]=0;}
			fclose(fichierchar);
		


		break;
case 9:

			fichierchar=fopen("Caractere9","r");
			/* On passe les trois premières lignes du fichier*/
			for(i=0;i<3;i++){ fgets(chaine, TAILLE_MAX, fichierchar);};
			/* On remplit le tableau avec les carctères*/
			for (i=0;i<5;i++){
				fscanf(fichierchar, "%d %d %d", &affheure[i][0+k*4], &affheure[i][1+k*4], &affheure[i][2+k*4]);
				affheure[i][3+k*4]=0;}
			fclose(fichierchar);
		

		break;
case 10:

			fichierchar=fopen("Caractere:","r");
			/* On passe les trois premières lignes du fichier*/
			for(i=0;i<3;i++){ fgets(chaine, TAILLE_MAX, fichierchar);};
			/* On remplit le tableau avec les carctères*/
			for (i=0;i<5;i++){
				fscanf(fichierchar, "%d %d %d", &affheure[i][0+k*4], &affheure[i][1+k*4], &affheure[i][2+k*4]);
				affheure[i][3+k*4]=0;}
			fclose(fichierchar);
		

		break;

default:
			fichierchar=fopen("Caractere:","r");
			/* On passe les trois premières lignes du fichier*/
			for(i=0;i<3;i++){ fgets(chaine, TAILLE_MAX, fichierchar);};
			/* On remplit le tableau avec les carctères*/
			for (i=0;i<5;i++){
				fscanf(fichierchar, "%d %d %d", &affheure[i][0+k*4], &affheure[i][1+k*4], &affheure[i][2+k*4]);
				affheure[i][3+k*4]=0;}
			fclose(fichierchar);
		


		break;
}}
FILE *fichier;
	    puts(nomfichier);
        fichier=fopen(nomfichier,"w");
        fputs("P1\n", fichier);
        fputs("#Horloge\n",fichier);
        fputs("32 5 \n",fichier);

	for (j=0;j<5;j++){
		{for (k=0;k<32;k++)
			fprintf(fichier,"%d", affheure[j][k]);
		};
		fprintf(fichier,"\n");
	}

        fclose(fichier);




refresh(affheure);};


 return 0;}
