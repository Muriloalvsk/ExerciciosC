#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main () {
    int notas[5][3];
    int pioresNotas[5];
    int quantidadeAlunos[3];

    // Inicializa notas com valores aleatórios entre 0 e 10
    srand(time(NULL));
    {
        int i;
        for(i = 0; i < 5; i++) {
            int j;
            for(j = 0; j < 3; j++) {
                notas[i][j] = abs(rand()) % 11;
            }
        }
    }

    // Define quais as piores notas de cada aluno, e soma o número de alunos com pior nota em cada avaliação
    {
        // Determina qual a pior nota de cada aluno
        {
            int i;
            for(i = 0; i < 5; i++) {
                int j, index;
                for(index = j = 0; j < 3; j++) {
                    // Se houver empate, permanece a atual
                    if(notas[i][j] < notas[i][index]) {
                        index = j;
                    }
                }
                pioresNotas[i] = index;
            }
        }

        // Determina a somatória de alunos
        {
            int i;
            for(i = 0; i < 5; i++) {
                quantidadeAlunos[pioresNotas[i]]++;
            }
        }
    }
    return 0;
}
