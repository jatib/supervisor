#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#define LIMITE 150

int main()
{
   FILE *entrada;
   int caracter, num_lineas;
   char NOM_ARCHIVO[]= "cursoAF1.txt";

   entrada = fopen(NOM_ARCHIVO,"rt");
   /*Validamos que el fichero exista%%%%%%%%%%%%%*/ 
   if(entrada != NULL)
   {
      //**//
      num_lineas = 0;
      
      while ((caracter = fgetc(entrada)) != EOF)
      {
         if (caracter == '\n')
         {
            num_lineas++;
         }
      }
      //**//
      fclose(entrada);
      printf("Longitud: %d\n",num_lineas);
      /*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/
      //**/
      if (num_lineas!=0)
      {
         //**//
         FILE* fichero;
         fichero = fopen(NOM_ARCHIVO, "rt");
         char palabra[num_lineas][LIMITE];
         //**//
         for (int i = 0; i <= num_lineas; ++i)
         {
            fgets (palabra[i],LIMITE, fichero);
         }
         fclose(fichero);
         //**//
         for (int k = 0; k <= num_lineas; ++k)
         {
            puts (palabra[k]);
         }
      
      //**//  
      }//**/
   //**//
   }
   return 0;
}

