# Jesse and Cookies

## Autor

- Nombre: Jhoimar Silva Torres
- Curso: Análisis y Diseño de Algoritmos I (ADA I)

## Descripción

Este programa resuelve el problema **Jesse and Cookies** de HackerRank.

El objetivo es determinar el número mínimo de operaciones necesarias para que todas las galletas alcancen una dulzura mayor o igual a un valor **k**.

En cada operación se seleccionan las dos galletas con menor dulzura y se combinan utilizando la siguiente fórmula:

```
Nueva dulzura = Menor + 2 × Segunda menor
```

Si no es posible alcanzar el valor mínimo de dulzura, el programa retorna **-1**.

La solución utiliza una **cola de prioridad mínima (Min Heap)** para obtener de forma eficiente las dos galletas menos dulces en cada iteración.

---

## Tecnologías utilizadas

- C++
- Visual Studio Code
- Compilador g++

---

## Cómo compilar

Abrir una terminal en la carpeta del proyecto y ejecutar:

```bash
g++ main.cpp -o JesseAndCookies
```

---

## Cómo ejecutar

### Windows

```bash
.\JesseAndCookies.exe
```

## Ejemplo de entrada

```
6 7
1 2 3 9 10 12
```

## Salida esperada

```
2
```

## Enlace del ejercicio

https://www.hackerrank.com/challenges/jesse-and-cookies/problem?isFullScreen=true