#include <stdio.h>
#include <cs50.h>
int main (void)
{
    int n= get_int("Enter the height of the tower");
    for(int  i=1; i<=n;i++)
    {
        int j;
        // for the space to start after
        for( j=n-1 ; j>=i ; j -- )
        {
            printf(" ");
        }
        // the first block
        for(  j=1 ; j<=i; j++ )
        {
            printf("#");
        }
        //the gap b/w the blocks
        for( j =0 ; j<2 ; j++)
        {
            printf(" ");

        }
        //th elast block
         for(  j=1 ; j<=i ; j++)
        {
            printf("#");
        }
        printf("\n");
    }

}