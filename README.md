# 🐱 Codeforces Solutions

Mis soluciones para los problemas de Codeforces. ✨

---

## 📚 CPC — Primeros Pasos
### 📝 Práctica #1

<details>
<summary>A. Hello, CPC!</summary>

> ⏱ 1s · 💾 256 MB

Imprime exactamente la frase `Hello, CPC!` en la salida estándar.

**Entrada:** ninguna.  
**Salida:** una sola línea con `Hello, CPC!`

**Ejemplo**
```
Output
Hello, CPC!
```

</details>



<details>
<summary>B. Basic Operations</summary>

> ⏱ 1s · 💾 256 MB

Dados dos enteros `a` y `b`, calcula y muestra **siete operaciones** en orden:

| # | Operación | Ejemplo (`a=10, b=4`) |
|---|-----------|----------------------|
| 1 | Suma | `14` |
| 2 | Resta | `6` |
| 3 | División entera (floor) | `2` |
| 4 | Módulo (resto) | `2` |
| 5 | Multiplicación | `40` |
| 6 | División flotante (6 decimales) | `2.500000` |
| 7 | División entera (ceil) | `3` |

**Restricciones:** `|a|, |b| ≤ 2·10⁹`, `b ≠ 0`

**Subtareas:**
- Subtarea 1 (30 pts): `1 ≤ a, b ≤ 2·10⁴`
- Subtarea 2 (30 pts): `|a|, |b| ≤ 2·10⁴`
- Subtarea 3 (40 pts): sin restricciones adicionales

**Ejemplos**
```
Input: 10  4  →  14 / 6 / 2 / 2 / 40 / 2.500000 / 3
Input: 10 -4  →   6 / 14 / -3 / -2 / -40 / -2.500000 / -2
```

</details>



<details>
<summary>C. Grade Value</summary>

> ⏱ 1s · 💾 256 MB

Dado un carácter que representa una nota, imprime su valor numérico.

| Nota | Valor |
|------|-------|
| A | 4 |
| B | 3 |
| C | 2 |
| D | 1 |
| F | 0 |

**Restricciones:** `g ∈ {A, B, C, D, F}`

**Ejemplos**
```
Input: A  →  Output: 4
Input: F  →  Output: 0
```

</details>



<details>
<summary>D. Real Number Operations</summary>

> ⏱ 1s · 💾 256 MB

Dado un número real `x` con exactamente dos decimales, calcula y muestra **cinco valores** en orden:

| # | Operación | Notas |
|---|-----------|-------|
| 1 | Valor absoluto | 2 decimales |
| 2 | Raíz cuadrada de `\|x\|` | Truncada a 2 decimales (sin redondear) |
| 3 | Floor de `x` | |
| 4 | Ceil de `x` | |
| 5 | Redondeado al entero más cercano | |

**Restricciones:** `|x| ≤ 10¹⁸`

**Subtareas:**
- Subtarea 1 (40 pts): `1 ≤ x ≤ 10⁴`
- Subtarea 2 (60 pts): sin restricciones adicionales

**Ejemplos**
```
Input: 17.00  →  17.00 / 4.12 / 17 / 17 / 17
Input:  5.50  →   5.50 / 2.34 /  5 /  6 /  6
Input:  4.40  →   4.40 / 2.09 /  4 /  5 /  4
Input:  4.90  →   4.90 / 2.21 /  4 /  5 /  5
Input: -5.00  →   5.00 / 2.23 / -5 / -5 / -5
```


</details>

<details>
<summary>E. Deliv-e-droid</summary>

> ⏱ 1s · 💾 256 MB

Dado el número de paquetes entregados y colisiones, calcula el puntaje final:

| Evento | Puntos |
|--------|--------|
| Paquete entregado | `+50` |
| Colisión con obstáculo | `-10` |
| Bonus (entregas > colisiones) | `+500` |

**Restricciones:** `0 ≤ d, c ≤ 10⁶`

**Ejemplos**
```
Input: d=5, c=2  →  730   (5×50 - 2×10 + 500)
Input: d=0, c=10 →  -100  (0 - 10×10, sin bonus)
```

</details>



<details>
<summary>F. Manhattan vs Euclidean</summary>

> ⏱ 1s · 💾 256 MB

Dados dos puntos `(x1, y1)` y `(x2, y2)`, calcula ambas distancias:

| Distancia | Fórmula |
|-----------|---------|
| Manhattan | `\|x1−x2\| + \|y1−y2\|` |
| Euclidiana | `√((x1−x2)² + (y1−y2)²)` |

**Restricciones:** `-10⁹ ≤ x1, y1, x2, y2 ≤ 10⁹` · Error permitido: `10⁻⁶`

**Ejemplo**
```
Input: 0 0 3 4  →  7 / 5.0000000000
```

</details>


<details>
<summary>G. Count Divisibles (Easy version)</summary>

> ⏱ 1s · 💾 256 MB

Dado un entero `n`, cuenta cuántos enteros del `1` al `n` son divisibles por `2`.

**Restricciones:** `1 ≤ n ≤ 10¹⁸`

**Ejemplos**
```
Input: 10  →  5
Input:  7  →  3
```



</details>

<details>
<summary>I. Alternating Circular Lock</summary>

> ⏱ 1s · 💾 256 MB

Tienes un candado circular con `m` posiciones ($0$ a $m-1$) en sentido horario. Partiendo de una posición inicial `n`, debes realizar cinco movimientos que alternan su dirección.

| Movimiento | Dirección |
|------------|-----------|
| 1, 3, 5    | Horario (Clockwise) |
| 2, 4       | Anti-horario (Counter-clockwise) |

**Entrada:**
- El entero `m` (posiciones totales).
- El entero `n` (posición inicial).
- Cinco enteros $k_1, k_2, k_3, k_4, k_5$ (pasos de cada movimiento).

**Salida:** Cinco enteros separados por espacios que representen la posición resultante tras cada uno de los cinco movimientos.

**Restricciones:** `2 ≤ m ≤ 10⁹`, `0 ≤ n < m`, `0 ≤ kᵢ < 10⁹`

**Ejemplo**
Input:
10
3
4 1 2 7 3

Output: 7 6 8 1 4


</details>
<details>
<summary>M. Sort Three Numbers</summary>

> ⏱ 1s · 💾 256 MB

Dados tres enteros `x`, `y`, `z`, imprimirlos en orden no decreciente separados por espacios.

**Restricciones:** `-10⁹ ≤ x, y, z ≤ 10⁹`

**Ejemplos**
```
Input:  3  1  2  →  1 2 3
Input: -5 -5  0  →  -5 -5 0
```

</details>

<details>
<summary>N. Digital Root</summary>

> ⏱ 1s · 💾 256 MB

La **raíz digital** de un número se obtiene sumando todos sus dígitos; si el resultado tiene más de un dígito, el proceso se repite hasta que quede un solo dígito.

**Ejemplo:**
`9875` → $9+8+7+5 = 29$ → $2+9 = 11$ → $1+1 = 2$ (resultado final).

**Entrada:** Un entero `n`.  
**Salida:** Un solo dígito entre `1` y `9`.

**Restricciones:** `1 ≤ n ≤ 10¹⁸`

**Subtareas:**
- Subtarea 1 (40 pts): `1 ≤ n ≤ 10⁴`
- Subtarea 2 (60 pts): sin restricciones adicionales

**Ejemplo**
Input: 9875  →  Output: 2


</details>
