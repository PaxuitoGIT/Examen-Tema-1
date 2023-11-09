# Examen-Tema-1

https://github.com/PaxuitoGIT/Examen-Tema-1/tree/main

# Parte 1: Preguntas de opción múltiple 

### 1.C++ es un lenguaje de programación ampliamente utilizado que ha evolucionado a lo largo de los años. ¿Cuáles de las siguientes opciones describen correctamente las características centrales de C++?

d. Todas las anteriores

### 2. Durante el proceso de desarrollo, a menudo es necesario compilar y enlazar múltiples archivos. En este contexto, ¿qué es un archivo makefile?

b. Un archivo que ayuda a gestionar y automatizar la compilación de proyectos de programación

### 3. En C++, las variables pueden referirse a datos o direcciones de memoria. En relación a esto, ¿qué son los punteros en la programación C++?

d. Ninguna de las anteriores

# Parte 2: Problemas de codificación

### 1.Operaciones Básicas

Creé un solo archivo que incluya todo este codigo [aquí](https://github.com/PaxuitoGIT/Examen-Tema-1/blob/main/Operacion_basica.cpp)

### 2.Gestión de Estudiantes

Creé un encabezado que se llamara [estudiantes.h](https://github.com/PaxuitoGIT/Examen-Tema-1/blob/main/estudiante.h) y luego en [main.cpp](https://github.com/PaxuitoGIT/Examen-Tema-1/blob/main/main.cpp) le introduje los datos para que luego imprimiera los datos

### 3.Optimización de Memoria

Creé un archivo [punteros.cpp](https://github.com/PaxuitoGIT/Examen-Tema-1/blob/main/punteros.cpp) y le asigné que intercambiaran los datos

### 4.Manejo de Excepciones

Las excepciones las introduje en [estudiantes.h](https://github.com/PaxuitoGIT/Examen-Tema-1/blob/main/estudiante.h)

### 5.Registro de Materias

Amplié la clase de [estudiantes.h](https://github.com/PaxuitoGIT/Examen-Tema-1/blob/main/estudiante.h) para que luego en [main.cpp](https://github.com/PaxuitoGIT/Examen-Tema-1/blob/main/main.cpp) saliesen los datos

### 6.Promedio del Estudiante

Lo introduje en [promedios.h](https://github.com/PaxuitoGIT/Examen-Tema-1/blob/main/promedioestudiante.h)

### 7. Manejo de Ausencias

Lo introduje en [asistencia.h](https://github.com/PaxuitoGIT/Examen-Tema-1/blob/main/asistencia.h)

### 8. Filtrado de Estudiantes por Grado

Lo introduje en [filtro.h](https://github.com/PaxuitoGIT/Examen-Tema-1/blob/main/filtro.h)

### 9. Gestión de Excepciones Personalizadas

Lo introduje en [main.cpp](https://github.com/PaxuitoGIT/Examen-Tema-1/blob/main/main.cpp)

### 10. Registro de Profesores

Lo introduje en [main.cpp](https://github.com/PaxuitoGIT/Examen-Tema-1/blob/main/main.cpp)

# Parte 3: Preguntas de desarrollo

### 8.La programación ha adoptado diferentes enfoques a lo largo del tiempo. Explica: ¿Cómo la programación orientada a objetos difiere de la programación procedimental? ¿Cómo C++ brinda soporte para ambos paradigmas?

La programación procedimental se centra en tareas específicas e irían paso a paso como lo hace el lenguaje C, mientras que, la programación orientada a objetos puede organiza el código en clases para que luego se junten todo y nos suelte el objeto que estarían todos los datos. Es por eso que existe C++, una extensión mejorada del C.

### 9.Las excepciones en C++ tienen un comportamiento específico. Describe: ¿Qué es la propagación de una excepción? ¿Qué ocurre si una excepción lanzada no es capturada por ningún bloque catch?

Cuando nos referimos a propagación, también nos referimos a las excepciones, que son procesos en las que hay un "throw", y lo que hace es hacer una llamada hasta que encuentre un "catch". Esto lo que hace es para que el programa no se cierre de forma brusca e intente suavizar el error.

Cuando una excepcion lanzada no es capturada por un catch, el programa se cierra de forma brusca.

### 10. La gestión de recursos es un concepto crucial en la programación. Explica: ¿Qué se entiende por "Adquisición de Recursos" en el contexto de C++? ¿Por qué es importante y cómo se relaciona con la gestión de excepciones?

La adquisición de recursos se entiende por cómo obtener recursos externos, como los archivos o la memoria dinámica. Es importante porque pueden asegurar de que los datos se liberen correctamente. Es decir, la adquisición de recursos adquiere los recursos en el constructor de un objeto y los libere de forma automática en su destructor, para así facilitar la gestión de excepciones.
