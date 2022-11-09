#include<stdio.h>

int main(){
    int n ,m ;
    int f1 , f2 ;
    f1 = 1 ;
    f2 = 0 ;
    int pow = 1 ;
    printf("Enter n: ");
    scanf("%d" , &n) ;
    for ( int i = 1; i <= n ; i ++ )
        f1 = f1*i ;
    for ( int i = 1; i <= n ; i ++ )
        f2 = f2+i ;
    printf("F1(n) = %d" , f1 ) ;
    printf("\nF2(n) = %d" , f2  ) ;
    printf("\nEnter m: ");
    scanf("%d" , &m );
    for ( int i = 1; i <= m ; i ++ )
        pow = pow*n ;
    printf("Result: %d", pow);
    return 0;
    }
