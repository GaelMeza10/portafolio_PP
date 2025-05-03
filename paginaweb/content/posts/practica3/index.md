# Práctica 3: Aplicación de Haskell

**Fecha:** 12 de marzo de 2025  
**Materia:** Programación Funcional  
**Nombre del estudiante:** [Tu nombre aquí]

## ¿Qué hice en esta práctica?

En esta práctica aprendí a usar **Haskell** para construir una pequeña aplicación de línea de comandos tipo *TODO list*. Seguí un tutorial en línea de la página [FP Complete](https://www.fpcomplete.com/haskell/tutorial/stack-script/) que explica cómo usar `stack` para correr scripts de Haskell. También usé un repositorio de ejemplo llamado [steadylearner/Haskell](https://github.com/steadylearner/Haskell/tree/main/examples/blog/todo) para entender mejor cómo se puede interactuar con el sistema y manejar listas desde la terminal.

## Esta aplicación sirve para:

- Practicar los conceptos básicos del lenguaje Haskell.
- Usar comandos de consola para agregar, editar y borrar tareas.

Es un ejemplo útil para aprender cómo manejar entrada/salida, listas, e interacción básica con el usuario.

## ¿Cómo funciona?

El programa principal (`Main.hs`) hace lo siguiente:

1. **Inicia un menú de comandos** donde el usuario puede gestionar una lista de tareas:

   - `+ <texto>`: Agrega una nueva tarea.
   - `- <número>`: Elimina una tarea por su número.
   - `s <número>`: Muestra una tarea específica.
   - `e <número>`: Edita una tarea.
   - `l`: Lista todas las tareas.
   - `r`: Invierte el orden de la lista.
   - `c`: Limpia toda la lista.
   - `q`: Sale del programa.

## ¿Cómo lo ejecuté?

1. Instalé **Stack**, una herramienta para compilar y ejecutar proyectos Haskell.
2. Corrí `stack build` para compilar el proyecto.
3. Ejecuté el programa con `stack run` o directamente con `./Main.hs` si se le da permiso de ejecución.


## Conclusión

Este proyecto fue muy útil para practicar Haskell en un contexto real. Aunque es una aplicación sencilla, cubre muchos aspectos del lenguaje: listas, entrada/salida, manejo de errores, y uso de librerías básicas. También me mostró cómo usar `stack` de manera más práctica.

Aprendi: 
- A manejar entrada del usuario desde consola.
- A trabajar con listas y patrones en Haskell.
- A compilar y ejecutar scripts Haskell usando Stack.