#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define tam1 10000
#define tam2 50000
#define tam3 100000

void selectionSort(int *vet, int n){
  clock_t start, end;
  start = clock();

  int i, j, min , aux;

    int nc = 0, ntc = 0;
    for (i = 0; i< n-1; i++) {
        min = i;
        for (j = i+1 ; j<n; j++){
            nc += 1 ;
            if (vet[j] < vet[min]) {
                ntc += 1 ;
                min = j;
            }

        }

        aux = vet[i];
        vet[i] = vet[min];
        vet[min] = aux ;
    }

  end = clock();

  double difTempo = ((double)end - start) / CLOCKS_PER_SEC;

  printf("\n\n\n\t -> Tempo em s: %lf, Tempo em ms: %lf", difTempo, difTempo * 1000);
}


void ordemCrescente(int vet[], int n){
  int i, j, k;

  srand(time(NULL));
  for (k = 0; k < n; k++){
    vet[k] = rand() % 100;
  }

  for (i = 0; i < n; i++){
    for (j = i + 1; j < n; j++){
      if (vet[i] > vet[j]){
        int aux = vet[j];
        vet[j] = vet[i];
        vet[i] = aux;
      }
    }
  }
  
}

void ordemDecrescente(int vet[], int n){
  int i, j, k;

  srand(time(NULL));
  for (k = 0; k < n; k++){
    vet[k] = rand() % 100;
  }

  for (i = 0; i < n; i++){
    for (j = i + 1; j < n; j++){
      if (vet[i] < vet[j]){
        int aux = vet[j];
        vet[j] = vet[i];
        vet[i] = aux;
      }
    }
  }
  
}

void ordemAleatorio(int vet[], int tam){
  int i;
  srand(time(NULL));
  for (i = 0; i < tam; i++)
  {
    vet[i] = rand() % 100;
  }
}

int main(){
  int *vet1, *vet2, *vet3;
  int *vet4, *vet5, *vet6;
  int *vet7, *vet8, *vet9;


  vet1 = malloc(tam1 * sizeof(int));
  vet2 = malloc(tam1 * sizeof(int));
  vet3 = malloc(tam1 * sizeof(int));

  vet4 = malloc(tam2 * sizeof(int));
  vet5 = malloc(tam2 * sizeof(int));
  vet6 = malloc(tam2 * sizeof(int));

  vet7 = malloc(tam3 * sizeof(int));
  vet8 = malloc(tam3 * sizeof(int));
  vet9 = malloc(tam3 * sizeof(int));

  //Gerando 3 vetores de tamanho 10000
  ordemCrescente(vet1, tam1);
  ordemDecrescente(vet2, tam1);
  ordemAleatorio(vet3, tam1);

  //Gerando 3 vetores de tamanho 50000
  ordemCrescente(vet4, tam2);
  ordemDecrescente(vet5, tam2);
  ordemAleatorio(vet6, tam2);

  //Gerando 3 vetores de tamanho 100000
  ordemCrescente(vet7, tam3);
  ordemDecrescente(vet8, tam3);
  ordemAleatorio(vet9, tam3);

  

  //Ordenando os 3 vetores de tamanho 10000, com o tempo de execução
  selectionSort(vet1, tam1);
  selectionSort(vet2, tam1);
  selectionSort(vet3, tam1);
  printf("\n");

  //Ordenando os 3 vetores de tamanho 50000, com o tempo de execução
  selectionSort(vet4, tam2);
  selectionSort(vet5, tam2);
  selectionSort(vet6, tam2);
  printf("\n");

  //Ordenando os 3 vetores de tamanho 100000, com o tempo de execução
  selectionSort(vet7, tam3);
  selectionSort(vet8, tam3);
  selectionSort(vet9, tam3);
  printf("\n");

 
  

  

  return 0;
}

