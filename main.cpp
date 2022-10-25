#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char** argv) {

	char texto[50];
	char palavra[5];
	char compactado[50];
	int tamanho;
	int i,posicao;
	printf("Algoritmo de Huffman\n");
	printf("------------------------\n");
	printf("Digite um texto para compactar:");
	scanf("%s", &texto);
	printf("---------------------------\n");
	printf("Compactando...\n");
	printf("%s", texto);
    tamanho = strlen(texto);
    printf("Tamanho: %i", tamanho);
    posicao = 0;
	for(i=0;i < tamanho-4;i+=4){
      palavra[0] = texto[i];
      palavra[1] = texto[i+1];
      palavra[2] = texto[i+2];
      palavra[3] = texto[i+3];
      palavra[4] = 0;
      if( strcmp(palavra, "0000")==0){
        compactado[posicao] = '#';
        posicao++;
      } else if(strcmp(palavra,"1111")==0){
        compactado[posicao] = '$';
        posicao++;
      } else if(strcmp(palavra,"0011")==0){
        compactado[posicao] = '%';
        posicao++;
      } else if(strcmp(palavra,"1100")==0){
        compactado[posicao] = '&';
        posicao++;
      } else if(strcmp(palavra,"0101")==0){
        compactado[posicao] = '-';
        posicao++;
      } else if(strcmp(palavra,"1010")==0){
        compactado[posicao] = '+';
        posicao++;
      }
      else {
        compactado[posicao]= palavra[0];
        compactado[posicao+1]= palavra[0+1];
        compactado[posicao+2]= palavra[0+2];
        compactado[posicao+3]= palavra[0+3];
        posicao += 4;
      }
      printf("\nPosicao %i Palavra %s Compactado %s",
             i, palavra, compactado);
	}
	printf("\nString original: %s", texto);
	printf("\n\nResultado final: %s", compactado);
	return 0;
}
