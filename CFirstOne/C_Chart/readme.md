# Gráfico em C no Command Prompt (CMD)

Este projeto implementa um gráfico simples no CMD usando a linguagem C. 
O gráfico é gerado com base em um array de valores fornecido e é exibido no terminal utilizando caracteres ASCII.

## Requisitos e Como Executar

É preciso ter um computador com Windows, um Prompt de Comando (CMD) e um compilador.
Nesse caso o gcc funcionou e permissões de adminstrador podem ser necessárias.
Baixe o Arquivo e coloque em um diretório de fácil acesso, abra o CMD (com permissões de administrador se possível),
navegue até o diretório no qual o arquivo está (Ex.: cd C:/diretorio/diretorio), a partir disso será necessário compilar o 
arquivo, com gcc use algo como: gcc file.c -o name.exe para gerar o executável, depois só digite o nome do arquivo .exe 
no CMD e continuar, talvez demore um pouco para carregar, é para ser exibido bem rapidamente.

## Como Funciona

O gráfico mapeia os valores do array para posições em um gráfico de largura (`WIDTH`) e altura (`HEIGHT`) definidas. 
O eixo X representa a posição dos elementos no array e o eixo Y representa os valores dos elementos.

### Estrutura do Código

O código está estruturado da seguinte forma:

1. **Definições de Constantes:**

   #define WIDTH 50
   #define HEIGHT 20

Essas constantes definem a largura e a altura do gráfico.

2.  **Função plot:**
A função plot é responsável por desenhar o gráfico com base nos dados fornecidos.

    void plot(int data[], int size) {
      // Código para gerar e imprimir o gráfico
    }

3.  **Função main:**
A função main define o array de dados e chama a função plot.

    int main() {
        int data[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
        int size = sizeof(data) / sizeof(data[0]);

        plot(data, size);

        return 0;
    }

### Detalhes da Implementação
1. **Inicialização do Gráfico:**
    O gráfico é inicializado com espaços em branco.
   
  char graph[HEIGHT][WIDTH];
  for (int i = 0; i < HEIGHT; i++) {
    for (int j = 0; j < WIDTH; j++) {
        graph[i][j] = ' ';
    }
  }

2. **Mapeamento dos Pontos:**
Os valores do array são mapeados para posições no gráfico.

for (int i = 0; i < size; i++) {
    int x = (i * (WIDTH - 2)) / (size - 1) + 1;
    int y = (data[i] * (HEIGHT - 2)) / max;
    graph[HEIGHT - 2 - y][x] = '*';
}

3. **Desenho dos Eixos:**
Os eixos X e Y são desenhados no gráfico.

for (int i = 0; i < HEIGHT; i++) {
    graph[i][0] = '|';
}
for (int j = 0; j < WIDTH; j++) {
    graph[HEIGHT - 1][j] = '-';
}
graph[HEIGHT - 1][0] = '+';

4. **Impressão do Gráfico:**
O gráfico é impresso no CMD.

    for (int i = 0; i < HEIGHT - 1; i += 2) {
        printf("%4d |", max * (HEIGHT - 2 - i) / (HEIGHT - 2));
        for (int j = 1; j < WIDTH; j++) {
            putchar(graph[i][j]);
        }
        putchar('\n');
    }
    printf("     +");
    for (int j = 1; j < WIDTH; j++) {
        putchar(graph[HEIGHT - 1][j]);
    }
    putchar('\n');
    printf("      ");
    for (int j = 1; j < WIDTH; j += 5) {
        printf("%4d", (size - 1) * (j - 1) / (WIDTH - 2));
    }
    putchar('\n');

### Como Modificar os Dados
Para modificar os dados que serão plotados no gráfico, basta alterar o conteúdo do array data na função main.
Note que talvez necessite fazer mais alterações.

