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
<details>
<summary>C. Conference Break</summary>

> ⏱ 1s · 💾 256 MB  
> *Concurso Provincial de Informática de Villa Clara: 2025, Problema A*

En una charla de divulgación científica, se debe realizar una pausa de duración fija de tal manera que la duración de la charla antes y después de dicha pausa sea lo más parecida posible.

Si es posible hacer que ambas partes sean exactamente iguales, hazlo. De lo contrario, la **primera parte** (antes de la pausa) debe ser más larga que la segunda, minimizando la diferencia entre ambas. 

La pausa debe caber dentro del tiempo total de la charla. Si la duración de la pausa es mayor o igual a la duración total de la charla, la pausa debe comenzar exactamente a la hora de inicio de la misma.

**Entrada:**
- La primera línea contiene un entero $A$ ($8 \le A \le 19$): la hora de inicio.
- La segunda línea contiene un entero $B$ ($0 \le B \le 59$): el minuto de inicio.
- La tercera línea contiene un entero $C$ ($8 \le C \le 19$): la hora de fin.
- La cuarta línea contiene un entero $D$ ($0 \le D \le 59$): el minuto de fin.
- La quinta línea contiene un entero $N$ ($1 \le N \le 360$): la duración de la pausa en minutos.

*Nota: Todas las horas están en formato de 24 horas y el fin siempre es estrictamente después del inicio.*

**Salida:**
- Dos enteros separados por un espacio: $h$ ($0 \le h \le 23$) y $m$ ($0 \le m \le 59$), que representan la hora y el minuto en que debe comenzar la pausa.

**Ejemplo:**

| Input | Output | Nota |
|-------|--------|------|
| `10` <br> `15` <br> `11` <br> `25` <br> `20` | `10 40` | Inicio 10:15, Fin 11:25 (70 min total). Pausa de 20 min deja 50 min de charla. Mitad = 25 min. Inicio pausa: 10:15 + 25 = 10:40. |

</details>
