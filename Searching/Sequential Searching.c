#include <stdio.h>
void main()
{
    printf("--------------------------------------------------------\n\n");
    printf("\t\tSEQUENTIAL SEARCHING\n\n");
    printf("--------------------------------------------------------\n\n");
	int n, i, cari, hasil=0, data[20];
        printf("Berapa jumlah data yang di input = "); scanf ("%d",&n);
        printf("\nMasukan %d Integer(s)\n",n);
	for (i=0;i<n;i++)
		scanf ("%d",&data[i]);
        printf("\nAngka berapa yang ingin dicari = "); scanf("%d",&cari);
	for (i=0;i<n;i++)
	{
		if (data[i]==cari)
		{
			printf("Angka %d berhasil ditemukan dan tersimpan di lokasi [%d]\n", cari,i+1);
			hasil++;
		}
	}
		if(hasil==0)
            printf("Angka %d Tidak ditemukan", cari);
		else
			printf ("Angka %d ditemukan sebanyak %d kali dalam array\n", cari, hasil);
}
