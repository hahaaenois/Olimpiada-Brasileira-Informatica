#include <cstdlib>
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int c,ano = 1986;
    scanf("%d", &c);

    while(true){
            ano += 76;
            if(ano > c && ano != c){
                   break;
                   }

            }
    printf("%d",ano );
    return 0;
}
