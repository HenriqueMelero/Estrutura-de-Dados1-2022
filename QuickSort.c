#include "NewTAD.h"
int main()
{
    double time_spent = 0.0;
    clock_t begin = clock();
    long int tamanho;
    printf("\nTamanho: ");
    scanf("%ld", &tamanho);
    Float_Vector *vetor = alocavetor(tamanho);

    quick_sort(vetor, 0, tamanho - 1, tamanho);

    clock_t end = clock();
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("\n%f seconds", time_spent);
    free(vetor);
    return 0;
}