#include <stdio.h>

// Define a largura e altura do gráfico
#define WIDTH 50
#define HEIGHT 20

void plot(int data[], int size) {
    // Cria uma matriz para armazenar o gráfico
    char graph[HEIGHT][WIDTH];

    // Inicializa o gráfico com espaços em branco
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            graph[i][j] = ' ';
        }
    }

    // Encontra o valor máximo no array de dados
    int max = data[0];
    for (int i = 1; i < size; i++) {
        if (data[i] > max) {
            max = data[i];
        }
    }

    // Gera os pontos no gráfico
    for (int i = 0; i < size; i++) {
        int x = (i * (WIDTH - 2)) / (size - 1) + 1; // Mapeia o índice para a largura do gráfico
        int y = (data[i] * (HEIGHT - 2)) / max; // Mapeia o valor para a altura do gráfico
        graph[HEIGHT - 2 - y][x] = '*'; // Desenha o ponto no gráfico, estão definidos em um array adiante
    }

    // Desenha os eixos X e Y
    for (int i = 0; i < HEIGHT; i++) {
        graph[i][0] = '|'; // Eixo Y
    }
    for (int j = 0; j < WIDTH; j++) {
        graph[HEIGHT - 1][j] = '-'; // Eixo X
    }
    graph[HEIGHT - 1][0] = '+'; // Origem

    // Adiciona os números ao lado do eixo Y
    for (int i = 0; i < HEIGHT - 1; i += 2) {
        printf("%4d |", max * (HEIGHT - 2 - i) / (HEIGHT - 2));
        for (int j = 1; j < WIDTH; j++) {
            putchar(graph[i][j]);
        }
        putchar('\n');
    }

    // Imprime o eixo X com os dados
    printf("     +");
    for (int j = 1; j < WIDTH; j++) {
        putchar(graph[HEIGHT - 1][j]);
    }
    putchar('\n');

    // Imprime os índices ao longo do eixo X
    printf("   ");
    for (int j = 1; j < WIDTH; j += 4) {
        printf("%4d", (size - 1) * (j - 1) / (WIDTH - 2));
    }
    putchar('\n');
}

int main() {
    int data[] = {1, 3, 9, 8, 5, 6, 2, 4, 12, 19, 7, 13, 14, 24};
    int size = sizeof(data) / sizeof(data[0]);

    plot(data, size);

    return 0;
}
