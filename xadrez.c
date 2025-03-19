#include <stdio.h>

int main(){
// variaveis do jogo
    int rainha = 0, bispo = 0, torre = 0, rainha_mov, bispo_mov, torre_mov;
    int escolha, escolhadepeca;
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
// movimento da rainha com (for)
    if (rainha_mov == 1){
        for ( rainha; rainha <= 8; rainha++)
        {
            printf("Cima\n");
        }
        
    } else if (rainha_mov == 2){
        for ( rainha; rainha <= 8; rainha++)
        {
            printf("Direita\n");
        }
    } else if (rainha_mov == 3){
        for ( rainha; rainha <= 8; rainha++)
        {
            printf("Esquerda\n");
        }
    } else if (rainha_mov == 4){
        for ( rainha; rainha <= 8; rainha++)
        {
            printf("Baixo\n");
        }
    } else if (rainha_mov == 5){
        for ( rainha; rainha <= 8; rainha++)
        {
            printf("Cima direita\n");
        }
    } else if (rainha_mov == 6){
        for ( rainha; rainha <= 8; rainha++)
        {
            printf("Cima Esquerda\n");
        }
    } else if (rainha_mov == 7){
        for ( rainha; rainha <= 8; rainha++)
        {
            printf("Baixo direita\n");
        }
    }else {
        for ( rainha; rainha <= 8; rainha++)
        {
            printf("Baixo esquerda\n");
        }
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
// movimento do bispo com (while)
    if (bispo_mov == 1){
        while (bispo <= 5)
        {
            printf("Cima direita\n");
            bispo++;
        }
        
    } else if (bispo_mov == 2){
        while (bispo <= 5)
        {
            printf("Cima esquerda\n");
            bispo++;
        }
    } else if (bispo_mov == 3){
        while (bispo <= 5)
        {
            printf("Baixo direita\n");
            bispo++;
        }
    } else {
        while (bispo <= 5)
        {
            printf("Baixo esquerda\n");
            bispo++;
        }
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
// movimento da torre com (do-while)
    if (torre_mov == 1){
        do
        {
            printf("Cima\n");
            torre++;
        } while (torre <= 5);
        
    } else if (torre_mov == 2){
        do
        {
            printf("Direita\n");
            torre++;
        } while (torre <= 5);
        
    } else if (torre_mov == 3){
        do
        {
            printf("Esquerda\n");
            torre++;
        } while (torre <= 5);
        
    } else {
        do
        {
            printf("Baixo\n");
            torre++;
        } while (torre <= 5);
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