#include <stdio.h>

int main(){
    int t, n[6], contador=0;
    scanf("%d", &t);
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &n[i]);
        if (n[i]==t)
        {
            contador++;
        }
        
    }
    printf("%d\n", contador);
}