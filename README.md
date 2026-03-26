# 🐱 Codeforces Solutions

Mis soluciones para los problemas de Codeforces. ✨

---

## 📚 CPC — Primeros Pasos

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
