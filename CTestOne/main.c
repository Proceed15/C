//Modelos de Inteligencia Artificial
//Colocar conteúdo em C nesse arquivo e testar.
/*#1
#include <stdio.h>

// Função de Regressão Linear Simples
float predict(float x, float slope, float intercept) {
    return slope * x + intercept;
}

// Treinamento do Modelo (Método dos Mínimos Quadrados)
void trainModel(float x[], float y[], int n, float *slope, float *intercept) {
    float sumX = 0, sumY = 0, sumXY = 0, sumX2 = 0;

    for (int i = 0; i < n; i++) {
        sumX += x[i];
        sumY += y[i];
        sumXY += x[i] * y[i];
        sumX2 += x[i] * x[i];
    }

    *slope = (n * sumXY - sumX * sumY) / (n * sumX2 - sumX * sumX);
    *intercept = (sumY - *slope * sumX) / n;
}

int main() {
    // Dados de Treinamento
    float x[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    float y[] = {2, 4, 5, 4, 5, 6, 7, 8, 9};

    // Número de amostras
    int n = sizeof(x) / sizeof(x[0]);

    // Parâmetros do Modelo
    float slope, intercept;

    // Treinamento do Modelo
    trainModel(x, y, n, &slope, &intercept);

    // Realizar Predições
    for (int i = 0; i < n; i++) {
        float prediction = predict(x[i], slope, intercept);
        printf("Para x=%.2f, a predição é y=%.2f\n", x[i], prediction);
    }

    return 0;
}
*/
/*#2:*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define INPUT_SIZE 2
#define LEARNING_RATE 0.1
#define EPOCHS 1000

// Função de Ativação (Função de Degrau)
int activation(float sum) {
    return (sum >= 0) ? 1 : 0;
}

// Função de Treinamento do Perceptron
void trainPerceptron(float inputs[][INPUT_SIZE], int labels[], float weights[], int num_samples) {
    for (int epoch = 0; epoch < EPOCHS; ++epoch) {
        for (int i = 0; i < num_samples; ++i) {
            float sum = 0;
            for (int j = 0; j < INPUT_SIZE; ++j) {
                sum += inputs[i][j] * weights[j];
            }

            int prediction = activation(sum);
            int error = labels[i] - prediction;

            for (int j = 0; j < INPUT_SIZE; ++j) {
                weights[j] += LEARNING_RATE * error * inputs[i][j];
            }
        }
    }
}

int main() {
    float inputs[][INPUT_SIZE] = {{0, 0}, {0, 1}, {1, 0}, {1, 1}};
    int labels[] = {0, 0, 0, 1};
    float weights[INPUT_SIZE] = {0};

    // Treinar o Perceptron
    trainPerceptron(inputs, labels, weights, 4);

    // Testar o Perceptron
    printf("Testar Perceptron:\n");
    for (int i = 0; i < 4; ++i) {
        float sum = 0;
        for (int j = 0; j < INPUT_SIZE; ++j) {
            sum += inputs[i][j] * weights[j];
        }

        int prediction = activation(sum);
        printf("Input: [%d, %d], Prediction: %d\n", (int)inputs[i][0], (int)inputs[i][1], prediction);
    }

    return 0;
}
/**/
