#include <stdio.h>
#include <string.h>

char str[10005][1005], aux[1005];
int n;
int main()
{
    while (scanf("%d", &n)!=0)
    {
        int contador[10005], tamanho[10005], respfinal=1;
        respfinal=1;
        for (int i = 0; i < n; i++)
        {
            scanf("%s", str[i]);
            tamanho[i] = strlen(str[i]);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (tamanho[i] > tamanho[j])
                {
                    int temp;
                    strcpy(aux, str[i]);
                    strcpy(str[i], str[j]);
                    strcpy(str[j], aux);
                    temp = tamanho[j];
                    tamanho[j] = tamanho[i];
                    tamanho[i] = temp;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            contador[i] = 1;
            for (int j = 0; j < i; j++)
            {
                if (strstr(str[i], str[j]) != NULL)
                {
                    if (contador[j] + 1 > contador[i])
                    {
                        contador[i] = contador[j] + 1;
                }
            }
        if (contador[i] > respfinal)
        {
            respfinal=contador[i];
        }
        
        }
    }
    printf("%d\n", respfinal);
}
return 0;
}