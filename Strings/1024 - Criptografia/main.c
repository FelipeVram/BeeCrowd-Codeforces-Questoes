#include <stdio.h>
#include <string.h>

int main(){
    int n, tamanho;
    char palavra[1100];
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        fgets(palavra, sizeof(palavra), stdin);
        palavra[strcspn(palavra,"\n")] = '\0';
        tamanho=strlen(palavra);
        for (int j = 0; j < tamanho; j++)
        {
            if ((palavra[j]>='a' && palavra[j] <= 'z' ) || (palavra[j]>='A' && palavra[j] <= 'Z'))
            {
                palavra[j]=palavra[j]+3;
            }
        }

        int inicio = 0, fim = tamanho-1, interm;
        while (inicio<fim)
        {
            interm=palavra[inicio];
            palavra[inicio]=palavra[fim];
            palavra[fim]=interm;
            inicio++;
            fim--;
        }
        for (int k = 0; k < tamanho; k++)
        {
            if (k>=tamanho/2)
            {
                palavra[k]=palavra[k]-1;
            }
            
        }
        printf("%s\n", palavra);
    }   
    return 0;
}