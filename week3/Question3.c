#include<stdio.h>

void kegoc(){
    printf("%c" ,201 );
}
void kengangdau(){
    for( int i = 1;i<=14; i++ )
        printf("%c" ,205 );
    printf("%c" , 203);
    for( int i = 1;i<=14; i++ )
        printf("%c" ,205 );
    printf("%c" , 203);
    for( int i = 1;i<=14; i++ )
        printf("%c" ,205 );
    printf("%c" , 187);
    }
void hang1(int j){
    printf("\n");
    printf("%c" ,186);
    //printf(" ");

    for( int  i= 1 ; i<= 3 ; i++ )
        {

            printf("  %d x %d = %-2d  ", i ,j, i*j  );
            printf("%c" , 186 );
        }

}
void hang2(int j){
    printf("\n");
    printf("%c" ,186);
    //printf(" ");

    for( int  i= 4; i<= 6 ; i++ )
        {

            printf("  %d x %d = %-2d  ", i ,j, i*j  );
            printf("%c" , 186 );
        }

}
void hang3(int j){
    printf("\n");
    printf("%c" ,186);
    //printf(" ");

    for( int  i= 7; i<= 9 ; i++ )
        {

            printf("  %d x %d = %-2d  ", i ,j, i*j  );
            printf("%c" , 186 );
        }

}
void kenganggiua(){
    printf("%c" , 204);
    for( int i = 1;i<=14; i++ )
        printf("%c" ,205 );
    printf("%c" , 206 );
    for( int i = 1;i<=14; i++ )
        printf("%c" ,205 );
    printf("%c" , 206 );
    for( int i = 1;i<=14; i++ )
        printf("%c" ,205 );
    printf("%c" ,185);
}

void kengangduoi(){
    printf("%c" , 200);
    for( int i = 1;i<=14; i++ )
        printf("%c" ,205 );
    printf("%c" , 202 );
    for( int i = 1;i<=14; i++ )
        printf("%c" ,205 );
    printf("%c" , 202 );
    for( int i = 1;i<=14; i++ )
        printf("%c" ,205 );
    printf("%c" ,188);
}
int main(){
    for ( int i = 1 ; i<= 16 ;i++ )
        printf("-");
    printf("BANG CUU CHUONG");
    for ( int i = 1 ; i<= 16 ;i++ )
        printf("-");
    printf("\n");
    kegoc();
    kengangdau();

    for( int i = 1; i<=9 ;i++)
        hang1(i);
    printf("\n");
    kenganggiua();

    for( int i = 1; i<=9 ;i++)
        hang2(i);
    printf("\n");
    kenganggiua();

    for( int i = 1; i<=9 ;i++)
        hang3(i);
    printf("\n");
    kengangduoi();
    return 0;
}
