#include <stdio.h>
// mover peças com rercusividade
void mover_peca_cima(int casa){
    if (casa > 0){
        printf("Cima\n");
        mover_peca_cima(casa - 1);
    }
}

void mover_peca_direita(int casa){
    if (casa > 0){
        printf("Direita\n");
        mover_peca_direita(casa - 1);
    }
}
void mover_peca_esquerda(int casa){
    if (casa > 0){
        printf("Esquerda\n");
        mover_peca_esquerda(casa - 1);
    }
}
void mover_peca_baixo(int casa){
    if (casa > 0){
        printf("Baixo\n");
        mover_peca_baixo(casa - 1);
    }

}
void mover_peca_cima_direita(int casa){
    if (casa > 0){
        printf("Cima direita\n");
        mover_peca_cima_direita(casa - 1);
    }

}
void mover_peca_cima_esquerda(int casa){
    if (casa > 0){
        printf("Cima esquerda\n");
        mover_peca_cima_esquerda(casa - 1);
    }

}
void mover_peca_baixo_direita(int casa){
    if (casa > 0){
        printf("Baixo direita\n");
        mover_peca_baixo_direita(casa - 1);
    }

}
void mover_peca_baixo_esquerda(int casa){
    if (casa > 0){
        printf("Baixo esquerda\n");
        mover_peca_baixo_esquerda(casa - 1);
    }

}

int main(){

// variaveis do jogo
    int rainha = 0, bispo = 0, torre = 0,cavalo = 0, rainha_mov, bispo_mov, torre_mov, cavalo_mov;
    int escolha, escolhadepeca, movimentocompleto = 1;
// inicialização do jogo
    printf("jogo de xadrez\n");
    printf("1. Iniciar jogo\n");
    printf("2. Ver as regras\n");
    printf("3. Sair do jogo\n");
    scanf("%d", &escolha);

// escolha de uma das 3 peças

    switch (escolha)
    {
    case 1:
    printf("Jogo iniciado, escolha a peça para jogar\n");
    printf("1. Rainha\n");
    printf("2. Bispo\n");
    printf("3. Torre\n");
    printf("4. Cavalo\n");
    scanf("%d", &escolhadepeca);

    switch (escolhadepeca)
    {// escolha da direção da rainha
    case 1:
    printf("Você escolheu a Rainha, escolha a direção que você deseja ir\n");
    printf("1. Cima\n");
    printf("2. Direita\n");
    printf("3. Esquerda\n");
    printf("4. Baixo\n");
    printf("5. Cima direita\n");
    printf("6. Cima esquerda\n");
    printf("7. Baixo direita\n");
    printf("8. Baixo esquerda\n");
    scanf("%d", &rainha_mov);
// movimento da rainha com recursividade
   if (rainha_mov == 1){
    mover_peca_cima(8);
   } else if (rainha_mov == 2){
    mover_peca_direita(8);
   } else if (rainha_mov == 3){
    mover_peca_esquerda(8);
   } else if (rainha_mov == 4){
    mover_peca_baixo(8);
   } else if (rainha_mov == 5){
    mover_peca_cima_direita(8);
   } else {
    printf("opção invalida!\n");
   }
        break;
// escolha da direção do bispo
    case 2:
    printf("Você escolheu o Bispo, escolha a direção que você deseja ir\n");
    printf("1. Cima direita\n");
    printf("2. Cima esquerda\n");
    printf("3. Baixo direita\n");
    printf("4. Baixo esquerda\n");
    scanf("%d", &bispo_mov);
// movimento do bispo com recursividade
   if (bispo_mov == 1){
    mover_peca_cima_direita(5);
   } else if (bispo_mov == 2){
    mover_peca_cima_esquerda(5);
   } else if (bispo_mov == 3){
    mover_peca_baixo_direita(5);
   } else if (bispo_mov == 4){
    mover_peca_baixo_esquerda(5);
   } else {
    printf("opção invalida!\n");
   }
        break;
// escolha da direção da torre
    case 3:
    printf("Você escolheu o Bispo, escolha a direção que você deseja ir\n");
    printf("1. Cima\n");
    printf("2. Direita\n");
    printf("3. Esquerda\n");
    printf("4. Baixo\n");
    scanf("%d", &torre_mov);
// movimento da torre com recursividade
    if (torre_mov == 1){
        mover_peca_cima(5);
    } else if (torre_mov == 2){
        mover_peca_direita(5);
    } else if (torre_mov == 3){
        mover_peca_cima_esquerda(5);
    } else if (torre_mov == 4){
        mover_peca_baixo(5);
    } else {
        printf("opção invalida!\n");
    }
        break;

    case 4:
    printf("Você escolheu o Cavalo, escolha a direção que você deseja ir\n");
    printf("1. Cima direita\n");
    printf("2. Cima esquerda\n");
    printf("3. Baixo direita\n");
    printf("4. Baixo esquerda\n");
    scanf("%d", &cavalo_mov);

    if (cavalo_mov == 1){

        while (movimentocompleto--){
            for (cavalo; cavalo <= 2; cavalo++){
                printf("Cima\n");
            }
            printf("Direita\n");
        }
    } else if (cavalo_mov == 2){
        while (movimentocompleto--){
            for (cavalo; cavalo <= 2; cavalo++){
                printf("Cima\n");
            }
            printf("Esquerda\n");
        }
    } else if (cavalo_mov == 3){
        while (movimentocompleto--){
            for (cavalo; cavalo <= 2; cavalo++){
                printf("Baixo\n");
            }
            printf("Direita\n");
        }
    } else if (cavalo_mov == 4){
        while (movimentocompleto--){
            for (cavalo; cavalo <= 2; cavalo++){
                printf("Baixo\n");
            }
            printf("Esquerda\n");
        }
    }else {
        printf("opção invalida!\n");
    }

        break;
    
    default:
    printf("opção invalida!\n");
        break;
    }
        break;
    
case 2: // opção da inicialização do jogo
    printf("Regras Do Jogo\n");
    printf("Você deve escolher uma das peças e depois escolher qual a direção que ela deve ir\n");
        
        break;

    case 3: // opção da inicialização do jogo
    printf("Você saiu do jogo\n");
        break;
    
    default:
    printf("opção invalida!\n");
        break;
    }

    return 0;
}