#include <stdio.h>

#define CAP 3
int values [CAP] = { 0 };
char choices = 'a';

int value;
int value2;
int pos;

// Return a position by it's value.
int find(int val)
{
    for (int i = 0; i < CAP; ++i) {
        if(values[i] == val) {
            return i;
        }
    }
    return CAP+1;
}

void insert(int val)
{
    if (find(val) > CAP) {
        pos = find(0);
        if (pos > CAP) {
            printf("Não existem mais espaços disponíveis.\n");
        } else {
            values[pos] = val;
            printf("Valor %i Adicionado na posição: %i\n", val, pos);
        }
    } else {
        printf("Este valor já existe.\n");
    }
}

void remove_by_value(int val)
{
    pos = find(val);

    if (pos > CAP) {
        printf("Valor %i não encontrado.\n", val);
    } else {
        values[pos] = 0;
        printf("Posição %i removida.\n", pos);
    }
}

void change_by(int change, int by)
{
    pos = find(change);

    if (pos > CAP) {
        printf("Valor %i não encontrado.\n", change);
    } else {
        values[pos] = by;
        printf("Valor %i Adicionado na posição: %i\n", by, pos);
    }
}

void remove_by_pos(int pos)
{
    if (pos > CAP || pos < 0) {
        printf("Posição inválida.\n");
    } else {
        values[pos] = 0;
    }
}

void show()
{
    for (int i = 0; i < CAP; ++i) {
        printf("Posição: %i -> Valor: %i\n", i, values[i]);
    }
}

int main()
{
    while (choices != 's') {
        printf("i - inserir número novo\nr - Remover um valor\np - Remover elemento por posição\na - Alterar valor\nb - Buscar valor\ne - Exibir tudo\ns - Sair\n");
        scanf(" %c", &choices);
        switch(choices) {
            case 'i':
                printf("Por favor, selecione um valor: ");
                scanf("%i", &value);
                insert(value);
                break;

            case 'r':
                printf("Por favor, selecione um valor: ");
                scanf("%i", &value);
                remove_by_value(value);
                break;

            case 'p':
                printf("Por favor, selecione uma posição: ");
                scanf("%i", &value);
                remove_by_pos(value);
                break;

            case 'a':
                printf("Por favor, selecione uma posição: ");
                scanf("%i", &value);
                printf("Por favor, selecione uma valor: ");
                scanf("%i", &value2);
                change_by(value, value2);
                break;

            case 'b':
                printf("Por favor, selecione uma posição: ");
                scanf("%i", &value);
                find(value);
                break;

            case 'e':
                show();
                break;
        }
    }
    printf("Bye");
}