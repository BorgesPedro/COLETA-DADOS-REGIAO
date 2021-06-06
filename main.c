#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/******
Codado por Pedro Henrique Borges - Engenharia da Computação 1º Periodo IFTM UBERABA

Foi feita uma pesquisa entre os habitantes de uma região. Foram coletados
os dados de idade, sexo (M/F) e salário. Faça um algoritmo que informe:
a) a média de salário do grupo;
b) a maior e a menor idade do grupo;
c) a quantidade de mulheres com salário até R$100,00.
Encerre a entrada de dados quando for digitada uma idade negativa.

******/

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int idade = 0, maioridade = 0, menoridade = 999999, mulheres100 = 0, quantidade = 0;
    char sexo[1];
    float salario, media;

    while(idade >= 0){
        printf("Digite a idade do cidadão: ");
        scanf("%i", &idade);
            if(idade < 0)
                break;
            if(idade > maioridade)maioridade = idade;
            if(idade < menoridade)menoridade = idade;
        printf("Digite o sexo do cidadão(f/m): ");
        scanf("%s", sexo);
        while(sexo[0] != 'f' && sexo[0] != 'm'){
            printf("Sexo inválido, digite novamente: ");
            scanf("%s", sexo);
        }
        printf("Por fim, informe o salário:");
        scanf("%f", &salario);
        printf("\n");
        quantidade++;

        media += salario;

        if(sexo[0] == 'f' && salario <= 100)
            mulheres100++;


    }

    printf("Quantidade de pessoas: %d\n", quantidade);
    printf("A média de salário eh: %.2f\n", media/quantidade);
    printf("A menor idade eh: %d\n", menoridade);
    printf("A maior idade eh: %d\n", maioridade);
    printf("O número de mulheres que recebem até R$ 100 eh: %d\n\n", mulheres100);

    system("pause");
    return 0;
}
