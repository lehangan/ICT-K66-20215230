#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool check( int n )
{
    if ( n== 1) return false;
    if ( n== 2) return true;
    else
    {
        for ( int i = 2 ; i<= sqrt(n) ; i++)
            if( n%i == 0 )
            {
                return  false;
            }
        return true ;
    }
}

int fun( int n )
{
    if( n==1 ) return 0;
    else
    {
        int flag = 1 ;
        for( int i = 2 ; i<= sqrt(n) ; i++ )
            if ( n%i == 0)
            {
                flag = 0;
                return 0;
            }
        return flag;
    }
}
int foo( int c )
{
    int sum = 0;
    if ( c == 1 ) return 1 ;
    else
    {
        for ( int i = 0 ; i<=c ; i++)
        {
            sum += i ;
            if( sum == c ) return i;
            if ( sum > c ) return i-1 ;
        }
    }
}
int main()
{
    printf("fun(1) = %d\n", fun(1));
    printf("fun(2) = %d\n", fun(2));
    printf("fun(5) = %d\n", fun(5));
    printf("fun(6) = %d\n", fun(6));
    printf("\n");
    printf("foo(9) = %d\n", foo(9));
    printf("foo(10) = %d\n", foo(10));
    printf("foo(11) = %d\n", foo(11));
    return 0;
}
