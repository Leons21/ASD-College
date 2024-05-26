#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int array[], int size)
{
    for(int step=0; step<size-1; step++)
    {
        int min_idx = step;
        for(int i = step+1; i<size; i++)
        {
            if(array[i] < array[min_idx])
            min_idx = i;
        }
        swap(&array[min_idx], &array[step]);
    }
}

void printArray(int array[], int size)
{
    for(int i=0; i< size; ++i)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main()
{
    printf("----------------------------------------------------------\n\n");
    printf("\t\tSELECTION SORT\n\n");
    printf("----------------------------------------------------------\n\n");

    int data[50], n, a;
        printf("Masukan jumlah data = ");
        scanf("%d", &n);
        printf("\nMasukkan angka = \n");
    for(a=0; a<n; a++)
        scanf("%d", &data[a]);
        selectionSort(data, n);
        printf("\nArray setelah disusun dari kecil ke besar (Ascending)=\n");
    for(a=0; a<n; a++)
        {
            printf("%d  ",data[a]);
        }
    printf("\n");
    return 0;
}
