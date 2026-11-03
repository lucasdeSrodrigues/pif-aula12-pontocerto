/* =====================================================
 * PIF - Aula 12 | Desafio 6: o modulo legado em C
 * Compilar e rodar: cc pontocerto.c -o pontocerto && ./pontocerto
 * Sem compilador C: https://www.onlinegdb.com (escolha a linguagem C)
 * ===================================================== */
#include <stdio.h>

/* Regra que dobra os pontos. */
int pontosEmDobro(int p) {
    return p * 2;
}

/* Regra que adiciona 50 pontos. */
int bonus50(int p) {
    return p + 50;
}

/* Recebe uma regra e aplica essa regra ao valor. */
int calculaPontos(int (*regra)(int), int valor) {
    return regra(valor);
}

/* Aplica a primeira regra e depois a segunda. */
int acumula(int (*primeiraRegra)(int),
            int (*segundaRegra)(int),
            int valor) {
    return segundaRegra(primeiraRegra(valor));
}

int main(void) {
    /* Descomente cada linha conforme implementar. */
    printf("%d\n", calculaPontos(pontosEmDobro, 80));
    printf("%d\n", calculaPontos(bonus50, 80));
    printf("%d\n", acumula(pontosEmDobro, bonus50, 100));
    printf("%d\n", acumula(bonus50, pontosEmDobro, 100));
    return 0;
}
