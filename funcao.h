#ifndef _VIZINHO_
#define  _VIZINHO_

#define MAX 27

typedef struct municipios{
    int cod_ibge;
    char nome[MAX];
    double coord[2];
    int capital;
    int codigo_uf;
    char siafi_id[5];
    int ddd;
    char fuso_horario[MAX];
    char regiao[15];
    char uf[3];
}muni;

typedef void treg;

typedef struct node_municipio{
    treg *reg;
    struct node *dir;
    struct node *esq;
}tnode_muni;

void imprimir_muni(muni *municipios);

void inserir_muni(tnode_muni **node, treg *reg, int nivel);

#endif