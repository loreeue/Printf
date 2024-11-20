## Printf

**Printf** es un proyecto desarrollado en 42 Madrid. Su objetivo principal es reprogramar la función `printf` de la biblioteca estándar de C, aprendiendo a manejar argumentos variádicos y creando una versión personalizada que se pueda usar en futuros proyectos.

![Logo 42 Madrid](42-Madrid.jpeg)

### Descripción del Proyecto

El proyecto consiste en implementar la función `ft_printf`, que replica el comportamiento de la función estándar `printf`. Esta implementación permite trabajar con distintos formatos de conversión y manejar datos de manera eficiente.

#### Características Principales

- **Soporte para múltiples conversiones:** Incluye las conversiones más comunes (`c`, `s`, `p`, `d`, `i`, `u`, `x`, `X`, `%`).
- **Uso eficiente de memoria:** Manejo seguro de memoria para evitar fugas.
- **Ampliabilidad:** El diseño permite agregar más conversiones o características.

### Archivos Incluidos

- `ft_printf.c`: Contiene la lógica principal de la función.
- `ft_printf_controls.c`: Funciones auxiliares utilizadas por ft_printf.
- `ft_aux.c`: Funciones auxiliares utilizadas por ft_printf.
- `ft_printf.h`: Prototipos y definiciones necesarias.

### Cómo Usarlo

1. **Compilación:**
   Utiliza el siguiente comando para compilar:
   ```bash
   gcc -Wall -Werror -Wextra ft_printf.c ft_printf_conttols.c ft_aux.c
   ```

2. **Uso:**
   Llama a la función `ft_printf` de manera similar a `printf`:
   ```c
   ft_printf("Hola, %s! Tienes %d mensajes.\n", "Loreto", 42);
   ```

3. **Generación de la librería:**
   ```c
   make
   ```

### Funcionalidades Implementadas

- `%c`: Imprime un carácter.
- `%s`: Imprime una cadena de texto.
- `%p`: Imprime un puntero en formato hexadecimal.
- `%d` y `%i`: Imprimen enteros con signo en base 10.
- `%u`: Imprime enteros sin signo en base 10.
- `%x` y `%X`: Imprimen números hexadecimales (minúsculas y mayúsculas).
- `%%`: Imprime el carácter `%`.

### Aclaración

Este proyecto sigue los estándares de la **Norma de 42**.
