# Respostas da dupla — Atividade PontoCerto

## Dupla

| Papel | Nome completo | Usuário do GitHub |
|---|---|---|
| Piloto | Lucas de Souza Rodrigues | lucasdeSrodrigues |
| Navegador | Artur Holanda Costa | ArturHolandaC |

## Explicação da solução

<!-- 3 a 5 linhas: como calculaPontos e as fábricas de campanhas eliminam a repetição de código? -->

## Desafio 2

<!-- Faz sentido usar uma lambda porque as regras dessas promoções são curtas e usadas apenas uma vez. Dessa forma, não é necessário criar uma função nomeada para cada promoção temporária, deixando o código mais direto e evitando funções desnecessárias. -->

## Desafio 3

A expressão `campanhaMultiplicadora 5` devolve uma função, e não um número. Essa nova função recebe uma quantidade de pontos e multiplica o valor por 5. O comando `:t campanhaMultiplicadora 5` confirma isso ao mostrar o tipo `Int -> Int`, indicando que o resultado recebe um inteiro e devolve outro inteiro.

## Desafio 4

**a)** As duas ordens apresentam resultados diferentes porque cada regra é aplicada sobre o resultado da regra anterior. Quando a Black Friday é aplicada primeiro, o valor é multiplicado por 5 e o bônus de 200 é somado depois, resultando em 950 pontos. Na ordem inversa, o bônus é somado antes e também acaba sendo multiplicado por 5, resultando em 1750 pontos.

**b)** O sistema deve aplicar primeiro a campanha `blackFriday` e depois a campanha `aniversarioCliente`. Dessa forma, apenas os pontos da compra são multiplicados, e o bônus de 200 pontos é adicionado no final, sem sofrer a multiplicação.

## Desafio 5 — revisão de código

| Erro | Função | O que estava errado | Como o GHC avisou (resumo da mensagem) | Como corrigimos |
|---|---|---|---|---|
| 1 | | | | |
| 2 | | | | |
| 3 | | | | |
| 4 | | | | |

## Desafio 6 — Haskell × C

<!-- Cite duas diferenças entre o calculaPontos em Haskell e o calculaPontos em C. -->

## Evidência de execução

Saída do `main` de `fidelidade.hs`:

```text
(cole aqui)
```

Saída do `main` de `revisao.hs` (depois de corrigido):

```text
(cole aqui)
```

Saída de `pontocerto.c`:

```text
(cole aqui)
```
