# 📝 Práctica #2

<details>
<summary>A. Divisor of 2048</summary>

> ⏱ 1s · 💾 256 MB  

Dado un número entero positivo $n$, tu tarea es determinar si $n$ es un divisor de 2048.

Si $n$ divide a 2048 (es decir, existe un entero $k$ tal que $n \times k = 2048$), imprime `1`. De lo contrario, imprime `0`.

**Entrada:**
- La única línea de entrada contiene un entero $n$ ($0 \le n \le 2048$).

**Salida:**
- Imprime un solo entero: `1` si $n$ es divisor de 2048; de lo contrario, `0`.

**Ejemplos:**

| Input | Output | Nota |
|-------|--------|------|
| `1024` | `1` | $1024 \times 2 = 2048$, por lo tanto es divisor. |
| `3` | `0` | 3 no divide a 2048 de forma exacta. |

</details>
<details>
<summary>B. Power of Two</summary>

> ⏱ 1s · 💾 256 MB  

Dado un entero $n$, tu tarea es determinar si $n$ es una **potencia de dos**.

*Un entero es una potencia de dos si se puede escribir como $2^k$ para algún entero $k \ge 0$.*

**Entrada:**
- La única línea de entrada contiene un solo entero $n$ ($1 \le n \le 10^{15}$).

**Salida:**
- Imprime un solo entero: `1` si $n$ es una potencia de dos; de lo contrario, `0`.

**Ejemplos:**

| Input | Output | Nota |
|-------|--------|------|
| `1` | `1` | $2^0 = 1$ |
| `6` | `0` | No existe un entero $k$ tal que $2^k = 6$. |
| `1024` | `1` | $2^{10} = 1024$ |

</details>
<details>
<summary>C. Rectangle in Circle</summary>

> ⏱ 1s · 💾 256 MB  

Se te da un rectángulo con lados de longitud $a$ y $b$, y un círculo con radio $r$. Tu tarea es determinar si el rectángulo puede colocarse completamente dentro del círculo.

**Entrada:**
- La única línea contiene tres enteros $a, b$ y $r$ ($1 \le a, b, r \le 10^9$): las longitudes de los lados del rectángulo y el radio del círculo, respectivamente.

**Salida:**
- Imprime `YES` si el rectángulo cabe dentro del círculo; de lo contrario, imprime `NO`.

**Ejemplos:**

| Input | Output | Nota |
|-------|--------|------|
| `3 4 3` | `YES` | Un rectángulo de 3x4 cabe en un círculo de radio 3. |
| `5 12 6` | `NO` | Un rectángulo de 5x12 no cabe en un círculo de radio 6. |

</details>
<details>
<summary>D. Calculator</summary>

> ⏱ 1s · 💾 256 MB  

Dados dos enteros $a$ y $b$, y un operador aritmético $OP$ entre ellos, tu tarea es calcular el resultado de la expresión $a \text{ } OP \text{ } b$.

El operador aritmético puede ser uno de los siguientes:
- Suma: `+`
- Resta: `-`
- Multiplicación: `*`
- División entera: `/` (el resultado es el cociente descartando el residuo).

**Entrada:**
- La única línea contiene un entero $a$, un carácter $OP$ y un entero $b$ ($|a|, |b| \le 10^9$, $OP \in \{+, -, *, /\}$).
- Se garantiza que si el operador es `/`, entonces $b \neq 0$.

**Salida:**
- Imprime un solo entero: el resultado de la operación.

**Ejemplos:**

| Input | Output | Nota |
|-------|--------|------|
| `3 + 7` | `10` | $3 + 7 = 10$ |
| `10 - 20` | `-10` | $10 - 20 = -10$ |
| `6 * 7` | `42` | $6 \times 7 = 42$ |
| `20 / 3` | `6` | $20 \div 3 = 6.66... \rightarrow 6$ |

</details>
<details>
<summary>E. Check Between Numbers</summary>

> ⏱ 1s · 💾 256 MB  

Dados tres enteros $a$, $b$ y $n$, tu tarea es determinar si el número $n$ se encuentra entre $a$ y $b$ (inclusive), sin importar el orden de estos últimos. 

Es decir, debes verificar si $n$ satisface la condición: $\min(a, b) \le n \le \max(a, b)$.

**Entrada:**
- La única línea de entrada contiene tres enteros $a, b$ y $n$ ($|a|, |b|, |n| \le 10^9$).

**Salida:**
- Imprime `YES` si $n$ está entre $a$ y $b$ (inclusive); de lo contrario, imprime `NO`.

**Ejemplos:**

| Input | Output | Nota |
|-------|--------|------|
| `2 5 3` | `YES` | 3 está en el rango [2, 5]. |
| `10 5 11` | `NO` | 11 no está en el rango [5, 10]. |
| `-3 -7 -5` | `YES` | -5 está en el rango [-7, -3]. |

</details>
<details>
<summary>F. Shelf and Door</summary>

> ⏱ 1s · 💾 256 MB  

Tienes un estante rectangular con dimensiones $a \times b \times c$. También tienes una puerta rectangular con dimensiones $x \times y$.

El estante se puede rotar en cualquier orientación y puedes intentar pasarlo a través de la puerta usando cualquiera de sus caras. Tu tarea es determinar si el estante puede pasar a través de la puerta.

**Entrada:**
- La primera línea contiene tres enteros $a, b$ y $c$ ($1 \le a, b, c \le 1000$): las dimensiones del estante.
- La segunda línea contiene dos enteros $x$ y $y$ ($1 \le x, y \le 1000$): las dimensiones de la puerta.

**Salida:**
- Imprime `YES` si el estante puede pasar a través de la puerta; de lo contrario, imprime `NO`.

**Ejemplos:**

| Input | Output | Nota |
|-------|--------|------|
| `2 3 4` <br> `3 4` | `YES` | La cara de 3x4 del estante cabe exactamente en la puerta de 3x4. |
| `5 6 7` <br> `4 4` | `NO` | Ninguna de las caras (5x6, 5x7, 6x7) cabe en una puerta de 4x4. |
| `10 2 3` <br> `3 10` | `YES` | La cara de 2x3 del estante cabe en la puerta de 3x10. |

</details>
<details>
<summary>G. Divisible by Two or Three</summary>

> ⏱ 1s · 💾 256 MB  

Dado un entero $n$, tu tarea es determinar si $n$ es divisible por **2** o por **3**, pero **no por ambos** al mismo tiempo.

**Entrada:**
- La única línea de entrada contiene un solo entero $n$ ($1 \le n \le 10^9$).

**Salida:**
- Imprime `YES` si $n$ es divisible por 2 o por 3, pero no por ambos; de lo contrario, imprime `NO`.

**Ejemplos:**

| Input | Output | Nota |
|-------|--------|------|
| `6` | `NO` | 6 es divisible por 2 y por 3 simultáneamente. |
| `9` | `YES` | 9 es divisible por 3, pero no por 2. |
| `8` | `YES` | 8 es divisible por 2, pero no por 3. |

</details>
<details>
<summary>H. Lamp State</summary>

> ⏱ 1s · 💾 256 MB  

Tienes una lámpara que tiene dos estados: `ON` (encendida) o `OFF` (apagada). Inicialmente, la lámpara está **ON**. Hay exactamente cinco botones, cada uno de los cuales puede presionarse como máximo una vez.

Cada vez que se presiona un botón, la lámpara cambia su estado:
- Si la lámpara está `ON`, pasa a `OFF`.
- Si la lámpara está `OFF`, pasa a `ON`.

Dados cinco enteros $b_1, b_2, b_3, b_4, b_5$ que representan si cada botón fue presionado ($1$) o no ($0$), determina el estado final de la lámpara.

**Entrada:**
- La única línea contiene cinco enteros $b_i$ ($0 \le b_i \le 1$): el estado de cada botón.

**Salida:**
- Imprime `ON` o `OFF` dependiendo del estado final de la lámpara.

**Ejemplos:**

| Input | Output | Nota |
|-------|--------|------|
| `0 0 0 1 0` | `OFF` | Solo se presionó un botón. ON $\rightarrow$ OFF. |
| `1 0 0 1 0` | `ON` | Se presionaron dos botones. ON $\rightarrow$ OFF $\rightarrow$ ON. |

</details>
<details>
<summary>I. Triangle Classification</summary>

> ⏱ 1s · 💾 256 MB  

Dados tres enteros positivos $a$, $b$ y $c$ que representan las longitudes de tres segmentos de recta, tu tarea es determinar si es posible construir un triángulo válido con ellos.

Si se puede formar un triángulo, clasifícalo en una de las siguientes categorías:
- **Equilateral**: los tres lados son iguales.
- **Isosceles**: exactamente dos lados son iguales.
- **Scalene**: todos los lados son diferentes.

Si los tres segmentos no pueden formar un triángulo válido, imprime `Invalid`.

**Entrada:**
- La entrada consiste en tres enteros $a, b$ y $c$ ($1 \le a, b, c \le 10^9$): las longitudes de los segmentos.

**Salida:**
- Imprime una sola palabra describiendo el resultado: `Equilateral`, `Isosceles`, `Scalene` o `Invalid`.

**Ejemplos:**

| Input | Output | Nota |
|-------|--------|------|
| `3 3 3` | `Equilateral` | Los tres lados son iguales. |
| `5 5 7` | `Isosceles` | Dos lados son iguales (5 y 5). |
| `1 2 3` | `Invalid` | No cumple la desigualdad triangular ($1+2 \ngtr 3$). |

</details>
<details>
<summary>J. Last Digit of Factorial</summary>

> ⏱ 1s · 💾 256 MB  

Dado un entero no negativo $n$, tu tarea es calcular el **último dígito decimal** de $n!$ (el factorial de $n$), donde:

- $0! = 1$
- $n! = 1 \cdot 2 \cdot 3 \cdot \dots \cdot n$

Ten en cuenta que el factorial crece muy rápido. Por ejemplo:
- $3! = 6$, el último dígito es $6$.
- $5! = 120$, el último dígito es $0$.
- $7! = 5040$, el último dígito es $0$.

Debes encontrar el último dígito de manera eficiente, incluso cuando $n$ es muy grande.

**Entrada:**
- La única línea contiene un solo entero $n$ ($0 \le n \le 10^9$).

**Salida:**
- Imprime un solo entero: el último dígito decimal de $n!$.

**Ejemplos:**

| Input | Output | Nota |
|-------|--------|------|
| `3` | `6` | $3! = 6$ |
| `5` | `0` | $5! = 120$ |
| `0` | `1` | Por definición, $0! = 1$ |

</details>
<details>
<summary>K. Palindrome Number</summary>

> ⏱ 1s · 💾 256 MB  

Un **número palíndromo** es un número que se lee igual de izquierda a derecha que de derecha a izquierda. Por ejemplo, `1`, `12321`, `434` y `90709` son palíndromos, mientras que `54321` no lo es.

Se te da un entero positivo que consiste de **exactamente cinco dígitos**. Tu tarea es determinar si este número es un palíndromo o no.

**Entrada:**
- La única línea de entrada contiene un solo entero $n$ ($10000 \le n \le 99999$).

**Salida:**
- Imprime `YES` si $n$ es un palíndromo; de lo contrario, imprime `NO`.

**Ejemplos:**

| Input | Output | Nota |
|-------|--------|------|
| `12321` | `YES` | El número se lee igual en ambos sentidos. |
| `54321` | `NO` | Al revés es 12345, no es igual. |
| `90709` | `YES` | El número se lee igual en ambos sentidos. |

</details>
<details>
<summary>L. Triangle Classification II</summary>

> ⏱ 1s · 💾 256 MB  

Dados tres enteros $a$, $b$ y $c$, que representan los ángulos (en grados) de un triángulo, tu tarea es clasificar el triángulo según sus ángulos:

- **Acute** (Acutángulo): Si los tres ángulos son estrictamente menores a 90 grados.
- **Right** (Rectángulo): Si uno de los ángulos es exactamente igual a 90 grados.
- **Obtuse** (Obtusángulo): Si uno de los ángulos es estrictamente mayor a 90 grados.

**Entrada:**
- La única línea contiene tres enteros $a, b$ y $c$ ($1 \le a, b, c$; $a + b + c = 180$): los ángulos del triángulo.

**Salida:**
- Imprime exactamente una palabra: `Acute`, `Right` u `Obtuse`.

**Ejemplos:**

| Input | Output | Nota |
|-------|--------|------|
| `77 75 28` | `Acute` | Todos los ángulos son < 90. |
| `43 13 124` | `Obtuse` | 124 es mayor a 90. |
| `90 45 45` | `Right` | Tiene un ángulo de 90. |

</details>
<details>
<summary>M. Circumferences Intersection</summary>

> ⏱ 1s · 💾 256 MB  

Se te dan dos circunferencias en el plano, cada una definida por las coordenadas de su centro y su radio. Tu tarea es determinar el número de puntos que pertenecen a ambas circunferencias simultáneamente.

Las posibles respuestas son:
- `0`: Si las circunferencias no se intersectan.
- `1`: Si las circunferencias son tangentes (interna o externamente).
- `2`: Si las circunferencias se intersectan en exactamente dos puntos.
- `Infinity`: Si las circunferencias coinciden completamente.

**Entrada:**
- La única línea de entrada contiene seis enteros $x_1, y_1, r_1, x_2, y_2, r_2$ ($|x_1|, |y_1|, |x_2|, |y_2| \le 10^4, 1 \le r_1, r_2 \le 10^4$).
- $(x_1, y_1)$ es el centro de la primera circunferencia con radio $r_1$.
- $(x_2, y_2)$ es el centro de la segunda circunferencia con radio $r_2$.

**Salida:**
- Imprime la respuesta correspondiente al número de intersecciones (`0`, `1`, `2` o `Infinity`).

**Ejemplos:**

| Input | Output | Nota |
|-------|--------|------|
| `-8792 8208 6993 -2291 -970 4371` | `2` | Las circunferencias se cruzan en dos puntos. |
| `8724 5116 2846 -1720 -4181 7998` | `0` | Las circunferencias están demasiado lejos para tocarse. |

</details>
