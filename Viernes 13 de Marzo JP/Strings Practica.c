#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char limpieza[10];
    int opcion;
    int longitud;
    char alumno1[20], alumno2[20];
    char equipo1[50], equipo2[50];
    char integrantes[3][30];
    char presentacion_equipo[150];
    char letra_buscada;

    do {
        printf("\n--- MENU DE ALUMNOS Y EQUIPOS ---\n");
        printf("1. Registrar nombres de alumnos (scanf)\n");
        printf("2. Registrar nombres de equipos completos (fgets)\n");
        printf("3. Lista de integrantes (Arreglo de cadenas)\n");
        printf("4. Medir longitud de un nombre (strlen)\n");
        printf("5. Unir alumno y equipo (strcat)\n");
        printf("6. Comparar nombres de equipos (strcmp)\n");
        printf("7. Buscar letra en el nombre de un alumno (strchr)\n");
        printf("8. Salir\n");
        printf("Seleccione una opcion: ");

        fgets(limpieza, sizeof(limpieza), stdin);
        opcion = atoi(limpieza);

        switch(opcion) {

            case 1:
                printf("\n--- 1. NOMBRES SIMPLES DE ALUMNOS ---\n");
                printf("Escribe el primer nombre del alumno 1 (sin espacios): ");
                scanf("%s", alumno1);

                printf("Escribe el primer nombre del alumno 2 (sin espacios): ");
                scanf("%s", alumno2);

                fgets(limpieza, sizeof(limpieza), stdin); // Limpia el buffer

                printf("Alumnos guardados: %s y %s\n", alumno1, alumno2);
                break;

            case 2:
                printf("\n--- 2. NOMBRES DE EQUIPOS COMPLETOS ---\n");
                printf("Ingresa el nombre completo del primer equipo: ");
                fgets(equipo1, sizeof(equipo1), stdin);
                equipo1[strcspn(equipo1, "\n")] = 0;

                printf("Ingresa el nombre completo del segundo equipo: ");
                fgets(equipo2, sizeof(equipo2), stdin);
                equipo2[strcspn(equipo2, "\n")] = 0;

                printf("Equipos registrados: [%s] | [%s]\n", equipo1, equipo2);
                break;

            case 3:
                printf("\n--- 3. REGISTRO DE INTEGRANTES ---\n");
                for(int i = 0; i < 3; i++) {
                    printf("Ingresa el nombre completo del integrante %d: ", i + 1);
                    fgets(integrantes[i], sizeof(integrantes[i]), stdin);
                    integrantes[i][strcspn(integrantes[i], "\n")] = 0;
                }

                printf("\nIntegrantes del equipo:\n");
                for(int i = 0; i < 3; i++) {
                    printf("- %s\n", integrantes[i]);
                }
                break;

            case 4:
                printf("\n--- 4. LONGITUD DEL NOMBRE ---\n");
                printf("Ingresa el nombre de un alumno para contar sus letras: ");
                fgets(equipo1, sizeof(equipo1), stdin); // Reutilizamos variable para ahorrar memoria
                equipo1[strcspn(equipo1, "\n")] = 0;

                longitud = strlen(equipo1);
                printf("El nombre del alumno tiene %d caracteres.\n", longitud);
                break;

            case 5:
                printf("\n--- 5. ASIGNACION DE EQUIPO (strcat) ---\n");
                printf("Ingresa el nombre del alumno: ");
                fgets(equipo1, sizeof(equipo1), stdin);
                equipo1[strcspn(equipo1, "\n")] = 0;

                printf("Ingresa el nombre del equipo al que pertenece: ");
                fgets(equipo2, sizeof(equipo2), stdin);
                equipo2[strcspn(equipo2, "\n")] = 0;

                strcpy(presentacion_equipo, "El alumno ");
                strcat(presentacion_equipo, equipo1);
                strcat(presentacion_equipo, " pertenece al equipo: ");
                strcat(presentacion_equipo, equipo2);

                printf("Registro completo: %s\n", presentacion_equipo);
                break;

            case 6:
                printf("\n--- 6. COMPARAR EQUIPOS (strcmp) ---\n");
                printf("Ingresa el nombre del equipo A: ");
                fgets(equipo1, sizeof(equipo1), stdin);
                equipo1[strcspn(equipo1, "\n")] = 0;

                printf("Ingresa el nombre del equipo B: ");
                fgets(equipo2, sizeof(equipo2), stdin);
                equipo2[strcspn(equipo2, "\n")] = 0;

                if(strcmp(equipo1, equipo2) == 0) {
                    printf("¡Aviso! Ambos equipos tienen el mismo nombre.\n");
                } else {
                    printf("Los nombres de los equipos son diferentes.\n");
                }
                break;

            case 7:
                printf("\n--- 7. BUSCAR LETRA EN ALUMNO (strchr) ---\n");
                printf("Ingresa el nombre del alumno: ");
                fgets(equipo1, sizeof(equipo1), stdin);
                equipo1[strcspn(equipo1, "\n")] = 0;

                printf("Ingresa la letra a buscar en su nombre: ");
                scanf(" %c", &letra_buscada);

                fgets(limpieza, sizeof(limpieza), stdin);

                if(strchr(equipo1, letra_buscada)) {
                    printf("La letra '%c' SI esta en el nombre del alumno.\n", letra_buscada);
                } else {
                    printf("La letra '%c' NO esta en el nombre.\n", letra_buscada);
                }
                break;

            case 8:
                printf("\nCerrando sistema de alumnos y equipos...\n");
                break;

            default:
                printf("\nOpcion invalida, intente de nuevo.\n");
        }

    } while(opcion != 8);

    return 0;
}
