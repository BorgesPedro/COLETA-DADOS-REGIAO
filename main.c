#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/******
Codado por Pedro Henrique Borges - Engenharia da Computa��o 1� Periodo IFTM UBERABA

Foi feita uma pesquisa entre os habitantes de uma regi�o. Foram coletados
os dados de idade, sexo (M/F) e sal�rio. Fa�a um algoritmo que informe:
a) a m�dia de sal�rio do grupo;
b) a maior e a menor idade do grupo;
c) a quantidade de mulheres com sal�rio at� R$100,00.
Encerre a entrada de dados quando for digitada uma idade negativa.

******/

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int idade = 0, maioridade = 0, menoridade = 999999, mulheres100 = 0, quantidade = 0;
    char sexo[1];
    float salario, media;

    while(idade >= 0){
        printf("Digite a idade do cidad�o: ");
        scanf("%i", &idade);
            if(idade < 0)
                break;
            if(idade > maioridade)maioridade = idade;
            if(idade < menoridade)menoridade = idade;
        printf("Digite o sexo do cidad�o(f/m): ");
        scanf("%s", sexo);
        while(sexo[0] != 'f' && sexo[0] != 'm'){
            printf("Sexo inv�lido, digite novamente: ");
            scanf("%s", sexo);
        }
        printf("Por fim, informe o sal�rio:");
        scanf("%f", &salario);
        printf("\n");
        quantidade++;

        media += salario;

        if(sexo[0] == 'f' && salario <= 100)
            mulheres100++;


    }

    printf("Quantidade de pessoas: %d\n", quantidade);
    printf("A m�dia de sal�rio eh: %.2f\n", media/quantidade);
    printf("A menor idade eh: %d\n", menoridade);
    printf("A maior idade eh: %d\n", maioridade);
    printf("O n�mero de mulheres que recebem at� R$ 100 eh: %d\n\n", mulheres100);

    system("pause");
    return 0;
}
