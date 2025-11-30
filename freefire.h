// freefire.h
#ifndef FREEFIRE_H
#define FREEFIRE_H

#define MAX_NOME 50
#define MAX_ITENS 20
#define MAX_JOGADORES 50

typedef struct {
    char nome[MAX_NOME];
    int dano;
    int alcance;
    int raridade;  // 1 = comum, 2 = raro, 3 = épico, 4 = lendário
} Arma;

typedef struct {
    char nome[MAX_NOME];
    int vidaExtra;
    int durabilidade;
} Colete;

typedef struct {
    char nome[MAX_NOME];
    int cura;
} KitMedico;

typedef struct {
    Arma armas[MAX_ITENS];
    int numArmas;

    Colete coletes[MAX_ITENS];
    int numColetes;

    KitMedico kits[MAX_ITENS];
    int numKits;
} Inventario;

typedef struct {
    char nome[MAX_NOME];
    int vida;
    int energia;
    int x, y; // posição no mapa
    Inventario inventario;
} Jogador;

#endif
