//pratica 6
#include <stdio.h>
#include <string.h>

void printSet(int set[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", set[i]);
    }
    printf("\n");
}

int getNextState(int state, char input) {
    switch (state) {
        case 0: // A
            if (input == 'a') return 0;
            else if (input == 'b') return 1;
            break;
        case 1: // B
            if (input == 'a') return 2;
            else if (input == 'b') return 3;
            break;
        case 2: // C
            if (input == 'a') return 4;
            else if (input == 'b') return 5;
            break;
        case 3: // D
            if (input == 'a') return 6;
            else if (input == 'b') return 7;
            break;
        case 4: // E
            if (input == 'a') return 8;
            else if (input == 'b') return 9;
            break;
        case 5: // F
            return 5;
            break;
        default:
            return -1;
    }
}

int main() {
    char str[100];
    printf("Insira a string: ");
    scanf("%s", str);

    int currentState = 0; // Estado atual
    int set[10];         // Conjunto de estados
    int size = 0;        // Tamanho do conjunto de estados

    for (int i = 0; i < strlen(str); i++) {
        currentState = getNextState(currentState, str[i]);
        int exists = 0;

        for (int j = 0; j < size; j++) {
            if (set[j] == currentState) {
                exists = 1;
                break;
            }
        }

        if (!exists) {
            set[size] = currentState;
            size++;
        }
    }

    printSet(set, size);

    return 0;
}