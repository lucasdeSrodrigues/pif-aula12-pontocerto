# Respostas da dupla — Atividade PontoCerto

## Dupla

| Papel | Nome completo | Usuário do GitHub |
|---|---|---|
| Piloto | Lucas de Souza Rodrigues | lucasdeSrodrigues |
| Navegador | Artur Holanda Costa | ArturHolandaC |

## Explicação da solução

As regras das campanhas foram representadas como funções, permitindo que calculaPontos receba diferentes regras e aplique cada uma ao valor da compra. As fábricas recebem um número e devolvem uma nova função, evitando a criação de uma função separada para cada multiplicador ou bônus. Assim, o código pode ser reutilizado em várias campanhas, reduzindo a repetição.

## Desafio 2

Faz sentido usar uma lambda porque as regras dessas promoções são curtas e usadas apenas uma vez. Dessa forma, não é necessário criar uma função nomeada para cada promoção temporária, deixando o código mais direto e evitando funções desnecessárias.

## Desafio 3

A expressão `campanhaMultiplicadora 5` devolve uma função, e não um número. Essa nova função recebe uma quantidade de pontos e multiplica o valor por 5. O comando `:t campanhaMultiplicadora 5` confirma isso ao mostrar o tipo `Int -> Int`, indicando que o resultado recebe um inteiro e devolve outro inteiro.

## Desafio 4

**a)** As duas ordens apresentam resultados diferentes porque cada regra é aplicada sobre o resultado da regra anterior. Quando a Black Friday é aplicada primeiro, o valor é multiplicado por 5 e o bônus de 200 é somado depois, resultando em 950 pontos. Na ordem inversa, o bônus é somado antes e também acaba sendo multiplicado por 5, resultando em 1750 pontos.

**b)** O sistema deve aplicar primeiro a campanha `blackFriday` e depois a campanha `aniversarioCliente`. Dessa forma, apenas os pontos da compra são multiplicados, e o bônus de 200 pontos é adicionado no final, sem sofrer a multiplicação.

## Desafio 5 — revisão de código

| Erro | Função | O que estava errado | Como o GHC avisou (resumo da mensagem) | Como corrigimos |
|---|---|---|---|---|
| 1 | `aplicaRegraDuasVezes` | A assinatura indicava que o primeiro argumento era um `Int`, mas a função recebe uma regra do tipo `Int -> Int`. | O GHC indicou que um número estava sendo usado como se fosse uma função. | Alteramos a assinatura para `(Int -> Int) -> Int -> Int`. |
| 2 | `fimDeSemana` | A lambda utilizava `=>` no lugar de `->`. | O GHC apresentou um erro de sintaxe na seta da lambda. | Substituímos `=>` por `->`. |
| 3 | `natal` | A função `campanhaBonus` foi atribuída sem informar o valor do bônus. | O GHC indicou que os tipos não correspondiam, pois ainda faltava um argumento. | Aplicamos a fábrica ao valor 300, usando `campanhaBonus 300`. |
| 4 | `promocaoAtual` | `pontosEmDobro` foi aplicada ao valor 100, produzindo um número em vez de guardar a função. | O GHC indicou que era esperado `Int -> Int`, mas foi encontrado `Int`. | Atribuímos diretamente `pontosEmDobro`, sem aplicar a função ao valor 100. |


## Desafio 6 — Haskell × C

Em Haskell, uma função pode ser recebida diretamente como argumento, e isso é representado na assinatura por `(Int -> Int)`. Em C, é necessário declarar explicitamente um ponteiro para função, usando `int (*regra)(int)`. Outra diferença é que Haskell utiliza assinaturas de tipo mais simples e faz a verificação dos tipos, enquanto em C precisamos informar manualmente os tipos do retorno e dos parâmetros.

## Evidência de execução

Saída do `main` de `fidelidade.hs`:

```text
--- Desafio 1 ---
120
240
170
240
--- Desafio 2 ---
80
160
130
240
170
--- Desafio 3 ---
750
350
100
55
--- Desafio 4 ---
950
1750
280
```

Saída do `main` de `revisao.hs` (depois de corrigido):

```text
40
100
400
200
```

Saída de `pontocerto.c`:

```text
(cole aqui)
```
