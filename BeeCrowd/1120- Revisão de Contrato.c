#include <stdio.h>
#include <string.h>

int main()
{
    int tamanho;
    
    char n[110], d[5], impresso[110];

    while (scanf("%s %s", d, n) == 2)
    {
        
        if (d[0] == '0' && n[0] == '0')
        {
            break;
        }

        tamanho = strlen(n);
        int k = 0;

        
        for (int j = 0; j < tamanho; j++)
        {
            if (n[j] == d[0])
            {
                continue;
            }
            if (n[j] == '0' && k == 0)
            {
                continue;
            }
            impresso[k] = n[j];
            k++;
        }
        
        impresso[k] = '\0';

        if (k == 0)
        {
            impresso[0] = '0';
            impresso[1] = '\0';
        }

        printf("%s\n", impresso);
    }

    return 0;
}