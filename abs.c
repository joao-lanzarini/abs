#include <stdio.h>
#include <string.h>

struct Bebida{
	char tipo[15];
	char sabor[15];
	char copo[15];
	int gelo;
	int tamanho;
	int tampa;
};

int main(){
    struct Bebida pedido;
    int opcao, flag=0;

    while (flag == 0){

        printf("Bebidas:\n[1] Coca\n[2] Guarana\n[3] Suco de Uva\n[4] Suco de Laranja\n");

        scanf("%d", &opcao);

        switch (opcao){
            case 1:
            strcpy(pedido.tipo, "Refrigerante");
            strcpy(pedido.sabor, "Coca");
            strcpy(pedido.copo, "Papel");
            flag = 1;
            break;

            case 2:
            strcpy(pedido.tipo, "Refrigerante");
            strcpy(pedido.sabor, "Guarana");
            strcpy(pedido.copo, "Papel");
            flag = 1;
            break;

            case 3:
            strcpy(pedido.tipo, "Suco");
            strcpy(pedido.sabor, "Uva");
            strcpy(pedido.copo, "Plastico");
            flag = 1;
            break;

            case 4:
            strcpy(pedido.tipo, "Suco");
            strcpy(pedido.sabor, "Laranja");
            strcpy(pedido.copo, "Plastico");
            flag = 1;
            break;

            default:
            printf("Inválido\n");
        }
    }

    flag = 0;
    while (flag == 0){

        printf("Deseja gelo?\n[1] Sim\n[2] Nao\n");
        scanf("%d", &opcao);

        switch (opcao){
            case 1:
            flag = 1;
            if (strcmp(pedido.tipo, "Refrigerante") == 0){
                pedido.gelo = 6;
            }
            else if (strcmp(pedido.tipo, "Suco") == 0){
                pedido.gelo = 12;
            }
            break;

            case 2:
            pedido.gelo = 0;
            flag = 1;
            break;

            default:
            printf("Inválido\n");

        }
    }

    flag = 0;
    while (flag == 0){

        if (strcmp(pedido.tipo, "Refrigerante") == 0){

            printf("Tamanhos:\n[1] 300ml\n[2] 500ml\n[3] 700ml\n");
            scanf("%d", &opcao);

            if (opcao == 1){
                pedido.tamanho = 300;
                flag = 1;
            }
            else if (opcao == 2){
                pedido.tamanho = 500;
                flag = 1;
            }
            else if (opcao == 3){
                pedido.tamanho = 700;
                flag = 1;
            }
            else{
                printf("Inválido\n");
            }
        }

        else {

            printf("Tamanhos:\n[1] 300ml\n[2] 500ml\n");
            scanf("%d", &opcao);

            if (opcao == 1){
                pedido.tamanho = 300;
                flag = 1;
            }
            else if (opcao == 2){
                pedido.tamanho = 500;
                flag = 1;
            }
            else{
                printf("Inválido\n");
            }
        }
    }

    flag = 0;
    while (flag == 0){

        printf("Escolha:\n[1] Delivery\n[2] Consumo no restaurante\n");
        scanf("%d", &opcao);

        if (opcao == 1){
            pedido.tampa = 0;
            flag = 1;
        }
        else if (opcao == 2){
            pedido.tampa = 1;
            flag = 1;
        }
        else{
            printf("Inválido\n");
        }


    }

    printf("\nPreparando...\n");
    printf("Copo de %s de %dml\n", pedido.copo, pedido.tamanho);
    printf("%d pedras de gelo\n", pedido.gelo);
    printf("%s de %s\n", pedido.tipo, pedido.sabor);
    (pedido.tampa == 0) ? printf("Tampa sem furo\n") : printf("Tampa com furo\n");
    printf("\nPronto!\n");


    return 0;
}
