#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insertionSort(int array[], int n)
{
    int a, b, temp;
    for( a=1; a<n; a++)
    {
        temp=array[a];
        b=a-1;
    while(array[b]>temp && b>=0)
    {
        array[b+1]=array[b];
        b--;
    }
    array[b+1] = temp;
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
    printf("\t\tINSERTION SORT\n\n");
    printf("----------------------------------------------------------\n\n");

    int data[50], n, a;
        printf("Masukan jumlah data = ");
        scanf("%d", &n);
        printf("\nMasukkan angka = \n");
    for(a=0; a<n; a++)
        scanf("%d", &data[a]);
        insertionSort(data, n);
        printf("\nArray setelah disusun dari kecil ke besar (Ascending)=\n");
    for(a=0; a<n; a++)
        {
            printf("%d  ",data[a]);
        }
    printf("\n");
    return 0;
}
