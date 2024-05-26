#include <stdio.h>

void bubble_sort(int data[], int n)
{
    int a, b, c;
    for(a=0; a<n-1; a++)
    {
        for(b = 0; b < n - a - 1; b++)
        {
            if(data[b] > data[b+1])
            {
                c=data[b];
                data[b] = data[b+1];
                data[b+1] = c;
            }
        }
    }
}

int main()
{
    printf("----------------------------------------------------------\n\n");
    printf("\t\tBUBBLE SORT\n\n");
    printf("----------------------------------------------------------\n\n");

    int data[50], n, a;
        printf("Masukan jumlah data = ");
        scanf("%d", &n);
        printf("\nMasukkan angka = \n");
    for(a=0; a<n; a++)
        scanf("%d", &data[a]);
        bubble_sort(data, n);
        printf("\nArray setelah disusun dari kecil ke besar (Ascending)=\n");
    for(a=0; a<n; a++)
        {
            printf("%d  ",data[a]);
        }
    printf("\n");
    return 0;
}
