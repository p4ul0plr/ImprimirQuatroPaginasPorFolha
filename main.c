#include <stdio.h>
#include <stdlib.h>

int qnt = 0;
int pagIni = 0;
int pagFin = 0;
int opcoes = 0;
int i_f = 1, f_f = 2;
int i_v = 3, f_v = 4;

void imprime () {
    printf("Paginas frente: \n");
    for (; f_f < qnt+1; i_f++, f_f++) {
        printf("%d-%d", i_f, f_f);
        i_f += 3;
        f_f += 3;
        if (f_f < qnt) {
            printf(",");
        }
    }
    printf("\n");
    if (qnt > 2) {
        printf("Paginas verso: \n");
        for (; f_v < qnt+1; i_v++, f_v++) {
            printf("%d-%d", i_v, f_v);
            i_v += 3;
            f_v += 3;
            if (f_v < qnt) {
                printf(",");
            }
        }
        //printf("Aqui");
        if (pagIni > 0) {
            pagFin++;
        }
        if ((pagFin - pagIni)%2 != 0 ) {
            printf(",%d", i_v);
        }
        i_v = 0;
        f_v = 0;
    }
}

int main()
{
    printf("Deseja imprimir o arquivo completo (1) ou algumas painas (2)? ");
    scanf("%d", &opcoes);
    if (opcoes == 1) {
        printf("Digite a qantidade de painas do arqivo: ");
        scanf("%d", &qnt);
        pagFin = qnt;
        imprime();
    } else {
        if (opcoes == 2) {
            printf("Digite o numero pagina inicial: ");
            scanf("%d", &pagIni);
            printf("Digite o numero pagina final: ");
            scanf("%d", &pagFin);
            qnt = pagFin;
            i_f = pagIni;
            f_f = pagIni + 1;
            i_v = i_f + 2;
            f_v = f_f + 2;
            imprime();
        }
    }

    printf("\n");
    system("pause");
    return 0;
}
