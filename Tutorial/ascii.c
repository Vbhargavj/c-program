// # include <stdio.h>
// int main( )
// {
// int ch ;
// for ( ch = 0 ; ch <= 255 ; ch++ )
// printf ( "%d %c\n", ch, ch ) ;
// return 0 ;
// }
#include <stdio.h>
int main()
{
    int x = 0, y = 5, z = 10, a;
    a = x > 1 ? y > 1 : z > 1 ? 100
                              : 300;
    printf("%d", a);

    return 0;
}
