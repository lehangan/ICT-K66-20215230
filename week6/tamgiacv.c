#include<stdio.h>

int main(){
    int n ;
    scanf("%d" , &n ) ;
    int m = 2*n-1;
    for ( int i = 1 ; i<= n ; i++ )
        {
            for (  int j = 1 ; j<= i ; j++ )
                {
                    printf("* ") ;
                }
            printf("%\n" ) ;
        }
    return 0;
    }

