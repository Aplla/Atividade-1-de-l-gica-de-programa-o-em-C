#include <stdio.h>

int main (){
    int user_action, numero_quarto, avaliacao, confirm;
    float nota_avaliacao;
    char pedido [50] = "";

    printf ("Olá, aqui é o suporte automático do hotel: Apaxe.\n");
    printf ("Nos informe em qual quarto está hospedado,\n" "caso ainda não esteja hospedado em nenhum quarto digite 0: ");
    scanf ("%d", &numero_quarto);

    if (numero_quarto == 0)
    {
        printf ("Encaminhando para o Check-in.\n");
        printf ("Por favor aguarde até um de nossos atendentes esteja disponivél.");
    }
    else {
        printf ("Digite 1 para deixar um feedback de nossos serviços.\n");
        printf ("Digite 2 para chamar o serviço de quarto.\n");
        printf ("Digite 3 para fazer um pedido em nosso restaurante.\n");
        printf ("Insira o número desejado para acionar nossos serviços:");
    scanf ("%d", &user_action);
    }
    switch (user_action)
    {
    case 1:
        printf ("Feedback selecionado!\n");
        printf ("Por favor dê uma nota para nossos serviços, selecione o serviço e em seguida deixe sua nota de 1 a 5.\n");
        printf ("Digite 1 para avaliar o serviço de quarto.\n");
        printf ("Dgitie 2 para avaliar o restaurante.\n");
        printf ("Digite o valor desejado:");
        scanf ("%d", &avaliacao);

        if (avaliacao == 1)
        {
            printf ("Avalie nosso serviço de quarto digitando um valor de 1 a 5:");
            scanf ("%2.f", &nota_avaliacao);
        }
        if (avaliacao == 2)
        {
            printf ("Avalie nosso restaurante digitando uma nota de 1 a 5:");
            scanf ("%2.f", &nota_avaliacao);
        }
        if (avaliacao != 1 && avaliacao != 2)
        {
            printf ("O valor informado é inválido!\n");
        }
        printf("Obrigado pela avaliação hóspede do quarto: %d. \n", numero_quarto);
        break;
    case 2:
        printf ("Serviço de quarto selecionado!\n");
        printf ("Aguarde até que um de nossos funcionários vá até seu quarto.\n");
        break;
    case 3:
        printf ("Pedido selecionado!\n");
        printf ("Olhe o nosso cardapio disponivél em :(link)\n");
        printf ("Após analisar o cardápio escolha seu prato:");
        scanf ("%s", &pedido);
        printf ("Confirme que seu pedido foi: %s\n", pedido);
        printf ("Digite 1 para sim e 0 para não:");
        scanf ("%d", &confirm);

        if (confirm == 1)
        {
            printf ("Enviando pedido para o restaurante.");
        }
        if (confirm == 0)
        {
            printf ("Refaça seu pedido:");
            scanf ("%s", &pedido);
            printf ("Enviando pedido para o restaurante.\n");
        }
        while (confirm != 1 && confirm != 0)
        {
            printf ("Valor invalido!\n");
            printf ("Confirme novamente se seu pedido foi: %s.\n", pedido);
            printf ("Digite 1 para sim e 0 para não:");
            scanf ("%s", &pedido);

            
        }
        

        break;
    default:
        break;
    }

    printf ("Encerrando a sessão do atendimento automático.\n");
    
}