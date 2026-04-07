# 🏆 Concurso #1

<details>
<summary>A. Cupcake Party</summary>

> ⏱ 1s · 💾 256 MB  
> *CCC 2022 Stage 1, Junior #1*

Estás planeando una fiesta de cupcakes para una clase de estudiantes. Una caja **regular** contiene 8 cupcakes, mientras que una caja **pequeña** contiene 3 cupcakes. Hay un total de 28 estudiantes en la clase.

Tu tarea es determinar cuántos cupcakes sobrarán si cada estudiante recibe exactamente un cupcake. Se garantiza que el total de cupcakes será al menos 28.

**Entrada:**
- Una línea con un entero $R$ ($0 \le R \le 10^6$): el número de cajas regulares.
- Una línea con un entero $S$ ($0 \le S \le 10^6$): el número de cajas pequeñas.

**Salida:**
- Un solo entero que represente la cantidad de cupcakes sobrantes.

**Ejemplos:**

| Input | Output | Nota |
|-------|--------|------|
| `2` <br> `5` | `3` | Total: $(2 \times 8) + (5 \times 3) = 31$. Sobran: $31 - 28 = 3$ |
| `2` <br> `4` | `0` | Total: $(2 \times 8) + (4 \times 3) = 28$. Sobran: $28 - 28 = 0$ |

</details>

<details>
<summary>B. Boiling Water</summary>

> ⏱ 1s · 💾 256 MB  
> *CCC 2021 Stage 1, Junior #1*

A nivel del mar, el agua hierve a 100°C y la presión es de 100 kPa. A medida que subes, la presión baja y el agua hierve a menor temperatura. Una fórmula simplificada que relaciona la presión atmosférica $P$ (en kPa) con la temperatura de ebullición $B$ (en °C) es:

$$P = 5 \times B - 400$$

Dada la temperatura $B$, debes determinar la presión $P$ y tu posición respecto al nivel del mar:
- **Arriba** del nivel del mar si $P < 100$.
- **En** el nivel del mar si $P = 100$.
- **Debajo** del nivel del mar si $P > 100$.

**Entrada:**
- Un entero $B$ ($80 \le B \le 200$): la temperatura en °C a la que el agua comienza a hervir.

**Salida:**
- Imprime dos líneas:
  1. La presión atmosférica $P$ en kPa.
  2. Un entero representando la posición: `1` (arriba), `0` (en el nivel) o `-1` (debajo).

**Ejemplos:**

| Input | Output | Nota |
|-------|--------|------|
| `99` | `95` <br> `1` | $P = 5 \times 99 - 400 = 95$. Como $95 < 100$, es arriba (1). |
| `102` | `110` <br> `-1` | $P = 5 \times 102 - 400 = 110$. Como $110 > 100$, es debajo (-1). |

</details>
