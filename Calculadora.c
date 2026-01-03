#include <stdio.h>
#include <string.h>

int start(){

    printf("===============================\n   Calculadora Simples\n===============================\n");
    printf("Selecione uma operacao:\n");
    printf("1.Adicao \n2.Subtracao \n3.Multiplicacao \n4.Divisao \n5.Sair \n");
    printf("Opcao: ");

}
int end(){

    printf("Obrigado por usar a calculadora! Ate a proxima.");

}
int restart(){
    
}

float adicao(){

    int i;
    float n1, n2;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    printf("Resultado: %.2f + %.2f = %.2f\n", n1, n2, n1 + n2);

    restart();
    
    char r[4];

    printf("Deseja realizar outra operacao? (s/n):\n");
    scanf(" %s", r);

    for(i = 0; i < 2; i++)
    {
        if(strcmp(r, "s") == 0 || strcmp(r, "S") == 0)
        {
            return 1;
        }
        else if(strcmp(r, "n") == 0 || strcmp(r, "N") == 0)
        {
            return 0;
        }
        else
        {
            printf("Resposta invalida. Por favor, digite 's' para sim ou 'n' para nao.\n");
            scanf(" %s", &r);
        }
        i--;
    }

}

float subtracao(){

    int i;
    float n1, n2;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    printf("Resultado: %.2f - %.2f = %.2f\n", n1, n2, n1 - n2);

    restart();
    
    char r[4];

    printf("Deseja realizar outra operacao? (s/n):\n");
    scanf(" %s", r);

    for(i = 0; i < 2; i++)
    {
        if(strcmp(r, "s") == 0 || strcmp(r, "S") == 0)
        {
            return 1;
        }
        else if(strcmp(r, "n") == 0 || strcmp(r, "N") == 0)
        {
            return 0;
        }
        else
        {
            printf("Resposta invalida. Por favor, digite 's' para sim ou 'n' para nao.\n");
            scanf(" %s", &r);
        }
        i--;
    }

}

float multiplicacao(){

    int i;
    float n1, n2;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    printf("Resultado: %.2f * %.2f = %.2f\n", n1, n2, n1 * n2);

    restart();
    
    char r[4];

    printf("Deseja realizar outra operacao? (s/n):\n");
    scanf(" %s", r);

    for(i = 0; i < 2; i++)
    {
        if(strcmp(r, "s") == 0 || strcmp(r, "S") == 0)
        {
            return 1;
        }
        else if(strcmp(r, "n") == 0 || strcmp(r, "N") == 0)
        {
            return 0;
        }
        else
        {
            printf("Resposta invalida. Por favor, digite 's' para sim ou 'n' para nao.\n");
            scanf(" %s", &r);
        }
        i--;
    }

}

float divisao(){

    int i;
    float n1, n2;
    
    char r[4];

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    if(n2 == 0)
    {
        printf("Erro: Divisao por zero nao e permitida.");
        printf("Deseja realizar outra operacao? (s/n):\n");
        scanf(" %s", r);

        for(i = 0; i < 2; i++)
        {
            if(strcmp(r, "s") == 0 || strcmp(r, "S") == 0)
            {
                return 1;
            }
            else if(strcmp(r, "n") == 0 || strcmp(r, "N") == 0)
            {
                return 0;
            }
            else
            {
                printf("Resposta invalida. Por favor, digite 's' para sim ou 'n' para nao.\n");
                scanf(" %s", &r);
            }
            i--;
        }
    }

    printf("Resultado: %.2f / %.2f = %.2f\n", n1, n2, n1 / n2);

    restart();

    printf("Deseja realizar outra operacao? (s/n):\n");
    scanf(" %s", r);

    for(i = 0; i < 2; i++)
    {
        if(strcmp(r, "s") == 0 || strcmp(r, "S") == 0)
        {
            return 1;
        }
        else if(strcmp(r, "n") == 0 || strcmp(r, "N") == 0)
        {
            return 0;
        }
        else
        {
            printf("Resposta invalida. Por favor, digite 's' para sim ou 'n' para nao.\n");
            scanf(" %s", &r);
        }
        i--;
    }

}

int opErrada(){

}
int escErrada(){

}

int main()
{

    char r;
    start();
    int escolha, i;
    scanf("%d", &escolha);
    
    for(i = 0; i < 2; i ++)
    {
        if(escolha == 1)
        {
            if(adicao() == 1)
            {
                start();
                scanf("%d", &escolha);
            }
            else
            {
                end();
                break;
            }
        }
        else if(escolha == 2)
        {
            if(subtracao() == 1)
            {
                start();
                scanf("%d", &escolha);
            }
            else
            {
                end();
                break;
            }
        }
        else if(escolha == 3)
        {
            if(multiplicacao() == 1)
            {
                start();
                scanf("%d", &escolha);
            }
            else
            {
                end();
                break;
            }
        }
        else if(escolha == 4)
        {
            if(divisao() == 1)
            {
                start();
                scanf("%d", &escolha);
            }
            else
            {
                end();
                break;
            }
        }
        else if(escolha == 5)
        {
            end();
            return 0;
        }
        else
        {
            printf("Opcao inexistente, por favor digite o numero de 1 a 5 correspondente:\n");
            if(scanf(" %d", &escolha) != 1)
            {
                do
                {
                    r = getchar();
                } while (r != '\n');
            }
        }
        i--;
    }

}

/*
===============================
   Calculadora Simples
===============================
Selecione uma operação:
1. Adição
2. Subtração
3. Multiplicação
4. Divisão
5. Sair
Opção:
*/
