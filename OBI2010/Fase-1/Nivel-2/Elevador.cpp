#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n,c,x,y,capacidade = 0;
    bool teve = false;
    scanf("%d %d", &n, &c);

    for(int i = 0; i < n ; i++){
        scanf("%d %d", &x, &y);
        capacidade += -1*x + y;
        if(capacidade > c){
            teve = true;
            break;
        }
    }

    if(teve){
        printf("S");
    }else{
        printf("N");
    }

    return 0;
} 
