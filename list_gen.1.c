#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	FILE *entrada;
  	int ch, num_lineas;
  	char hoja[] = "Visitor Notes: ";
  	char zona[] = "Veracruz";
  	char zona2[] = "Veracruz-Llave";
  	char zona3[] = "VA";
	char NOM_ARCHIVO[] = "2016-03-13.text";
	/*
	0=48:::::::6=54
	1=49:::::::7=55
	2=50:::::::8=56
	3=51:::::::9=57
	4=52
	5=53
	SEA LA FECHA AÑO / MES / DIA = A1,A2,A3,A4 / M1,M2 / D1,D2 
	*/

	for (int i = 0; i < 2; i++)
	{
		//##########################################################
		//PRIMER DIGITO DEL MES
		NOM_ARCHIVO[5] = NOM_ARCHIVO[5] + 1;

		if ( NOM_ARCHIVO[5] > 49 )
		{
			NOM_ARCHIVO[5]='0';
		}
		//printf("%s\n",NOM_ARCHIVO);
		/**/
/*###############################################################################################################*/
//#########SI M1 = 0
		if ( NOM_ARCHIVO[5] == 48 )
		{
			for (int j = 0; j < 9; ++j)
			{
			//#####################################################
			//SEGUNDO DIGITO DEL MES PARA M1 = 0
				NOM_ARCHIVO[6] = NOM_ARCHIVO[6] + 1;
				if ( NOM_ARCHIVO[6] > 57 )
				{
					NOM_ARCHIVO[6] = '1';
				}
				//printf("%s\n",NOM_ARCHIVO);

				/**/
				for (int k = 0; k < 4; ++k)
				{
				//#################################################
				//PRIMER DIGITO DEL DÍA D1 = 0, 1, 2, 3
					NOM_ARCHIVO[8] = NOM_ARCHIVO[8] + 1;
					if (NOM_ARCHIVO[8] > 51)
					{
						NOM_ARCHIVO[8] = '0';
					}
					//printf("%s\n",NOM_ARCHIVO);
					/*
					/*#############################################*/
					if ( NOM_ARCHIVO[8] == 48)
					{
						for (int l = 0; l < 9; ++l)
						{
							NOM_ARCHIVO[9] = NOM_ARCHIVO[9] + 1;
							if ( NOM_ARCHIVO[9] > 57 )
							{

								NOM_ARCHIVO[9] = '1';
							}
							//printf("%s\n",NOM_ARCHIVO);
/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
							 if(!((entrada = fopen(NOM_ARCHIVO, "r")) == NULL))
							 {  
   								if ( entrada == NULL )
   								{
      							perror(NOM_ARCHIVO);
      							return EXIT_FAILURE;
   								}	
   
   								num_lineas = 0;
   								while ((ch = fgetc(entrada)) != EOF)
   								{
      								if (ch == '\n')
      								{
         								num_lineas++;
      								}
   								}
   								if (!(num_lineas==0))
   								{
   									fclose(entrada);
									/*#######################################################################*/   
   									int renglon[num_lineas];
   									int j = 0, l;
   									char cadena [100];
   									char control= '!';
   									int k;
   									FILE* fichero;
   									fichero = fopen(NOM_ARCHIVO, "rt");
									/*#######################################################################*/
   									while ( j <= num_lineas + 1)
   									{
      									k=1;
      									control= 'a';
      									while (control >=32 && control<=126)
      									{
            								control = fgetc(fichero);
            								l=1;
            								if(control == 86 )
            								{
               									cadena[k-1] = control;
               									while (control >=32 && control<=126)
               									{
                  									control = fgetc(fichero);
                  									cadena[l]='\0';
                  									if ( control >=32 && control<=126 )
                  									{
                     									cadena[l] = control;
                  									}
                  									l++;
               									}
            								}
            								k++;
      									}
      									if(!(strcmp(cadena,hoja)==0) && !(strcmp(cadena,zona)==0) &&  !(strcmp(cadena,zona2)==0) && !(cadena[j]==0) &&  !(strcmp(cadena,zona3)==0) )
      									{	
         									printf("%s\n",cadena);
      									}
      									j++;
   								}
							/*########################################################TERMINA EL WHILE*/
   								fclose(fichero);
								}
								else
								{
									//printf("Archivo: %s vacio.\n",NOM_ARCHIVO);
								}
							}
							else
							{
								//printf("Archivo: %s vacio.\n",NOM_ARCHIVO);
							}
/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/								
						}
					}
					/*
					/*#############################################*/
					if ( NOM_ARCHIVO[8] == 49 )
					{
						for (int m = 0; m < 10; ++m)
						{
							NOM_ARCHIVO[9] = NOM_ARCHIVO[9] + 1;
							if ( NOM_ARCHIVO[9] > 57 )
							{
								NOM_ARCHIVO[9] = '0';
							}
							//printf("%s\n",NOM_ARCHIVO);
/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
							 if(!((entrada = fopen(NOM_ARCHIVO, "r")) == NULL))
							 {  
   								if ( entrada == NULL )
   								{
      							perror(NOM_ARCHIVO);
      							return EXIT_FAILURE;
   								}	
   
   								num_lineas = 0;
   								while ((ch = fgetc(entrada)) != EOF)
   								{
      								if (ch == '\n')
      								{
         								num_lineas++;
      								}
   								}
   								if (!(num_lineas==0))
   								{
   									fclose(entrada);
									/*#######################################################################*/   
   									int renglon[num_lineas];
   									int j = 0, l;
   									char cadena [100];
   									char control= '!';
   									int k;
   									FILE* fichero;
   									fichero = fopen(NOM_ARCHIVO, "rt");
									/*#######################################################################*/
   									while ( j <= num_lineas + 1)
   									{
      									k=1;
      									control= 'a';
      									while (control >=32 && control<=126)
      									{
            								control = fgetc(fichero);
            								l=1;
            								if(control == 86 )
            								{
               									cadena[k-1] = control;
               									while (control >=32 && control<=126)
               									{
                  									control = fgetc(fichero);
                  									cadena[l]='\0';
                  									if ( control >=32 && control<=126 )
                  									{
                     									cadena[l] = control;
                  									}
                  									l++;
               									}
            								}
            								k++;
      									}
      									if(!(strcmp(cadena,hoja)==0) && !(strcmp(cadena,zona)==0) &&  !(strcmp(cadena,zona2)==0) && !(cadena[j]==0) &&  !(strcmp(cadena,zona3)==0) )
      									{	
         									printf("%s\n",cadena);
      									}
      									j++;
   								}
							/*########################################################TERMINA EL WHILE*/
   								fclose(fichero);
								}
								else
								{
									//printf("Archivo: %s vacio.\n",NOM_ARCHIVO);
								}
							}
							else
							{
								//printf("Archivo: %s vacio.\n",NOM_ARCHIVO);
							}
/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/	
						}
					}
					/*
					/*#############################################*/
					if ( NOM_ARCHIVO[8] == 50 )
					{
						for (int n = 0; n < 10; ++n)
						{
							NOM_ARCHIVO[9] = NOM_ARCHIVO[9] + 1;
							if ( NOM_ARCHIVO[9] > 57 )
							{
								NOM_ARCHIVO[9] = '0';
							}
							//printf("%s\n",NOM_ARCHIVO);
							/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
							 if(!((entrada = fopen(NOM_ARCHIVO, "r")) == NULL))
							 {  
   								if ( entrada == NULL )
   								{
      							perror(NOM_ARCHIVO);
      							return EXIT_FAILURE;
   								}	
   
   								num_lineas = 0;
   								while ((ch = fgetc(entrada)) != EOF)
   								{
      								if (ch == '\n')
      								{
         								num_lineas++;
      								}
   								}
   								if (!(num_lineas==0))
   								{
   									fclose(entrada);
									/*#######################################################################*/   
   									int renglon[num_lineas];
   									int j = 0, l;
   									char cadena [100];
   									char control= '!';
   									int k;
   									FILE* fichero;
   									fichero = fopen(NOM_ARCHIVO, "rt");
									/*#######################################################################*/
   									while ( j <= num_lineas + 1)
   									{
      									k=1;
      									control= 'a';
      									while (control >=32 && control<=126)
      									{
            								control = fgetc(fichero);
            								l=1;
            								if(control == 86 )
            								{
               									cadena[k-1] = control;
               									while (control >=32 && control<=126)
               									{
                  									control = fgetc(fichero);
                  									cadena[l]='\0';
                  									if ( control >=32 && control<=126 )
                  									{
                     									cadena[l] = control;
                  									}
                  									l++;
               									}
            								}
            								k++;
      									}
      									if(!(strcmp(cadena,hoja)==0) && !(strcmp(cadena,zona)==0) &&  !(strcmp(cadena,zona2)==0) && !(cadena[j]==0) &&  !(strcmp(cadena,zona3)==0))
      									{	
         									printf("%s\n",cadena);
      									}
      									j++;
   								}
							/*########################################################TERMINA EL WHILE*/
   								fclose(fichero);
								}
								else
								{
									//printf("Archivo: %s vacio.\n",NOM_ARCHIVO);
								}
							}
							else
							{
								//printf("Archivo: %s vacio.\n",NOM_ARCHIVO);
							}
/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/	
						}
					}
					/*
					/*#############################################*/
					if (NOM_ARCHIVO[8]==51)
					{
						for (int o = 0; o < 2; ++o)
						{
							NOM_ARCHIVO[9] = NOM_ARCHIVO[9] + 1;
							if ( NOM_ARCHIVO[9] > 49 )
							{
								NOM_ARCHIVO[9] = '0';
							}
							//printf("%s\n",NOM_ARCHIVO);
						}
					}
				/*#################################################*/
				}
			/*#####################################################*/
			}
		}
		/*#########################################################*
		/**/
/*###############################################################################################################*/
//#########SI M1 = 1
		if (NOM_ARCHIVO[5]==49)
		{
			for (int p = 0; p < 3; ++p)
			{
			//#####################################################
			//SEGUNDO DIGITO DEL MES PARA M1 = 0
				NOM_ARCHIVO[6] = NOM_ARCHIVO[6] + 1;
				if ( NOM_ARCHIVO[6] > 50 )
				{
					NOM_ARCHIVO[6] = '0';
				}
				//printf("%s\n",NOM_ARCHIVO);
				for (int k = 0; k < 4; ++k)
				{
				//#################################################
				//PRIMER DIGITO DEL DÍA D1 = 0, 1, 2, 3
					NOM_ARCHIVO[8] = NOM_ARCHIVO[8] + 1;
					if (NOM_ARCHIVO[8] > 51)
					{
						NOM_ARCHIVO[8] = '0';
					}
					//printf("%s\n",NOM_ARCHIVO);
					/*
					/*#############################################*/
					if ( NOM_ARCHIVO[8] == 48)
					{
						for (int l = 0; l < 9; ++l)
						{
							NOM_ARCHIVO[9] = NOM_ARCHIVO[9] + 1;
							if ( NOM_ARCHIVO[9] > 57 )
							{

								NOM_ARCHIVO[9] = '1';
							}
							//printf("%s\n",NOM_ARCHIVO);
/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
							 if(!((entrada = fopen(NOM_ARCHIVO, "r")) == NULL))
							 {  
   								if ( entrada == NULL )
   								{
      							perror(NOM_ARCHIVO);
      							return EXIT_FAILURE;
   								}	
   
   								num_lineas = 0;
   								while ((ch = fgetc(entrada)) != EOF)
   								{
      								if (ch == '\n')
      								{
         								num_lineas++;
      								}
   								}
   								if (!(num_lineas==0))
   								{
   									fclose(entrada);
									/*#######################################################################*/   
   									int renglon[num_lineas];
   									int j = 0, l;
   									char cadena [100];
   									char control= '!';
   									int k;
   									FILE* fichero;
   									fichero = fopen(NOM_ARCHIVO, "rt");
									/*#######################################################################*/
   									while ( j <= num_lineas + 1)
   									{
      									k=1;
      									control= 'a';
      									while (control >=32 && control<=126)
      									{
            								control = fgetc(fichero);
            								l=1;
            								if(control == 86 )
            								{
               									cadena[k-1] = control;
               									while (control >=32 && control<=126)
               									{
                  									control = fgetc(fichero);
                  									cadena[l]='\0';
                  									if ( control >=32 && control<=126 )
                  									{
                     									cadena[l] = control;
                  									}
                  									l++;
               									}
            								}
            								k++;
      									}
      									if(!(strcmp(cadena,hoja)==0) && !(strcmp(cadena,zona)==0) &&  !(strcmp(cadena,zona2)==0) && !(cadena[j]==0) &&  !(strcmp(cadena,zona3)==0) )
      									{	
         									printf("%s\n",cadena);
      									}
      									j++;
   								}
							/*########################################################TERMINA EL WHILE*/
   								fclose(fichero);
								}
								else
								{
									//printf("Archivo: %s vacio.\n",NOM_ARCHIVO);
								}
							}
							else
							{
								//printf("Archivo: %s vacio.\n",NOM_ARCHIVO);
							}
/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/	
						}
					}
					/*
					/*#############################################*/
					if ( NOM_ARCHIVO[8] == 49 )
					{
						for (int m = 0; m < 10; ++m)
						{
							NOM_ARCHIVO[9] = NOM_ARCHIVO[9] + 1;
							if ( NOM_ARCHIVO[9] > 57 )
							{
								NOM_ARCHIVO[9] = '0';
							}
							//printf("%s\n",NOM_ARCHIVO);
/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
							 if(!((entrada = fopen(NOM_ARCHIVO, "r")) == NULL))
							 {  
   								if ( entrada == NULL )
   								{
      							perror(NOM_ARCHIVO);
      							return EXIT_FAILURE;
   								}	
   
   								num_lineas = 0;
   								while ((ch = fgetc(entrada)) != EOF)
   								{
      								if (ch == '\n')
      								{
         								num_lineas++;
      								}
   								}
   								if (!(num_lineas==0))
   								{
   									fclose(entrada);
									/*#######################################################################*/   
   									int renglon[num_lineas];
   									int j = 0, l;
   									char cadena [100];
   									char control= '!';
   									int k;
   									FILE* fichero;
   									fichero = fopen(NOM_ARCHIVO, "rt");
									/*#######################################################################*/
   									while ( j <= num_lineas + 1)
   									{
      									k=1;
      									control= 'a';
      									while (control >=32 && control<=126)
      									{
            								control = fgetc(fichero);
            								l=1;
            								if(control == 86 )
            								{
               									cadena[k-1] = control;
               									while (control >=32 && control<=126)
               									{
                  									control = fgetc(fichero);
                  									cadena[l]='\0';
                  									if ( control >=32 && control<=126 )
                  									{
                     									cadena[l] = control;
                  									}
                  									l++;
               									}
            								}
            								k++;
      									}
      									if(!(strcmp(cadena,hoja)==0) && !(strcmp(cadena,zona)==0) &&  !(strcmp(cadena,zona2)==0) && !(cadena[j]==0) )
      									{	
         									printf("%s\n",cadena);
      									}
      									j++;
   								}
							/*########################################################TERMINA EL WHILE*/
   								fclose(fichero);
								}
								else
								{
									//printf("Archivo: %s vacio.\n",NOM_ARCHIVO);
								}
							}
							else
							{
								//printf("Archivo: %s vacio.\n",NOM_ARCHIVO);
							}
/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/	
						}
					}
					/*
					/*#############################################*/
					if ( NOM_ARCHIVO[8] == 50 )
					{
						for (int n = 0; n < 10; ++n)
						{
							NOM_ARCHIVO[9] = NOM_ARCHIVO[9] + 1;
							if ( NOM_ARCHIVO[9] > 57 )
							{
								NOM_ARCHIVO[9] = '0';
							}
							//printf("%s\n",NOM_ARCHIVO);
/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
							 if(!((entrada = fopen(NOM_ARCHIVO, "r")) == NULL))
							 {  
   								if ( entrada == NULL )
   								{
      							perror(NOM_ARCHIVO);
      							return EXIT_FAILURE;
   								}	
   
   								num_lineas = 0;
   								while ((ch = fgetc(entrada)) != EOF)
   								{
      								if (ch == '\n')
      								{
         								num_lineas++;
      								}
   								}
   								if (!(num_lineas==0))
   								{
   									fclose(entrada);
									/*#######################################################################*/   
   									int renglon[num_lineas];
   									int j = 0, l;
   									char cadena [100];
   									char control= '!';
   									int k;
   									FILE* fichero;
   									fichero = fopen(NOM_ARCHIVO, "rt");
									/*#######################################################################*/
   									while ( j <= num_lineas + 1)
   									{
      									k=1;
      									control= 'a';
      									while (control >=32 && control<=126)
      									{
            								control = fgetc(fichero);
            								l=1;
            								if(control == 86 )
            								{
               									cadena[k-1] = control;
               									while (control >=32 && control<=126)
               									{
                  									control = fgetc(fichero);
                  									cadena[l]='\0';
                  									if ( control >=32 && control<=126 )
                  									{
                     									cadena[l] = control;
                  									}
                  									l++;
               									}
            								}
            								k++;
      									}
      									if(!(strcmp(cadena,hoja)==0) && !(strcmp(cadena,zona)==0) &&  !(strcmp(cadena,zona2)==0) && !(cadena[j]==0) )
      									{	
         									printf("%s\n",cadena);
      									}
      									j++;
   								}
							/*########################################################TERMINA EL WHILE*/
   								fclose(fichero);
								}
								else
								{
									//printf("Archivo: %s vacio.\n",NOM_ARCHIVO);
								}
							}
							else
							{
								//printf("Archivo: %s vacio.\n",NOM_ARCHIVO);
							}
/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/	
						}
					}
					/*
					/*#############################################*/
					if (NOM_ARCHIVO[8]==51)
					{
						for (int o = 0; o < 2; ++o)
						{
							NOM_ARCHIVO[9] = NOM_ARCHIVO[9] + 1;
							if ( NOM_ARCHIVO[9] > 49 )
							{
								NOM_ARCHIVO[9] = '0';
							}
							//printf("%s\n",NOM_ARCHIVO);
/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
							 if(!((entrada = fopen(NOM_ARCHIVO, "r")) == NULL))
							 {  
   								if ( entrada == NULL )
   								{
      							perror(NOM_ARCHIVO);
      							return EXIT_FAILURE;
   								}	
   
   								num_lineas = 0;
   								while ((ch = fgetc(entrada)) != EOF)
   								{
      								if (ch == '\n')
      								{
         								num_lineas++;
      								}
   								}
   								if (!(num_lineas==0))
   								{
   									fclose(entrada);
									/*#######################################################################*/   
   									int renglon[num_lineas];
   									int j = 0, l;
   									char cadena [100];
   									char control= '!';
   									int k;
   									FILE* fichero;
   									fichero = fopen(NOM_ARCHIVO, "rt");
									/*#######################################################################*/
   									while ( j <= num_lineas + 1)
   									{
      									k=1;
      									control= 'a';
      									while (control >=32 && control<=126)
      									{
            								control = fgetc(fichero);
            								l=1;
            								if(control == 86 )
            								{
               									cadena[k-1] = control;
               									while (control >=32 && control<=126)
               									{
                  									control = fgetc(fichero);
                  									cadena[l]='\0';
                  									if ( control >=32 && control<=126 )
                  									{
                     									cadena[l] = control;
                  									}
                  									l++;
               									}
            								}
            								k++;
      									}
      									if(!(strcmp(cadena,hoja)==0) && !(strcmp(cadena,zona)==0) &&  !(strcmp(cadena,zona2)==0) && !(cadena[j]==0) )
      									{	
         									printf("%s\n",cadena);
      									}
      									j++;
   								}
							/*########################################################TERMINA EL WHILE*/
   								fclose(fichero);
								}
								else
								{
									//printf("Archivo: %s vacio.\n",NOM_ARCHIVO);
								}
							}
							else
							{
								//printf("Archivo: %s vacio.\n",NOM_ARCHIVO);
							}
/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/	
						}
					}
				/*#################################################*/
				}
			}
		}
		/*#########################################################*/
	}

	return 0;
}