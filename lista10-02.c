#include <stdio.h>

// implementar a chamada de uma determinada linha informada pelo usuário. 

int main (void )
{
    int matriz[3][3],i, j;
  
        printf ("Digite valor para os elementos da matriz:\n\n");

        // matriz i
        for ( i=0; i<3; i++ )
        // matriz j
        for ( j=0; j<3; j++ )
        {
            printf ("\nElemento[%d][%d] = ", i, j);
            scanf ("%d", &matriz[ i ][ j ]);
        }
  
        printf("\n\n******************* Saida de Dados ********************* \n");
  
        for ( i=0; i<3; i++ )
            for ( j=0; j<3; j++ )
        {
            printf ("\nElemento[%d][%d] = %d\n", i, j,matriz[ i ][ j ]);
        }
  
       
    return(0);

}