#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcao.h"

int main(){
	muni municipios[5570];
	FILE *arq;

	arq = fopen("municipios.csv","r");

	if(arq == NULL){
		printf("Erro ao abrir o arquivo.");
		exit(1);
	}
	else{
		for(int i = 0; i<5570; i++){
			fscanf(arq, "%d, %[^,],%lf,%lf,%d,%d, %[^,],%d, %[^\n]", 
			&municipios[i].cod_ibge, municipios[i].nome, &municipios[i].coord[0], &municipios[i].coord[1], 
			&municipios[i].capital, &municipios[i].codigo_uf, municipios[i].siafi_id, &municipios[i].ddd,
			municipios[i].fuso_horario);

			if(municipios[i].codigo_uf == 11){
				strcpy(municipios[i].uf,"RO");
				strcpy(municipios[i].regiao,"Norte");
			}
			else if(municipios[i].codigo_uf == 12){
				strcpy(municipios[i].uf,"AC");
				strcpy(municipios[i].regiao,"Norte");
			}
			else if(municipios[i].codigo_uf == 13){
				strcpy(municipios[i].uf,"AM");
				strcpy(municipios[i].regiao,"Norte");
			}
			else if(municipios[i].codigo_uf == 14){
				strcpy(municipios[i].uf,"RR");
				strcpy(municipios[i].regiao,"Norte");
			}
			else if(municipios[i].codigo_uf == 15){
				strcpy(municipios[i].uf,"PA");
				strcpy(municipios[i].regiao,"Norte");
			}
			else if(municipios[i].codigo_uf == 16){
				strcpy(municipios[i].uf,"AP");
				strcpy(municipios[i].regiao,"Norte");
			}
			else if(municipios[i].codigo_uf == 17){
				strcpy(municipios[i].uf,"TO");
				strcpy(municipios[i].regiao,"Norte");
			}
			else if(municipios[i].codigo_uf == 21){
				strcpy(municipios[i].uf,"MA");
				strcpy(municipios[i].regiao,"Nordeste");
			}
			else if(municipios[i].codigo_uf == 22){
				strcpy(municipios[i].uf,"PI");
				strcpy(municipios[i].regiao,"Nordeste");
			}
			else if(municipios[i].codigo_uf == 23){
				strcpy(municipios[i].uf,"CE");
				strcpy(municipios[i].regiao,"Nordeste");
			}
			else if(municipios[i].codigo_uf == 24){
				strcpy(municipios[i].uf,"RN");
				strcpy(municipios[i].regiao,"Nordeste");
			}
			else if(municipios[i].codigo_uf == 25){
				strcpy(municipios[i].uf,"PB");
				strcpy(municipios[i].regiao,"Nordeste");
			}
			else if(municipios[i].codigo_uf == 26){
				strcpy(municipios[i].uf,"PE");
				strcpy(municipios[i].regiao,"Nordeste");
			}
			else if(municipios[i].codigo_uf == 27){
				strcpy(municipios[i].uf,"AL");
				strcpy(municipios[i].regiao,"Nordeste");
			}
			else if(municipios[i].codigo_uf == 28){
				strcpy(municipios[i].uf,"SE");
				strcpy(municipios[i].regiao,"Nordeste");
			}
			else if(municipios[i].codigo_uf == 29){
				strcpy(municipios[i].uf,"BA");
				strcpy(municipios[i].regiao,"Nordeste");
			}
			else if(municipios[i].codigo_uf == 31){
				strcpy(municipios[i].uf,"MG");
				strcpy(municipios[i].regiao,"Sudeste");
			}
			else if(municipios[i].codigo_uf == 32){
				strcpy(municipios[i].uf,"ES");
				strcpy(municipios[i].regiao,"Sudeste");
			}
			else if(municipios[i].codigo_uf == 33){
				strcpy(municipios[i].uf,"RJ");
				strcpy(municipios[i].regiao,"Sudeste");
			}
			else if(municipios[i].codigo_uf == 35){
				strcpy(municipios[i].uf,"SP");
				strcpy(municipios[i].regiao,"Sudeste");
			}
			else if(municipios[i].codigo_uf == 41){
				strcpy(municipios[i].uf,"PR");
				strcpy(municipios[i].regiao,"Sul");
			}
			else if(municipios[i].codigo_uf == 42){
				strcpy(municipios[i].uf,"SC");
				strcpy(municipios[i].regiao,"Sul");
			}
			else if(municipios[i].codigo_uf == 43){
				strcpy(municipios[i].uf,"RS");
				strcpy(municipios[i].regiao,"Sul");
			}
			else if(municipios[i].codigo_uf == 50){
				strcpy(municipios[i].uf,"MS");
				strcpy(municipios[i].regiao,"Centro-Oeste");
			}
			else if(municipios[i].codigo_uf == 51){
				strcpy(municipios[i].uf,"MT");
				strcpy(municipios[i].regiao,"Centro-Oeste");
			}
			else if(municipios[i].codigo_uf == 52){
				strcpy(municipios[i].uf,"GO");
				strcpy(municipios[i].regiao,"Centro-Oeste");
			}
			else if(municipios[i].codigo_uf == 53){
				strcpy(municipios[i].uf,"DF");
				strcpy(municipios[i].regiao,"Centro-Oeste");
			}
		}
	}
	fclose(arq);



	//imprimir_muni(municipios);
	return EXIT_SUCCESS;
}