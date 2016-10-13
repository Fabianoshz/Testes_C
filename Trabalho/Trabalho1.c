#include <stdio.h>

#define limite_max 1000
#define parcelas_emprestimo 25

int main()
{
    // Controle
    char escolha;

    float saque;
    float limite = limite_max; // Limite de crédito.
    float saldo = 2000.00;
    int cobrar_limite;

    float deposito;

    float limite_emprestimo;
    float emprestimo;
    float juros = 0;
    int contador_juros = 1;

    printf("Seja bem-vindo ao banco Le Roub Aremos, divirta-se!\n");

    // Enquanto a escolha não for 'sair'.
    while (escolha != 'a') {
        // Aqui é feita a escolha da operação.
        for (;;) {
            printf("\nS - Saque\nE - Empréstimo\nD - Depósito\nA - Sair");
            printf("\nSelecione uma opção: ");
            scanf(" %c", &escolha);

            // Caso o limite de crédito tenha sido totalmente consumido, apenas depósito e saída podem ser usados.
            if ((escolha == 's' && limite > 0) || (escolha == 'e' && limite > 0) || escolha == 'd' || escolha == 'a') {
                break; // Saimos deste loop! Boa usuário!
            } else {
                // Avisar se uma opção errada for escolhida ou limite estourado em caso de saque e empréstimo.
                if (limite == 0 && (escolha == 's' || escolha == 'e')) {
                    printf("\nSaques e empréstimos estão bloqueados até que o crédito especial seja reestabelecido.");
                } else {
                    printf("\nPor favor, selecione uma opção adequada dentre as nossas opções.");
                }
            }
        }

        // Lógica de acordo com a opção escolhida
        switch (escolha)
        {
            case 'a': // Saída
                printf("\nTchau, tchau! Cuidaremos do seu dinheiro.\nA propósito, seu saldo é de R$ %.2f.\nE seu limite especial é de R$ %.2f\n.", saldo, limite);
                break;

            case 's': // Saque
                printf("Qual o valor do saque? ");
                scanf("%f", &saque);

                // Aqui definiremos se o cliente usará ou não o crédito especial.
                if (saque > (saldo + limite)) {
                    printf("\nParece que você não tem limite para realizar este saque,\nseu saldo é de R$ %.2f e seu limite especial é de R$ %.2f,\nseu limite para saque é de R$ %.2f.\n", saldo, limite, saldo + limite);
                } else if (saque > saldo) {
                    printf("\nOpa! Parece que seu saldo é menor do que o valor do seu saque, iremos utilizar seu limite especial.\n");
                    limite -= saque - saldo;
                    cobrar_limite = 0;
                    saldo = 0;
                } else {
                    printf("Saque efetuado.\n");
                    saldo -= saque;
                }
                break;

            case 'd': // Depósito
                printf("Qual o valor do depósito?\n");
                scanf("%f", &deposito);

                // Mais fácil passar o transbordo do limite para o saldo
                // do que verificar as diferentes possibilidades.
                limite += deposito;
                if (limite > limite_max){
                    saldo += limite - limite_max;
                    limite = limite_max;
                }

                break;

            case 'e':// Empréstimo
                do {
                    // Apenas um empréstimo por vez! Não temos vetores disponíves para múltiplos empréstimos.
                    if (juros > 0) {
                        printf("\nPor favor, quite seu empréstimo anterior.");
                        break;
                    } else {
                        limite_emprestimo = saldo * 0.4;
                        do
                        {
                            printf("\nO valor máximo que você pode pedir de empréstimo é: R$ %.2f\nQual valor você deseja? ", limite_emprestimo);
                            scanf("%f", &emprestimo);
                        } while (emprestimo > limite_emprestimo);

                        saldo += emprestimo;
                        juros = emprestimo * 1.1;
                    }
                } while (emprestimo > limite_emprestimo);
                break;
        }

        // Caso exista algum juros a ser cobrado, esta é a hora.
        if (juros > 0) {
            contador_juros++;
            if (parcelas_emprestimo % contador_juros  == 0) {
                saldo -= juros/5; // 1/5 da parcela.
            }
            if (contador_juros == parcelas_emprestimo) {
                juros = 0; // Ok, juros pago.
                contador_juros = 1; // Para que novos empréstimos possam ser pedidos.
            }
        }

        // Aqui cobramos as taxas do limite especial.
        // Cobrar limite serve para que os juros não sejam cobrados exatamente após o saque.
        if (limite < limite_max && cobrar_limite == 1) {
            saldo -= (limite_max - limite) * 0.01;
        }
        cobrar_limite = 1;
    }
}
