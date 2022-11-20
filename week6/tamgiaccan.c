#include<stdio.h>

int main(){
    int n ;
    scanf("%d" , &n ) ;
    int m = 2*n-1;
    for ( int i = 1 ; i<= n ; i++ )
        {
            for( int u = 1 ; u<= m-(2*i-1) ; u++ )
                printf (" ") ;
            for (  int j = 1 ; j<= 2*i-1 ; j++ )
                {
                    printf("* ") ;
                }
            printf("%\n" ) ;
        }
    return 0;
    }
