#include<stdio.h>
int main()
{
    int numero= 0;
    int array[10];

    for(int i=0; i<10;i++)
    {
        printf("Inserisci un numero: ");
        scanf("%d", &array[i]);
    }
    printf("\nNumeri pari e dispari:");
    for(int j = 0;j<10;j++)
    {
        for(int y = j+1; y<10; y++)
        {
            if  (array[y]%2 == 0)
            {
                numero = array[j];
                array[j]=array[y];
                array[y]= numero;
            }
        }
        printf("%d", array[j]);
    }
     printf("\n");
    return 0;
   
}