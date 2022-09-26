#include <stdio.h>
int main()
{
    int i, j, elem, vet[5] = {4, 2, 1, 5, 3};

    for (j = 1; j < 5; j = j + 1)
    {
        elem = vet[j];
        i = j - 1;

        while (i >= 0 && vet[i] > elem)
        {
            vet[i + 1] = vet[i];
            i = i - 1;
            vet[i + 1] = elem;
        }
        for (i = 0; i < 5; i++)
        {
            printf("%d ", vet[i]);
        }
        printf("\n");
    }

    return 0;
}
