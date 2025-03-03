#include <stdio.h>
//objetivo de la practica: reporte y plasmar lo que vimos en la teoria, bloques , alcances, nombres, y otras cosas ese
//sera nuestro reporte desde el piunto de vista de cada uno de esos conceptos
typedef struct _book
{
    int id;
    char title[100];
    char autor[100];
    int publication_year;
    int quantity;

} Ts_book;
typedef struct _member
{
    int id;
    char name[100];
    int bookIssueds;

} Ts_member;

int main()
{
    int choice = 0;
    do
    {
        printf("\nMenu de sistema de manejo de biblioteca \n");
        printf("\t1. Agregar un Libro\n");
        printf("\t2. Mostrar libros disponibles\n");
        printf("\t3. Agregar un miembro\n");
        printf("\t4. Prestar Libro\n");
        printf("\t5. Salir\n");
        printf("\tIndica tu opcion: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            // addBook();
            break;
        case 2:
            // displayBooks();
            break;
        case 3:
            // addMember();
            break;
        case 4:
            // issueBook();
            break;
        case 5:
            printf("Saliendo del programa...");
            break;
        default:
            printf("Esta opcion no es valida!!");
            break;
        }

    } while (choice != 5);
}