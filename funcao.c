#include <stdio.h>
#include <stdlib.h>
#include "funcao.h"

void imprimir_muni(muni *municipios){
	for(int i = 0; i<5570; i++){
		printf("%d, %s, %f, %f, %d, %d, %s, %d, %s, %s, %s\n", municipios[i].cod_ibge, municipios[i].nome, municipios[i].coord[0], municipios[i].coord[1], 
			municipios[i].capital, municipios[i].codigo_uf, municipios[i].siafi_id, municipios[i].ddd,
			municipios[i].fuso_horario, municipios[i].regiao, municipios[i].uf);
	}
}

void inserir_muni(tnode_muni **node, treg *new_reg, int nivel){
	int index = nivel%2;
	tnode_muni **ppnode;
	tnode_muni *pnode;
	ppnode = node;
	pnode = *ppnode;

	while(pnode != NULL){
		
	}
}
