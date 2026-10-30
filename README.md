# Atividades em C

Uma coleção de pequenos exercícios de programação em C. Cada programa é um único arquivo `.c` que pode ser compilado e executado de forma independente.

## Programas

### `cofrinho.c` — Cofrinho

Um cofrinho com menu de opções. Cada escolha adiciona uma moeda ao total acumulado, e o programa continua perguntando até você escolher `0`.

| Opção | Ação                       |
|-------|----------------------------|
| `1`   | Adicionar R$0,50           |
| `2`   | Adicionar R$1,00           |
| `3`   | Adicionar R$2,00           |
| `0`   | Parar e mostrar o total    |

Qualquer outra opção exibe a mensagem de "opção inválida" e mostra o menu novamente.

**Conceitos:** laço `do...while`, `if / else if`, acumuladores, entrada com `scanf`.

### `consumo-agua.c` — Consumo de Água

Pede o consumo de água (em m³) de 5 residências. Para cada uma, informa se o consumo está **dentro da média** (≤ 20 m³) ou **acima da média** (> 20 m³). Em seguida, exibe a média geral das 5 residências.

**Conceitos:** laço `for`, condicionais, cálculo de soma e média.

### `avaliacao-loja.c` — Avaliação da Loja

Pede a nota (de 0 a 10) dada por cada um de 10 clientes. Em seguida, exibe a **média das notas**. Se a média for **menor que 7**, mostra um alerta. Caso contrário, informa que a média é boa (7 ou mais).

**Conceitos:** laço `for`, variáveis `float`, cálculo de soma e média, `if / else`.

### `passos-app.c` — Contador de Passos

Simula um aplicativo de passos com meta diária de **10.000 passos**. A cada hora, o programa pergunta quantos passos você deu e vai somando até atingir a meta. No final, mostra o total de passos e quantas horas foram necessárias.

**Conceitos:** laço `while`, contadores, acumuladores, entrada com `scanf`.

## Como compilar e executar

Você precisa de um compilador C, como o [GCC](https://gcc.gnu.org/) (no Windows, você pode usar o [MinGW-w64](https://www.mingw-w64.org/) ou o MSYS2).

```bash
# Cofrinho
gcc cofrinho.c -o cofrinho
./cofrinho

# Consumo de água
gcc consumo-agua.c -o consumo-agua
./consumo-agua

# Avaliação da loja
gcc avaliacao-loja.c -o avaliacao-loja
./avaliacao-loja

# Contador de passos
gcc passos-app.c -o passos-app
./passos-app
```

No Windows, execute os programas como `cofrinho.exe`, `consumo-agua.exe`, `avaliacao-loja.exe` e `passos-app.exe`.

> **Dica:** se os caracteres acentuados (á, ç, ã) aparecerem errados no terminal do Windows, execute `chcp 65001` antes para mudar o console para UTF-8.

## Exemplo

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

## Autor

**Marllon Lorran** — [@marllonlran](https://github.com/marllonlran)
