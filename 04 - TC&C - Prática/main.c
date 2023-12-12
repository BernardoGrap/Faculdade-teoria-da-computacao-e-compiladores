#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int tamanhoStringRecursiva(char *str) {
    if (*str == '\0') {
        return 0;
    } else {
        return 1 + tamanhoStringRecursiva(str + 1);
    }
}

void inverterStringRecursiva(char *str, char *resultado, int tamanho) {
    if (*str != '\0') {
        resultado[tamanho - 1] = *str;
        inverterStringRecursiva(str + 1, resultado, tamanho - 1);
    }
}

int main() {
    const char *nomeArquivo = "exemplo.txt";
    FILE *arquivo = fopen(nomeArquivo, "r+");

    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    char buffer[100]; 
    fgets(buffer, sizeof(buffer), arquivo);
    int tamanho = tamanhoStringRecursiva(buffer);
    fprintf(arquivo, "%d\n", tamanho);
    char *reverso = (char *)malloc(tamanho + 1);
    inverterStringRecursiva(buffer, reverso, tamanho);
    reverso[tamanho] = '\0';
    fprintf(arquivo, "%s", reverso);
    fclose(arquivo);
    free(reverso);

    printf("Operações concluídas com sucesso.\n");

    return 0;
}
