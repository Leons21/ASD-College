#include <stdio.h>

void printArray(int array[], int size)
{
    for(int a=0;a<size;a++)
    {
        printf("%d ",array[a]);
    }
    printf("\n");
}

void insertionSort(int array[], int size)
{
    int step;
    for (step=1;step<size;step++)
    {
        int key=array[step];
        int b=step-1;
        while(key<array[b]&&b>=0)
        {
            array[b+1] = array[b];
            --b;
        }
        array[b+1] = key;
    }
}

int main()
{
    int data[]={23,67 , 89 , 5 , 45 , 20 , 15 , 27};
    int size = sizeof(data) / sizeof(data[0]);
    insertionSort(data, size);
    printf("Data setelah disusun dari kecil ke besar (Ascending): \n");
    printArray(data, size);
}
