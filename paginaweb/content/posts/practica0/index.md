+++
date = '2025-02-21T10:18:17-08:00'
draft = false 

title = 'Practica0: Markdown,Git & Hugo'
+++


# **Práctica 0: Uso de repositorios**

***
* ### **Docente:** Carlos Gallegos
* ### **Materia:** Paradigmas de Programacion
* ### **Alumno y Matricula:** Meza Cruz Gael Alfredo 376163
***

***
## **Primera sesión: Sintaxis y uso de Markdown**
En esta primera sesión realizamos un breve ejercicio utilizando **Visual Studio Code**, donde trabajamos con **Markdown**, un lenguaje de marcado ligero que permite dar formato al texto. Para ello, creamos un archivo con la extensión 
**`.md`**.

***
<!-- Esto es un comentario bro-->

# Encabezado 1

## Encabezado 2

### Encabezado 3

#### Encabezado 4

##### Encabezado 5

<!-- italicas -->
Este es un texto en *italica* con asteriscos

Este es un texto en _italica_ con guion bajo

<!-- Negritas -->

Este es un texto en **negritas** con asterisco

Este es un texto en __negritas__ con guion bajo

<!-- Tachado -->

Este es un texto ~~tachado~~

<!-- UL -->

* Elemento 1
* Elemento 2
* Elemento 3
* Elemento 4
  * Elemento 4.1 con tabulador
<!-- OL -->

1. Elemento 1
1. Elemento 2
1. Elemento 3
   1. Elemento 3.1
   1. Elemento 3.2
   <!-- Se agrega 1. para que sea sencillo si se hace algun cambio-->

<!-- Enlaces -->

[Texto de enlace](direccion de enlace "Texto del tooptip")

[UABC](https://www.uabc.mx/ )


[UABC](https://www.uabc.mx/ "Sitio Universitario")

<!-- Imagenes -->

![Texto alternativo](https://www.uabc.mx/wp-content/uploads/2025/02/C1.jpg)

![Texto alternativo](https://www.uabc.mx/wp-content/uploads/2025/02/C1.jpg "UABC FOTO")

[![CLick boton](https://www.uabc.mx/wp-content/uploads/2025/02/C1.jpg)]((https://www.uabc.mx/) "UABC FOTO")

<img src="https://www.uabc.mx/wp-content/uploads/2025/02/C1.jpg" alt="foto uabc" width="120" height="160">

<!-- Bloques de codigo -->

```
Este es un bloque de codigo 
bloque de codigo dos
```

```python
print("Hola Mundo!")
```

```javascript
console.log('Hola Mundo!')
const test =()
```

```html
<h1> Hola mundo! </h1>
```

<!-- Tablas -->

| Productos | Precio | Cantidad |
| - | - | - |
| Laptop | 3,3 | 2 |
| Mouse | 3,3 | 2 |

<!-- Notas -->

> Esto es una nota
> 
> Esto solo aplica para la version 3.1 de python

<!-- Tareas -->

* [x] Primera Tarea
* [ ] Segunda Tarea
* [ ] TerceraTarea
  
<!-- Divisiones horizontales -->

***
--- 
___

<!-- Menciones -->
<!-- Especial para github o gitlab solo ahi se puede ver -->

@darthrookie :+1: :smile:

## **Segunda sesión. Uso de Git y GitHub.**
En la segunda sesión aprendimos a utilizar Git, un sistema de control de versiones que permite gestionar cambios en el código, y GitHub, una plataforma que facilita el alojamiento de proyectos y el trabajo colaborativo utilizando Git. Esto nos permitió comprender cómo gestionar repositorios y trabajar en equipo de forma más eficiente.
***
#### Los objetivos de esta sesión fueron:
* Entender qué es Git y GitHub.
* Aprender los comandos básicos de Git.
* Crear y gestionar un repositorio en GitHub.
***
#### Comandos básicos de Git:
* **git init:** Inicializar un repositorio.
* **git add .** cambios al área de preparación.
* **git commit -m "mensaje":** Confirmar cambios.
* **git push:** Subir cambios al repositorio remoto.
* **git pull:** Traer cambios desde el repositorio remoto.
***
Durante la sesión, creamos un repositorio en GitHub y lo enlazamos con nuestro proyecto local utilizando Git Bash. Posteriormente, subimos el archivo Index.md creado en la primera sesión al repositorio remoto utilizando los comandos aprendidos. Esto nos permitió comprender cómo trabajar con Git y GitHub, gestionar versiones del proyecto y colaborar con otros usuarios de forma eficiente.

El uso de Git Bash fue fundamental para ejecutar los comandos de Git, permitiéndonos realizar tareas como inicializar repositorios, agregar archivos, realizar confirmaciones y subir cambios a GitHub. Con esto logramos establecer la conexión entre nuestro proyecto local y el repositorio remoto, facilitando así la administración del proyecto y la colaboración en equipo.

***

## **Tercera sesión: Generar páginas estáticas con Hugo y GitHub Actions**

En esta tercera sesión aprendimos a utilizar Hugo, un framework para generar sitios web estáticos de forma rápida y sencilla, y a desplegarlo automáticamente utilizando GitHub Actions. Hugo permite crear sitios web mediante comandos simples, organizando el contenido en carpetas específicas y utilizando archivos en formato Markdown para agregar texto e imágenes.

#### Los objetivos de esta práctica fueron:
* Aprender qué es Hugo.
* Crear una página estática con Hugo.
* Automatizar despliegues con GitHub Actions.

***

Para trabajar con Git, utilizamos Git Bash, una terminal que nos permitió ejecutar comandos de Git en un entorno similar a Linux, facilitando la gestión del repositorio y el despliegue del sitio web.
Primero, instalamos Hugo y creamos un nuevo sitio con el comando:
```
hugo new site nombre-del-sitio
```
Esto generó la estructura del proyecto, donde en la carpeta **content/** agregamos páginas mediante comandos como:
```
hugo new posts/mi-primer-post.md
```
Para visualizar el sitio localmente, usamos el comando:
```
hugo server
```
y accedimos a http://localhost:1313.

Luego, añadimos un tema visual descargado desde la página de Hugo en el apartado de temas e hicimos cambios en el archivo **config.toml** para configurarlo. Después, aprendimos a automatizar el despliegue del sitio con GitHub Actions. 

Creamos un repositorio en GitHub, subimos el proyecto utilizando Git Bash y añadimos un archivo de workflow en **`.github/workflows/hugo.yml`** que permitía generar y desplegar automáticamente el sitio en GitHub Pages cada vez que realizáramos cambios y los subiéramos a GitHub.

El uso de Git Bash nos facilitó ejecutar comandos para inicializar el repositorio, realizar commits, vincular el proyecto a GitHub y desplegar automáticamente el sitio. Esto nos permitió comprender cómo crear, personalizar y publicar un sitio web estático utilizando Hugo, GitHub Actions y Git Bash. 
