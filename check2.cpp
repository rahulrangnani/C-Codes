#include <stdio.h>
#include <conio.h>

int addmult ( int  ii, int  jj )
{
      int  kk, ll;
      kk = ii + jj;
      ll = ii * jj;
      return ( kk, ll );
}

int  main( ) 
{ 
        int  i = 3, j = 4, k, l ; 
      k = addmult ( i, j ) ; 
      l = addmult ( i, j ) ; 
      printf ( "\n%d %d", k, l ) ; 
      getch();
      return 0;
} 