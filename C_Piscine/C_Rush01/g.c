#include <unistd.h>
#include <stdlib.h>

// Función para escribir caracteres
void ft_putchar(char c) {
    write(1, &c, 1);
}

// Función para imprimir el tablero final
void print_grid(int grid[4][4]) {
    int i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            ft_putchar(grid[i][j] + '0');
            if (j < 3) ft_putchar(' ');
        }
        ft_putchar('\n');
    }
}

// Comprueba si la fila/columna es válida según las vistas (skyscrapers)
int check_view(int *line, int view_start, int view_end) {
    int i, max = 0, visible = 0;
    // Vista desde el inicio (izquierda/arriba)
    for (i = 0; i < 4; i++) {
        if (line[i] > max) {
            max = line[i];
            visible++;
        }
    }
    if (visible != view_start) return 0;
    
    // Vista desde el final (derecha/abajo)
    max = 0; visible = 0;
    for (i = 3; i >= 0; i--) {
        if (line[i] > max) {
            max = line[i];
            visible++;
        }
    }
    return (visible == view_end);
}

// Verifica si es seguro poner un número y si cumple las reglas al completar una línea
int is_safe(int grid[4][4], int row, int col, int num, int inputs[16]) {
    int i;
    for (i = 0; i < 4; i++) // Check fila y columna
        if (grid[row][i] == num || grid[i][col] == num) return 0;

    if (row == 3 || col == 3) { // Si cerramos fila o columna, validar vistas
        int line[4];
        if (col == 3) { // Validar fila completa
            for (i = 0; i < 4; i++) line[i] = grid[row][i];
            line[3] = num; // El número actual
            if (!check_view(line, inputs[8 + row], inputs[12 + row])) return 0;
        }
        if (row == 3) { // Validar columna completa
            for (i = 0; i < 4; i++) line[i] = grid[i][col];
            line[3] = num;
            if (!check_view(line, inputs[col], inputs[4 + col])) return 0;
        }
    }
    return 1;
}

// Algoritmo de Backtracking
int solve(int grid[4][4], int row, int col, int inputs[16]) {
    if (row == 4) return 1; // Fin del tablero
    int next_row = (col == 3) ? row + 1 : row;
    int next_col = (col == 3) ? 0 : col + 1;

    for (int num = 1; num <= 4; num++) {
        if (is_safe(grid, row, col, num, inputs)) {
            grid[row][col] = num;
            if (solve(grid, next_row, next_col, inputs)) return 1;
            grid[row][col] = 0;
        }
    }
    return 0;
}

int main(int argc, char **argv) {
    if (argc != 2) {
        write(1, "Error\n", 6);
        return 0;
    }

    int inputs[16], grid[4][4] = {0}, i = 0, j = 0;
    // Parseo simple de los argumentos
    while (argv[1][i]) {
        if (argv[1][i] >= '1' && argv[1][i] <= '4') {
            if (j > 15) { write(1, "Error\n", 6); return 0; }
            inputs[j++] = argv[1][i] - '0';
        }
        i++;
    }

    if (j == 16 && solve(grid, 0, 0, inputs))
        print_grid(grid);
    else
        write(1, "Error\n", 6);

    return 0;
}