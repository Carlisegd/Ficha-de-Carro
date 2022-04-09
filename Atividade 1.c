#include <stdio.h>
#include<locale.h>
#define QTD_DADOS 50
// meida de veiculos, media de cidades com menos de 2k veiculos, maior e a  menor taxa de acidentes e qual cidade
// codigo da cidade, número de acidentes, número de veículos
// - ler codigo cidade, qtd de acidentes por cidade, e qtd de veiculos
// - mostrar cidade co menor numero de acidentes e com maior, média de carros do total de todas as ciaddes, média de acidentes
// das cidades q tem menos de 2000 veiculos.
int main (){

    int cod_cidade[QTD_DADOS], num_veiculos[QTD_DADOS], num_acidentes[QTD_DADOS], menor, maior, qtd_cadastros, qtd_soma2;
    int cod_cidade_menor, cod_cidade_maior;
    int soma_veiculos, soma_veiculos2;
    
    setlocale(LC_ALL, "Portuguese");


    printf ("Quantas cidades você deseja cadastrar: \n");
    scanf("%d", &qtd_cadastros);
    
int i = 0;
    for (i = 0; i < qtd_cadastros; i++){

        printf ("Digite o código da cidade: \n");
        scanf("%d", &cod_cidade[i]);

        printf ("Digite o número de veículos: \n");
        scanf("%d", &num_veiculos[i]);

        printf ("Digite o número de acidentes de trânsito com vítimas: \n");
        scanf("%d", &num_acidentes[i]);

    }

    maior = num_acidentes[0];
    menor = num_acidentes[0];
    cod_cidade_maior = cod_cidade[0];
    cod_cidade_menor = cod_cidade[0];
    soma_veiculos = 0;
    soma_veiculos2 = 0;
    qtd_soma2 = 0;
     
	 
    for (i = 0; i < qtd_cadastros; i++){

        if (num_acidentes[i] > maior){
            maior = num_acidentes[i];
            cod_cidade_maior = cod_cidade[i];
        }

        if (num_acidentes[i] < menor){
            menor = num_acidentes[i];
            cod_cidade_menor = cod_cidade[i];
        }

        soma_veiculos += num_veiculos[i];

        if (num_veiculos[i] < 2000){
            soma_veiculos2 += num_veiculos[i];
            qtd_soma2++;
        }


    }

    printf("\n\n... RESULTADO PESQUISA ESTADO DO PARANA ... \n\n");

    printf ("a soma dos números é: %d \n", soma_veiculos);

    printf ("a soma dos acidentes é: %d \n", soma_veiculos2);

    printf ("A média de veículos nas cidades é: %.2f \n", (float) (soma_veiculos/qtd_cadastros));

    printf ("A média do número de acidentes nas cidades com menos de 2000 veiculos é: %.2f \n", (float) (soma_veiculos2/qtd_soma2));

    printf("O menor número de acidentes foi %d na cidade %d \n", menor, cod_cidade_menor);

    printf("O maior número de acidentes foi %d na cidade %d", maior, cod_cidade_maior);




return 0;
}

