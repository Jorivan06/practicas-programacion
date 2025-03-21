
#include <stdio.h>
#include<conio.h>
#include<windows.h>
char nombre[3], tipo[3], nivel[3], ataques[3], respuesta;
int edad[10], i = 0, j, opcion1 = 0, opcion2 = 0;

main(){


    do{

        puts(" \t********* Pokedex ******** \n\n");
        printf(" 1- Registrar Pokemon\n 2- Consultar Pokemon\n 3- Salir\n\n");
        puts("Seleccione una opcion");
        scanf("%d", &opcion1);
		system("cls");
        switch (opcion1){
            case 1:

                printf(" 1- Pokemon Agua\n 2- Pokemon Tierra\n 3- Pokemon Aire\n 4- Pokemon Fuego\n\n");
                puts("Seleccione una opcion");
                scanf("%d", &opcion2);
             	system("cls");

                if(opcion2 == 1){
                	
                	puts("\t\n ***** Registro Pokemon de Agua ***** \n");

                    for(i = 1; i < 3; i++){
                        printf("Nombre%d: ", i);
                        scanf("%s", &nombre[i]);
                        system("cls");
                        printf("Tipo%d: ", i);
                        scanf("%s", &tipo[i]);
                        system("cls");
                        printf("Ataques%d: ", i);
                        scanf("%s", &ataques[i]);
                        system("cls");
                        printf("Nivel%d: ", i);
                        scanf("%d", &nivel[i]);
                        system("cls");
                        printf("Edad%d: ", i);
                        scanf("%d", &edad);
                        system("cls");

                        }
                        printf("\nPokemon registrado exitosamente!!!\n");


                }else if(opcion2 == 2){

                    puts("\t\n ***** Registro Pokemon de Tierra ***** \n");
                        printf("¿Desea iniciar s/n (si o no)? \n");
                        respuesta = getchar();
            
                        while (respuesta = getchar() == 's'){
                            
                            printf("Nombre: ");
                            scanf("%s", &nombre);
                            printf("Tipo: ");
                            scanf("%s", &tipo);
                            printf("Ataques: ");
                            scanf("%s", &ataques);
                            printf("Nivel: ");
                            scanf("%s", &nivel);
                            printf("Edad: ");
                            scanf("%d", &edad);
                            
                            printf("\n¿Desea agregar otro pokemon s/n (si o no)? \n");
                            respuesta = getchar();                 
                        }
                
                }else if(opcion2 == 3){
                	puts("\t\n ***** Registro Pokemon de Aire ***** \n");

                    while (respuesta = getchar() == 's'){
                            
                            printf("Nombre: ");
                            scanf("%s", &nombre);
                            printf("Tipo: ");
                            scanf("%s", &tipo);
                            printf("Ataques: ");
                            scanf("%s", &ataques);
                            printf("Nivel: ");
                            scanf("%s", &nivel);
                            printf("Edad: ");
                            scanf("%d", &edad);
                            
                            printf("\n¿Desea agregar otro pokemon s/n (si o no)? \n");
                            respuesta = getchar();                 
                        }
                
                }else if(opcion2 == 4){
                		puts("\t\n ***** Registro Pokemon de Fuego ***** \n");

                    for(i = 1; i < 3; i++){
                        printf("Nombre%d: ", i);
                        scanf("%s", &nombre[i]);
                        system("cls");
                        printf("Tipo%d: ", i);
                        scanf("%s", &tipo[i]);
                        system("cls");
                        printf("Ataques%d: ", i);
                        scanf("%s", &ataques[i]);
                        system("cls");
                        printf("Nivel%d: ", i);
                        scanf("%d", &nivel[i]);
                        system("cls");
                        printf("Edad%d: ", i);
                        scanf("%d", &edad);
                        system("cls");

                        }
                        printf("\nPokemon registrado exitosamente!!!\n");
                
                }
                
                break;
            
            case 2:
            	
               puts("\t\n ***** Consultar Pokemon ***** \n");

   			 	if (i == 0){
					printf("No hay Pokémon registrados.\n");
					}
        		else {
       		 		for (j = 1; j < i; j++) {
            		printf("Nombre%d: %s\n", j, nombre[j]);
            		printf("Tipo%d: %s\n", j, tipo[j]);
            		printf("Ataques%d: %s\n", j, ataques[j]);
            		printf("Nivel%d: %d\n", j, nivel[j]);
            		printf("Edad%d: %d\n\n", j, edad[j]);
        }
    }
    				system("pause");
   			 		system("cls");
   				 break;
            case 3:
                puts("\t\n ***** Saliendo de la Pokedex, no apague el dispositivo durante el proceso ***** \n");
    			Sleep(3500);
				system("pause");
    			break;
                
            
            default:
            puts("Opción invalida!!!");
                break;
        }
    }while (opcion1 != 3 );

}
