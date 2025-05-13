+++
date = '2025-03-12T21:10:19-07:00'
draft = false
title = 'Practica 2: Analisis Programacion Orientada a Objetos.'
+++

# Reporte: Análisis de tres programas relacionados a la POO

***
* ### **Docente:** Carlos Gallegos
* ### **Materia:** Paradigmas de Programacion
* ### **Alumno y Matrícula:** Meza Cruz Gael Alfredo 376163
***
## Introduccion
En este reporte voy a analizar tres programas diferentes (dos en Java y uno en Python) que implementan conceptos fundamentales de la programación orientada a objetos. Me enfocaré específicamente en explicar cómo funcionan los programas y cómo implementan los conceptos de **encapsulamiento (abstracción)**, **herencia (implementación)** y **subtipos (interfaz)**.

## Programa 1: Sistema de inscripción de estudiantes (Java)

### ¿Cómo funciona este programa?

Este primer programa básicamente maneja inscripciones de estudiantes a materias y actividades. Tiene estas clases:

1. **Persona**: La clase base con nombre e INE
2. **Estudiante**: Extiende de Persona y añade cosas como carrera y matrícula
3. **Materia**: Representa una materia con título, carrera y cupo
4. **Main**: Donde se ejecuta todo

Cuando lo corres, crea una materia de "Informática", un estudiante llamado "Gabriel Mena", y hace tres inscripciones diferentes:
- A "Rugby" (una actividad normal)
- A la materia "Informática" (aquí revisa si hay cupo)
- A "Jornadas Estudiantiles" en una fecha específica

### Análisis de los conceptos:

#### 1. Encapsulamiento (abstracción)

El encapsulamiento es como cuando guardas tus cosas en una caja y solo dejas que otros vean lo que tú quieres. En el código veo ejemplos como:

- En `Materia`, hay un método `getCupo()` para ver el cupo, en lugar de dejar que cualquiera acceda directamente al atributo.
- El método `tomarCupo()` esconde la lógica de cómo se reduce el cupo:

```java
public int tomarCupo() {
  if(cupo==0) return cupo;
  return this.cupo=cupo-1;
}
```

#### 2. Herencia (implementación)

La herencia es básicamente cuando una clase "hereda" cosas de otra. En el programa:

- `Estudiante` hereda de `Persona` con `extends`
- Obtiene los atributos `nombre` e `ine`, y añade sus propias cosas
- Usa `super(nombre, ine)` para llamar al constructor del "padre"

```java
public class Estudiante extends Persona {
  String carrera;
  int matricula;
  String ciclo;

  public Estudiante(String nombre, int ine, String carrera, int matricula, String ciclo) {
    super(nombre, ine); // Llama al constructor de Persona
    // más código...
  }
}
```

#### 3. Subtipos (interfaz)

Esto se refiere a cómo una clase puede "reemplazar" o "extender" comportamientos de otra. En el código:

- El método `inscribirse` está sobrescrito (override) en `Estudiante` con `@Override`. Básicamente dice "yo lo hago diferente a mi padre".
- También hay sobrecarga (overload) con tres versiones diferentes del método `inscribirse`:

```java
// Versión 1: sobrescribe el método del padre
@Override
public String inscribirse(String actividad) {
  return "El alumno "+nombre+" INE "+ine+" perteneciente a la carrera "+carrera+" ha completado su inscripción";
}

// Versión 2: añade una fecha
public String inscribirse(String actividad, LocalDate fecha) {
  return "Inscripción realizada para la actividad "+actividad+" a tener lugar el "+fecha;
}

// Versión 3: recibe una materia y verifica cupo
public String inscribirse(Materia materia) {
  if(verificar_cupo(materia)){
    materia.tomarCupo();
    return "Se completó la inscripción en "+materia.titulo;
  }else{
    return "No hay cupo disponible";
  }
}
```

## Programa 2: Sistema de cursos con genéricos (Java)

### ¿Cómo funciona?

Este programa es un poco más avanzado porque usa genéricos(plantillas). Tiene:

1. **Curso<T>**: Una clase genérica que puede asociarse con distintos tipos de entidades
2. **Facultad**: Representa una facultad de la uni
3. **Escuela**: Una escuela dentro de una facultad
4. **Instituto**: Un instituto de investigación 
5. **Main**: El programa principal


Al correrlo, crea una facultad, un instituto, una escuela, y luego tres cursos distintos asociados a estas entidades. Al final inscribe a tres estudiantes en diferentes cursos.

### Análisis de conceptos:

#### 1. Encapsulamiento (abstracción)

- La clase `Curso<T>` ya muestra mejor encapsulamiento porque sus atributos son `private`
- Los métodos `toString()` en las otras clases encapsulan cómo quieren mostrarse como texto

```java
public class Curso<T>{
  private String titulo;
  private T entidad;
  private String semestre;
  // ...
}
```

#### 2. Herencia (implementación)

No hay herencia directa con `extends`, pero hay relaciones entre clases:

- `Escuela` e `Instituto` tienen una referencia a `Facultad`, es decir, "tienen una" facultad en lugar de "ser una" facultad

```java
public class Escuela{
  Facultad facultad; // "tiene una" facultad
  String nombre;
  // ...
}
```

#### 3. Subtipos (interfaz)

- Se usaron genericos o plantillas `Curso<T>`. Es como decir "este curso puede estar asociado a cualquier cosa T"
- Las tres clases implementan `toString()`, que es como sobrescribir un método que todas las clases heredan de `Object`

```java
// Puedo crear cursos de diferentes tipos:
Curso<Escuela> python_per_tutti = new Curso<>("Python per tutti", new Escuela(...), "2022-2");
Curso<Facultad> curso_inductorio = new Curso<>("Curso inductorio", facultad_de_ciencias, "2022-1");
```

## Programa 3: Sistema de estudiantes en Python

### ¿Cómo funciona?

Este programa tiene:

1. **Persona**: Clase base con nombre e INE
2. **Estudiante**: Clase derivada de Persona con carrera adicional
3. **inscribir**: Una función para inscribir estudiantes (no está dentro de ninguna clase)

### Análisis de conceptos:

#### 1. Encapsulamiento (abstracción)

- Python maneja el encapsulamiento diferente. No tiene palabras como `private` o `public`.
- Por convención se usa un guión bajo (`_`) para indicar "oye, esto es privado, no lo toques", pero en el código no se usa esto.

#### 2. Herencia (implementación)

- `Estudiante` hereda de `Persona` poniéndola entre paréntesis:

```python
class Estudiante(Persona):  # Así heredas en Python
  def __init__(self, nombre, ine, carrera):
    super().__init__(nombre, ine)  # Llama al constructor padre
    self.carrera = carrera
```

#### 3. Subtipos (interfaz)

- `Persona` tiene un método `inscribirse()` que lanza un error `NotImplementedError`. Es como decir "oye, si heredas de mí, TIENES que implementar este método"
- `Estudiante` lo implementa como debe ser

```python
class Persona:
  def inscribirse(self, actividad):
    raise NotImplementedError  # Como decir "esto es obligatorio implementarlo"

class Estudiante(Persona):
  def inscribirse(self, curso):
    return "El alumno "+self.nombre+" documento de identidad nro "+str(self.ine)+" se ha inscrito exitosamente en el curso "+curso
```

- La función `inscribir()` usa parámetros por defecto, que es la forma "pythónica" de hacer sobrecarga:

```python
def inscribir(nombre, ine, curso = "Matemáticas", periodo ="2022-II"):
```

## Conclusiones

Después de analizar estos programas, me queda claro que:

1. **Encapsulamiento**: Se puede hacer de diferentes formas. Java lo hace más "estricto" con `private`, mientras que Python es más relajado.

2. **Herencia**: Tanto Java como Python la soportan, pero con diferente sintaxis (`extends` vs paréntesis).

3. **Subtipos**: Se puede hacer sobrescritura de métodos en ambos lenguajes. Java tiene además los genéricos que son súper útiles para crear código más flexible.

Me parecio interesante la programacion orientada a objetivos, y que me gustó más cómo se implementan estos conceptos en Python tiene una sintaxis más limpia.
