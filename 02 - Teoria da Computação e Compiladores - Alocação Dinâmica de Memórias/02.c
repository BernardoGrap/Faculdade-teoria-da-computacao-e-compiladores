#include <stdio.h>
#include <stdlib.h>

int* AlocarMemoria(int n){
    int *array = (int *) calloc(n, sizeof(int));
    if (array == NULL) {
        printf("Falha na alocação de memória.\n");
        exit(1);
    }
    return array;
} 
void ExibirArray(int* array, int n) {
    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
int *array, n;
printf("Digite o tamanho do array: ");
scanf("%d", &n);

array = AlocarMemoria(n);

ExibirArray(array, n);

free(array);
return 0;
}