#include <stdio.h>

int main()
{
    int saida = 0;

    char escolha;

    float saque;
    float limite = 1000.00;
    float saldo = 2000.00;

    float deposito;

    float limite_emprestimo;
    float emprestimo;

    printf("Seja bem-vindo ao banco Roub Aremos, divirta-se!\n");

    while (saida == 0) {
        // Fazer escolha
        for (;;) {
            printf("\nSelecione uma opção: ");
            scanf(" %c", &escolha);

            if ((escolha == 's' && limite > 0) || (escolha == 'e' && limite > 0) || escolha == 'd' || escolha == 'a') {
                break;
            } else {
                if (limite == 0) {
                    printf("Saques e empréstimos estão bloqueados até que o crédito especial seja reestabelecido.");
                } else {
                    printf("\nPor favor, selecione uma opção adequada dentre as nossas opções.\n");
                }
            }
        }

        // Lógica de acordo com a opção escolhida
        switch (escolha)
        {
            // Saída
            case 'a':
                printf("\nTchau, tchau! Cuidaremos do seu dinheiro.\nA propósito, seu saldo é de %.2f.\n", saldo);
                saida = 1;
                break;
            // Saque
            case 's':
                printf("Qual o valor do saque?\n");
                scanf("%f", &saque);

                // Aqui definiremos se o cliente usará ou não o crédito especial.
                if (saque > (saldo + limite)) {
                    printf("\nParece que você não tem limite para realizar este saque,\nseu saldo é de %.2f e seu limite especial é de %.2f,\nseu limite para saque é de %.2f.\n", saldo, limite, saldo + limite);
                } else if (saque > saldo) {
                    printf("\nOpa! Parece que seu saldo é menor do que o valor do seu saque, iremos utilizar seu limite especial.\n");
                    limite -= saque - saldo;
                    saldo = 0;
                } else {
                    printf("Saque efetuado.\n");
                    saldo -= saque;
                }
                break;
            // Depósito
            case 'd':
                // Se menor que 1000, reestabelecer o limite.
                if (limite < 1000) {
                    printf("Qual o valor do depósito?\n");
                    scanf("%f", &deposito);

                    if (deposito > 1000) {
                        limite += 1000;
                        saldo += deposito - 1000;
                    } else {
                        limite += deposito;
                    }

                } else {

                }
                break;
            // Empréstimo
            case 'e':
                do {
                    limite_emprestimo = saldo * 0.4;
                    printf("\nO valor que você pode pedir de empréstimo é: %.2f\nQual valor você deseja? ", limite_emprestimo);
                    scanf("%f", &emprestimo);
                } while (emprestimo > limite_emprestimo);
                break;
        }
        // Cálculo de juros
        printf("Cálculo de juros aqui!");

    }
}
