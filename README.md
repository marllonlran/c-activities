# C Activities

A collection of small C programming exercises. Each program is a single `.c` file you can compile and run on its own.

> The programs' prompts and messages are in Portuguese.

## Programs

### `cofrinho.c` — Piggy Bank

A menu-driven piggy bank. Each choice adds a coin to the running total, and the program keeps asking until you choose `0`.

| Option | Action             |
|--------|--------------------|
| `1`    | Add R$0.50         |
| `2`    | Add R$1.00         |
| `3`    | Add R$2.00         |
| `0`    | Stop and show total |

Any other option prints an "invalid option" message and shows the menu again.

**Concepts:** `do...while` loop, `if / else if`, accumulators, `scanf` input.

### `consumo-agua.c` — Water Consumption

Asks for the water consumption (in m³) of 5 residences. For each one it says whether the consumption is **within the average** (≤ 20 m³) or **above the average** (> 20 m³). It then prints the overall average of the 5 residences.

**Concepts:** `for` loop, conditionals, sum and average calculation.

## How to compile and run

You need a C compiler such as [GCC](https://gcc.gnu.org/) (on Windows you can use [MinGW-w64](https://www.mingw-w64.org/) or MSYS2).

```bash
# Piggy bank
gcc cofrinho.c -o cofrinho
./cofrinho

# Water consumption
gcc consumo-agua.c -o consumo-agua
./consumo-agua
```

On Windows, run the executables as `cofrinho.exe` and `consumo-agua.exe`.

> **Tip:** If accented characters (á, ç, ã) look wrong in the Windows terminal, run `chcp 65001` first to switch the console to UTF-8.

## Example

```
--- Cofrinho ---
1 - Adicionar R$0.50
2 - Adicionar R$1.00
3 - Adicionar R$2.00
0 - Parar
Escolha uma opção: 2
...
Escolha uma opção: 0

Total economizado: R$1.00
```

## Author

**Marllon Lorran** — [@marllonlran](https://github.com/marllonlran)
