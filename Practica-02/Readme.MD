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
