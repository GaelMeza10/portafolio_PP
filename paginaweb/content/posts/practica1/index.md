+++
date = '2025-03-12T21:10:19-07:00'
draft = false
title = 'Practica 1:Elementos basicos de los lenguajes de programacion'
+++

# **Practica 1: Identificar los elementos de los lenguajes de programacion**

***
* ### **Docente:** Carlos Gallegos
* ### **Materia:** Paradigmas de Programacion
* ### **Alumno y Matricula:** Meza Cruz Gael Alfredo 376163
***

***
# Reporte de Análisis del Código

## 1. Nombres

### Variables:
- static_var
- bss_var
- library
- members
- bookCount
- memberCount
- choice
- new_book
- new_member
- current
- bookFound
- memberFound
- id
- name
- title
- author
- genre
- issued_books
- quantity
- due_date
- return_date
- file
- fp
- temp
- buffer

### Funciones:
- genreToString
- addBook
- findBookById
- displayBooksRecursive
- displayBooks
- addMember
- issueBook
- returnBook
- freeLibrary
- freeMembers
- saveLibraryToFile
- loadLibraryFromFile
- saveMembersToFile
- loadMembersFromFile
- displayMembers
- searchMember
- removeBook
- removeMember
- updateBookInfo
- updateMemberInfo
- validateInput
- sortBooks
- sortMembers
- main

### Constantes:
- FICTION
- NON_FICTION
- SCIENCE
- HISTORY
- FANTASY
- BIOGRAPHY
- OTHER
- MAX_BOOKS
- MAX_MEMBERS
- MAX_ISSUED_BOOKS
- MAX_STRING_LENGTH

### Archivos:
- "memory_management.h"
- "library.txt"
- "members.txt"
- "config.h"
- "utils.h"

## 2. Objetos

- **Variables de tipo struct**: `book_t`, `member_t`.
- **Objetos asignados en el heap**: `malloc`, `realloc`.
- **Objetos de tipo FILE***: `library.txt`, `members.txt`.
- **Punteros**: `book_t *current`, `member_t *new_member`.

## 3. Entornos

- **Global**: `static_var`, `bss_var`, `library`, `members`.
- **Funcional**: Variables dentro de funciones (`choice`, `current`).
- **Bloque**: Variables dentro de `{}` en estructuras de control como `for`, `if`, etc.

## 4. Bloques

Los bloques `{}` delimitan funciones y estructuras de control. Algunas estructuras de control utilizadas fueron: `if`, `switch`, `while`.

## 5. Alcance

- **Global**: Variables accesibles en todo el programa.
- **Local**: Variables dentro de funciones.
- **Estructuras**: Accesibles sólo mediante `.` (ej. `book.id`).
- **Archivo**: Variables `static` en archivos `.c`.

## 6. Administración de Memoria

- **Estática**: `static_var` (datos), `bss_var` (BSS).
- **Automática**: Variables locales (`choice`, `current`).
- **Dinámica**: `malloc`, `realloc` (para `book_t`, `member_t`).
- **Liberación**: `freeLibrary()`, `freeMembers()`.
- **Monitoreo**: `incrementHeapAllocations`, `displayMemoryUsage`.

## 7. Expresiones

- **Aritméticas**: `bookCount + 1`, `memberCount - 1`.
- **Lógicas**: `if (!library)`, `while (current != NULL)`.
- **Asignación**: `new_book->id = id;`, `*library = new_book;`.
- **Casting**: `(book_t *)malloc(sizeof(book_t))`.
- **Acceso a miembros**: `current->id`, `new_book->title`.

## 8. Comandos (Sentencias)

- **Declaraciones**: `int bookID = 0;`, `member_t *new_member;`.
- **Asignaciones**: `bookFound->quantity--;`, `file = fopen("library.txt", "w");`.
- **Llamadas a funciones**: `addBook(&library, &bookCount);`.
- **Retorno**: `return 0;`.
- **Control de flujo**: `if`, `else`, `switch`, `while`, `do-while`, `for`, `break`, `continue`.

## 9. Secuencia

El programa ejecuta las instrucciones una tras otra, en el orden en que están escritas. A menos que haya un `if`, un `while`, o una llamada a función, el programa sigue una línea recta. Esto es el flujo de ejecución secuencial.

## 10. Selección

- **if-else**: Para decisiones simples.
- **switch-case**: Para opciones múltiples (`switch (choice)`).

## 11. Iteración (Bucles)

- **for**, **while**, **do-while**: Utilizados para listas enlazadas y recorridos.

## 12. Recursión

La función `displayBooksRecursive()` se llama a sí misma para recorrer la lista de libros.

## 13. Subprogramas (Funciones)

Funciones especializadas para manejar libros, miembros y archivos. 
Funciones auxiliares como `genreToString` para conversión de datos.


