// main.c
#include <stdio.h>
#include <string.h>
#include "freefire.h"

int main() {
    Jogador j1;

    strcpy(j1.nome, "Player1");
    j1.vida = 200;
    j1.energia = 100;
    j1.x = 10;
    j1.y = 25;

    j1.inventario.numArmas = 1;
    strcpy(j1.inventario.armas[0].nome, "M4A1");
    j1.inventario.armas[0].dano = 30;
    j1.inventario.armas[0].alcance = 50;
    j1.inventario.armas[0].raridade = 2;

    printf("=== Dados do Jogador ===\n");
    printf("Nome: %s\n", j1.nome);
    printf("Vida: %d\n", j1.vida);
    printf("Energia: %d\n", j1.energia);
    printf("Posição: (%d, %d)\n", j1.x, j1.y);

    printf("\n=== Inventário ===\n");
    printf("Arma: %s (Dano: %d, Alcance: %d, Raridade: %d)\n",
           j1.inventario.armas[0].nome,
           j1.inventario.armas[0].dano,
           j1.inventario.armas[0].alcance,
           j1.inventario.armas[0].raridade);

    return 0;
}
