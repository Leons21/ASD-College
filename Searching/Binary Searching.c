#include <stdio.h>
int iterativeBinarySearch(int array[], int start_index, int end_index, int element){
    while (start_index <= end_index){
        int middle = start_index + (end_index- start_index )/2;
        if (array[middle] == element)
            return middle;
        if (array[middle] < element)
            start_index = middle + 1;
        else
         end_index = middle - 1;
    }
    return -1;
}

int main(void)
{
    printf("--------------------------------------------------------\n\n");
    printf("\t\tBINARY SEARCHING\n\n");
    printf("--------------------------------------------------------\n\n");

    int array[]={1, 4, 7, 9, 16, 56, 70, 81, 93, 100};
    int n=10;
    int element=93;
    int found_index = iterativeBinarySearch(array, 0, n-1, element);
    if(found_index == -1 )
        {
        printf("Angka tersebut TIDAK DITEMUKAN \n");
        }
    else
    {
        printf("Angka ditemukan pada lokasi/index : %d\n",found_index);
    }
    return 0;
}
