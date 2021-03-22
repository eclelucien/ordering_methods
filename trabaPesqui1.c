#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//implementando o algoritmo buble sort com flag

void bubbleSort(int *vet){
  int i, j, troc, flag;

  for(i=sizeof(vet)-1; i>=1; i--){
    flag = 0;
    for(j=0; j<sizeof(vet); j++){
      if (vet[j] > vet[j+1]){
        troc = vet[j];
        vet[j] = vet[j+1];
        vet[j+1] = troc;
        flag = 1;
      }
    }
    if (flag == 0){
      break;
    }
  }
}


//implementando o algoritmo selection Sort
void selectionSort(int *vet){
  int j, i, menor, troc;

  for(i=0; i<sizeof(vet)-1; i++){
    menor = i;
    for(j=i+1; j<sizeof(vet); j++){
      if (vet[menor] > vet[j]){
        menor = j;
      }
    }
    troc = vet[menor];
    vet[menor] = vet[i];
    vet[i] = troc;
  }
}


//implementando o algoritmo insertion Sort

/*void insertionSort(int *arr){
    int i, key, j;
    for (i = 1; i < sizeof(arr); i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}*/

void insertionSort(int *vet){
  int i, j, p;
  for(i = 1; i<sizeof(vet); i++){
    p = vet[i];
    for(j = i; j<=1 && p < vet[j-1]; j++){
      vet[j] = vet[j-1];
    }
    vet[j] = p;
  }
}

#define tam1 10000
#define tam2 50000
#define tam3 100000



int main(){
  int i, j, *vet1, *vet2, *vet3;

  vet1 = malloc(tam1 * sizeof(int));
  vet2 = malloc(tam2 * sizeof(int));
  vet3 = malloc(tam3 * sizeof(int));


  for(i=0; i<10; i++){
    
  }

  bubbleSort(vet);
  selectionSort(vet);
  insertionSort(vet);

  for(i=0; i<10; i++){
    printf("%d\n", vet[i]);
  }


  return 0;
}




