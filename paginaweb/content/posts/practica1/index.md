+++
date = '2025-03-12T21:10:19-07:00'
draft = false
title = 'Practica 1:Elementos basicos de los lenguajes de programacion'
+++

# **Reporte: Identificar los elementos fundamentales de los lenguajes de programacion**

***
* ### **Docente:** Carlos Gallegos
* ### **Materia:** Paradigmas de Programacion
* ### **Alumno y Matricula:** Meza Cruz Gael Alfredo 376163
***

***

## Introducción

En este reporte, voy a analizar el código C que se nos proporcionó, identificando los elementos clave de los lenguajes de programación que encontré. Mi objetivo es mostrar que entiendo cómo estos elementos trabajan juntos en un programa real, usando ejemplos directos del código.

## Análisis

### 1. Nombres (Identificadores)

Aquí encontré los nombres que se usan para todo: variables como library, members, bookCount; funciones como addBook, displayBooks, saveLibraryToFile; y constantes como FICTION, NON_FICTION. Estos nombres hacen que el código sea más fácil de leer. Por ejemplo, la función addBook claramente indica que su propósito es añadir un libro.


En el archivo memory_management.h y su correspondiente archivo .c, encontré más nombres relacionados con la gestión de memoria. Estas funciones y variables están diseñadas para realizar un seguimiento de la memoria dinámica del programa, como heap_allocations, heap_deallocations, stack_allocations, y stack_deallocations. Estas variables permiten contar las asignaciones y liberaciones de memoria en el heap y la pila.


### 2. Objetos:
Vi que las variables guardan datos, y las estructuras book_t y member_t son como "cajas" que guardan varios datos juntos. Los archivos (FILE*) son objetos que permiten que el programa lea y escriba información en el disco duro. También encontré punteros, que guardan direcciones de memoria, como book_t *library.


En el archivo memory_management.c, se introducen objetos relacionados con la gestión de memoria. La estructura MemoryRecord guarda información sobre las asignaciones de memoria en el heap, como el puntero y el tamaño de la memoria asignada. Esto permite llevar un registro de las asignaciones dinámicas realizadas a través de la función addMemoryRecord.


### 3. Entornos:
Hay variables que se pueden usar en todo el programa (como static_var), y otras que solo funcionan dentro de una función (como library en main). También hay "bloques" de código donde las variables solo existen ahí.


En el archivo memory_management.c, el uso de variables globales como heap_allocations y stack_allocations permite que estos contadores sean accesibles en todo el programa. Esto permite llevar un registro global de las asignaciones y liberaciones de memoria, lo cual es útil para la gestión de la memoria.


### 4. Bloques:
Los bloques son las secciones de código dentro de llaves {}. Ayudan a organizar el código y a definir dónde funcionan las variables. Los "case" en el "switch" también son bloques. Por ejemplo, el cuerpo de la función addBook está delimitado por llaves:

```c
void addBook(book_t **library, int* count ) {
// ... código dentro de la función ...
} 
```

En el archivo memory_management.c, los bloques de código dentro de las funciones como displayMemoryUsage, incrementHeapAllocations y incrementStackAllocations están definidos con llaves {}. Además, el uso de directivas de preprocesador #if y #else en el código permite condicionar la compilación de ciertas funciones dependiendo de la definición de la macro MEMORY_MANAGEMENT_DISPLAY.


### 5. Alcance (Scope):
Esto es como el "territorio" de cada variable. Algunas son "globales" y otras "locales". Por ejemplo, las variables dentro de main solo se pueden usar en main. Como la variable choice.


En el archivo memory_management.c, las variables globales como heap_allocations, heap_deallocations, stack_allocations, y stack_deallocations son utilizadas en todo el código para realizar un seguimiento de las asignaciones y liberaciones de memoria, lo que les da un alcance global.


### 6. Administración de Memoria:
Vi que el programa usa malloc y realloc para pedir memoria cuando la necesita, y free para liberarla cuando ya no la usa. Esto es importante para no desperdiciar memoria. Por ejemplo: book_t *new_book = (book_t *)malloc(sizeof(book_t));. También encontré variables estáticas y automáticas.


En el archivo memory_management.c, las funciones como incrementHeapAllocations y incrementHeapDeallocations gestionan las asignaciones y liberaciones de memoria en el heap. La función addMemoryRecord guarda un registro de cada asignación de memoria, lo que permite hacer un seguimiento de las direcciones de memoria y sus tamaños. Además, la función removeMemoryRecord libera la memoria asociada con una dirección específica cuando se libera la memoria dinámica.


### 7. Expresiones:
Aquí encontré operaciones como comparaciones (current->id == bookID), asignaciones (new_book->next = *library), y operaciones matemáticas (bookFound->quantity--).


En el archivo memory_management.c, hay expresiones como heap_allocations++ que incrementan los contadores de asignación de memoria en el heap. Esto es un ejemplo de cómo las expresiones se usan para modificar el estado de las variables globales.


### 8. Comandos (Sentencias):
Son las instrucciones que el programa ejecuta, como int choice = 0;, addBook(&library, &bookCount);, y return 0;.


En el archivo memory_management.c, hay sentencias como malloc y free, que son fundamentales para la gestión de memoria dinámica. Por ejemplo, MemoryRecord *record = (MemoryRecord *)malloc(sizeof(MemoryRecord)); se usa para asignar memoria dinámicamente a un nuevo registro de memoria.


### 9. Secuencia:
El programa ejecuta las instrucciones una tras otra, en el orden en que están escritas. A menos que haya un if, un while, o una llamada a función, el programa sigue una línea recta. Esto es el flujo de ejecución secuencial.

### 10. Selección (Condicionales):
El programa usa if, else, y switch para tomar decisiones y ejecutar diferentes partes del código según las condiciones. Como el siguiente ejemplo:

```c
switch (choice) {
case 1:
    addBook(&library, &bookCount);
break;
case 2:
    displayBooks(library);
break;
//...
} 
```

### 11. Iteración (Bucles):
Los bucles while y for se usan para repetir partes del código varias veces, como cuando se busca un libro en la lista. Por ejemplo, en la función findBookById:

```c
while (current) {
if (current->id == bookID) {
    return current;
}
current = current->next;
} 
```

Este bucle recorre la lista de libros hasta encontrar el libro con el ID buscado, o hasta llegar al final de la lista.


En el archivo memory_management.c, el bucle while (current) se usa en la función displayMemoryUsage para recorrer todos los registros de memoria en el heap y mostrarlos. Este es un ejemplo de cómo los bucles se pueden usar para iterar a través de estructuras de datos, como listas de memoria dinámica.


### 12. Recursión:
La función displayBooksRecursive se llama a sí misma, lo que permite recorrer la lista de libros de forma elegante.
### 13. Subprogramas (Funciones):
El código está dividido en muchas funciones pequeñas, cada una con una tarea específica. Esto hace que el código sea más fácil de entender y de mantener. También, funciones auxiliares como displayMemoryUsage y incrementHeapAllocations se encargan del monitoreo y gestión de la memoria.


