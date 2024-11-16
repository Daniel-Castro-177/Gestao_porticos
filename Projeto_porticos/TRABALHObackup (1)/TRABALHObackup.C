#include <stdio.h>
#include <string.h>
#include <datetimeapi.h>
struct Portico
{
    // int num;
    float preco_ligeiro;
    float preco_pesado;
    float preco_motociclo;
};

struct Passagem
{
    int num_portico;
    char classe[30];
    char matricula[30];
    char data[30];
    char hora[30];
};
struct Portico portico[20];
struct Passagem passagem[20];

// o número à frente da função significa o número do objetivo do trabalho -1
void adicionar_portico_0();
void mostrar_info_1();
void mostrar_info_2();
void alterar_3();
void adicionar_passagem_4();
void listar_passagens_5();
void listar_passagens_6();
void pesquisar_matricula_7();
void mostrar_n_veiculos_13();
void media_porticos_15();
void menu();
void voltar_menu();
void total_por_portico_8();
void portico_com_mais_passagens_14();
void total_gasto_por_classe_10();
void total_portico_dia_12();
void guardar_dados();
void editar();
void listar();
void pesquisar();
void total_gasto_por_veiculo_9();
void n_veiculos_classe_11();

void mostrar_info_1()
{

    for (int i = 0; i < 20; i++)
    {
        if (portico[i].preco_ligeiro != 0.00)
        {

            printf("Pórtico número: %d \n", i + 1);
            printf("Preço Ligeiro: %0.2f"
                   "€ \n",
                   portico[i].preco_ligeiro);
            printf("Preço Motociclo: %0.2f"
                   "€ \n",
                   portico[i].preco_motociclo);
            printf("Preço Pesado: %0.2f"
                   "€ \n",
                   portico[i].preco_pesado);
            printf("\n");
            printf("\n");
        }
    }
    voltar_menu();
}

void menu()
{

    int opc;
    /*  printf("------------------------------MENU------------------------------- \n");
     printf("0- Adicionar um pórtico \n");                                            // FEITO  Z
     printf("1- Mostrar todas as informações dos pórticos \n");                       // FEITO I V Z
     printf("2- Preço de um pórtico por classe de veículo \n");                       // FEITO I V Z (sem fluxograma)
     printf("3- Alterar os preços de um determinado pórtico \n");                     // FEITO I V Z
     printf("4- Inserir a passagem de um veículo \n");                                // FEITO I V Z
     printf("5- Mostrar todas as passagens de todos os veículos \n");                 // FEITO I V
     printf("6- Mostrar as passagens num determinado pórtico \n");                    // FEITO I V 
     printf("7- Listar todas as passagens de um veículo num determinado pórtico \n"); // FEITO I V
     printf("8- Mostrar o total armazenado por pórtico \n");                          // FEITO I V
     printf("9- Mostrar o total gasto por veículo em todos os pórticos ao longo dos tempos \n"); //FEITO I V
     printf("10- Mostrar o total gasto por uma determinada classe de veículos \n"); // FEITO I V
     printf("11- Mostrar, para cada classe de veículos, o total de veículos que passaram num determinado pórtico \n"); FEITO I V
     printf("12- Mostrar o total que um pórtico faturou num dia \n");                  // FEITO i V
     printf("13- Mostrar o número de veiculos que passou em cada um dos pórticos \n"); // FEITO I V
     printf("14- Mostrar o pórtico com mais passagens \n");                            // FEITO V
     printf("15- Mostrar a média de passagens nos pórticos \n");                       // FEITO
     printf("Selecione a opção \n"); */

        printf("---------------------------------------------MENU PRINCIPAL--------------------------------------------- \n");

    printf("1- Guardar dados \n");
    printf("2- Editar \n");
    printf("3- Listar \n");
    printf("4- Pesquisar \n");
    printf("0- Sair \n");
        printf("-------------------------------------------------------------------------------------------------------- \n");

    printf("SELECIONE UMA OPÇÃO: \n");

   if (scanf("%d", &opc) !=1) 
   {
    printf("Não introduziu uma opção válida. \n");
    printf("Tente novamente: \n");
    fflush(stdin);
    menu();
   
   }

    switch (opc)
    {
    case 0:
        break;
    case 1:
        guardar_dados();
        break;
    case 2:
        editar();
        break;
    case 3:
        listar();
        break;
    case 4:
        pesquisar();
        break;
    default:
    menu();
        break;
    }

    /*   switch (opc)
       {
       case 0:
           adicionar_portico_0();
           break;
       case 1:
           mostrar_info_1();
           break;
       case 2:
           mostrar_info_2();
           break;
       case 3:
           alterar_3();
           break;
       case 4:
           adicionar_passagem_4();
           break;
       case 5:
           listar_passagens_5();
           break;
       case 6:
           listar_passagens_6();
           break;
       case 7:
           pesquisar_matricula_7();
           break;
       case 8:
           total_por_portico_8();
           break;
       case 10:
           total_gasto_por_classe_10();
           break;
       case 12:
           total_portico_dia_12();
           break;
       case 13:
           mostrar_n_veiculos_13();
           break;
       case 14:
           portico_com_mais_passagens_14();
           break;
       case 15:
           media_porticos_15();
           break;
       default:
           break;
       }*/
}

int main()

{

    portico[0].preco_ligeiro = 0.30;
    portico[0].preco_motociclo = 0.20;
    portico[0].preco_pesado = 0.50;

    portico[1].preco_ligeiro = 0.25;
    portico[1].preco_motociclo = 0.10;
    portico[1].preco_pesado = 0.30;

    portico[2].preco_ligeiro = 0.40;
    portico[2].preco_motociclo = 0.30;
    portico[2].preco_pesado = 1.00;

    portico[3].preco_ligeiro = 0.05;
    portico[3].preco_motociclo = 0.10;
    portico[3].preco_pesado = 0.25;

    passagem[0].num_portico = 1;
    strcpy(passagem[0].classe, "pesado");
    strcpy(passagem[0].matricula, "AA-22-AA");
    strcpy(passagem[0].data, "31/12/2023");
    strcpy(passagem[0].hora, "17:00");

    passagem[1].num_portico = 1;
    strcpy(passagem[1].classe, "ligeiro");
    strcpy(passagem[1].matricula, "AA-11-AA");
    strcpy(passagem[1].data, "01/12/2023");
    strcpy(passagem[1].hora, "17:01");

    passagem[2].num_portico = 3;
    strcpy(passagem[2].classe, "pesado");
    strcpy(passagem[2].matricula, "AA-22-AA");
    strcpy(passagem[2].data, "01/12/2023");
    strcpy(passagem[2].hora, "17:02");

    passagem[3].num_portico = 1;
    strcpy(passagem[3].classe, "pesado");
    strcpy(passagem[3].matricula, "AA-33-AA");
    strcpy(passagem[3].data, "01/12/2023");
    strcpy(passagem[3].hora, "17:55");
    menu();
}

void mostrar_info_2()
{
    int p;
    char c[20];
    int contagem = 0;

    for (int i = 0; i < 20; i++)
    {
        if (portico[i].preco_ligeiro != 0)
        {
            contagem = contagem + 1;
        }
    }
    // printf("%d" , contagem);
printf("\n");
printf("\n");
    printf("Indique o pórtico que pretende pesquisar: ");
    scanf("%d", &p);

    printf("Indique a classe pretendida: ");
    scanf("%s", &c);

    if (p <= 0 || p > contagem)
    {
        printf("\n");
        printf("\n");
        printf("Não inseriu um pórtico válido.\n");
        printf("Tente novamente: ");
        printf("\n");
        printf("\n");
        mostrar_info_2();
    }
    else if (strcmp(c, "ligeiro") != 0 && strcmp(c, "motociclo") != 0 && strcmp(c, "pesado") != 0)
    {
        printf("\n");
        printf("\n");
        printf("Não inseriu uma classe válida.\n");
        printf("Tente novamente: \n");
        printf("\n");
        printf("\n");
        mostrar_info_2();
    }
    else
    {

        for (int i = 0; i < p; i++)
        {

            if (strcmp(c, "ligeiro") == 0)

            {
                p = p - 1;
                printf("O preço da passagem no pórtico selecionado tendo em conta a classe de veiculo é: %0.2f"
                       "€.",
                       portico[p].preco_ligeiro);
                i = 5;
            }
            else if (strcmp(c, "motociclo") == 0)

            {
                p = p - 1;
                printf("O preço da passagem no pórtico selecionado tendo em conta a classe de veiculo é: %0.2f"
                       "€.",
                       portico[p].preco_motociclo);
                i = 5;
            }
            else if (strcmp(c, "pesado") == 0)

            {
                p = p - 1;
                printf("O preço da passagem no pórtico selecionado tendo em conta a classe de veiculo é: %0.2f"
                       "€.",
                       portico[p].preco_pesado);
                i = 5;
            }
        }
    }
    voltar_menu();
}

void alterar_3()
{

    int p;
    char c[20];
    float price;
    float preco_final;
    int contagem = 0;

    for (int i = 0; i < 20; i++)
    {
        if (portico[i].preco_ligeiro != 0)
        {
            contagem = contagem + 1;
        }
    }
    printf("\n");
printf("\n");
    printf("Indique o pórtico ao qual deseja fazer alterações: ");
    scanf("%d", &p);

    printf("Indique a classe de veiculo à qual deseja alterar o preço: ");
    scanf("%s", c);

    printf("Indique o novo preço: ");
    scanf("%f", &price);

    if (p <= 0 || p > contagem)
    {
        printf("\n");
        printf("\n");
        printf("Não inseriu um pórtico válido.\n");
        printf("Tente novamente: ");
        printf("\n");
        printf("\n");
        alterar_3();
    }
    else if (strcmp(c, "ligeiro") != 0 && strcmp(c, "motociclo") != 0 && strcmp(c, "pesado") != 0)
    {
        printf("\n");
        printf("\n");
        printf("Não inseriu uma classe válida.\n");
        printf("Tente novamente: \n");
        printf("\n");
        printf("\n");
        alterar_3();
    }
    else
    {

        for (int i = 0; i = p; i++)
        {
            if (strcmp(c, "ligeiro") == 0)
            {
                i = i - 1;
                portico[i].preco_ligeiro = price;

                break;
            }

            if (strcmp(c, "motociclo") == 0)
            {
                i = i - 1;
                portico[i].preco_motociclo = price;

                break;
            }
            if (strcmp(c, "pesado") == 0)
            {
                i = i - 1;
                portico[i].preco_pesado = price;

                break;
            }
        }

        voltar_menu();
    }
}

void listar_passagens_5()
{
    printf("\n");
    printf("\n");
    for (int i = 0; i < 20; i++)
    {
        if (passagem[i].num_portico != 0)
        {
            printf("Pórtico da passagem: %d \n", passagem[i].num_portico);
            printf("Classe: %s \n", passagem[i].classe);
            printf("Matrícula: %s \n", passagem[i].matricula);
            printf("Data: %s \n", passagem[i].data);
            printf("Hora: %s \n", passagem[i].hora);
            printf("\n");
            printf("\n");
        }
    }
    voltar_menu();
}

void listar_passagens_6()
{
    int p;
    int encontrada = 0;
    int contagem = 0;

    for (int i = 0; i < 20; i++)
    {
        if (portico[i].preco_ligeiro != 0)
        {
            contagem = contagem + 1;
        }
    }
printf("\n");
printf("\n");
    printf("Indique o pórtico que pretende pesquisar: ");
    scanf("%d", &p);

    if (p <= 0 || p > contagem)
    {
        printf("\n");
        printf("\n");
        printf("Não inseriu um pórtico válido.\n");
        printf("Tente novamente: ");
        printf("\n");
        printf("\n");
        listar_passagens_6();
    }
    else
    {

        for (int i = 0; i < 20; i++)
        {
            if (passagem[i].num_portico == p)
            {
                printf("\n");
                printf("\n");
                printf("Número do pórtico: %d \n", passagem[i].num_portico);
                printf("Classe: %s \n", passagem[i].classe);
                printf("Matricula: %s \n", passagem[i].matricula);
                printf("Data: %s \n", passagem[i].data);
                printf("Hora: %s \n", passagem[i].hora);
                printf("\n");
                encontrada = 1;
            }
        }
        if (encontrada == 0)
        {
            printf("\n");
            printf("Não foi encontrada nenhuma passagem no pórtico que pesquisou. \n");
        }
        voltar_menu();
    }
}

void adicionar_portico_0()
{
    float p_ligeiro;
    float p_motociclo;
    float p_pesado;
  
printf("\n");
printf("\n");
    printf("Indique o preço de ligeiros do novo pórtico: \n");
    scanf("%f", &p_ligeiro);
    printf("Indique o preço de motociclos do novo pórtico: \n");
    scanf("%f", &p_motociclo);

    printf("Indique o preço de pesados do novo pórtico: \n");
    scanf("%f", &p_pesado);

    if (p_ligeiro == 0 || p_motociclo == 0 || p_pesado == 0)
    {
        printf("Não inseriu preços válidos!");
                printf("Tente novamente: ");

        adicionar_portico_0();
    }
    else
    {  

    for (int i = 0; i < 20; i++)
    {
        if (portico[i].preco_ligeiro == 0.00)
        {
            portico[i].preco_ligeiro = p_ligeiro;
            portico[i].preco_motociclo = p_motociclo;
            portico[i].preco_pesado = p_pesado;

            break;
        }
    }
    printf("\n");
    printf("O novo pórtico foi adicionado ao sistema com sucesso!");
    voltar_menu();
    }
}

void pesquisar_matricula_7()
{
    int portic;
    char matricula[10];
    int soma = 0;
    int contagem = 0;
    int contagem_matricula = 0;

    for (int i = 0; i < 20; i++)
    {
        if (portico[i].preco_ligeiro != 0)
        {
            contagem = contagem + 1;
        }
    }
    printf("\n");
printf("\n");
    printf("Indique o carro que quer pesquisar: ");
    scanf("%s", &matricula);

    printf("Indique o pórtico que deseja pesquisar: ");
    scanf("%d", &portic);
    for (int i = 0; matricula[i] != '\0'; i++)
    {

        if (matricula[i] == '-')
        {
            contagem_matricula = contagem_matricula + 1;
        }
    }

    if (portic <= 0 || portic > contagem)
    {
        printf("\n");
        printf("\n");
        printf("Não inseriu um pórtico válido.\n");
        printf("Tente novamente: ");
        printf("\n");
        printf("\n");
        pesquisar_matricula_7();
    }

    else if (contagem_matricula <= 0 || contagem_matricula > 2)
    {
        printf("\n");
        printf("\n");
        printf("Não inseriu uma matrícula válida.\n");
        printf("Tente novamente: \n");
        printf("\n");
        printf("\n");
        pesquisar_matricula_7();
    }

    else
    {
        for (int i = 0; i < 20; i++)
        {

            if (strcmp(matricula, passagem[i].matricula) == 0 && portic == passagem[i].num_portico)
            {
                soma = soma + 1;
            }
        }
        if (soma == 0)
        {
            printf("O carro que pesquisou não passou nenhuma vez pelo portico %d.", portic);
        }
        else
        {
            printf("O carro que pesquisou passou %d vezes pelo portico %d.", soma, portic);
        }
        voltar_menu();
    }
}

void mostrar_n_veiculos_13()
{

    int soma_portico1 = 0;
    int soma_portico2 = 0;
    int soma_portico3 = 0;
    int soma_portico4 = 0;
    int soma[20];

    for (int j = 0; j < 20; j++)
    {
        for (int i = 0; i < 20; i++)
        {
            if (passagem[i].num_portico == j)
            {

                soma[j - 1] = soma[j - 1] + 1;
            }
        }
    }
printf("\n");
printf("\n");
    for (int i = 0; i < 20; i++)
    {
        if (portico[i].preco_ligeiro != 0)
        {
            printf("Pórtico %d: %d \n", i + 1, soma[i]);
        }
    }

    voltar_menu();
}

void adicionar_passagem_4()
{
    int portic;
    char classe[20];
    char matricula[20];
    char data[20];
    char hora[20];
    int contagem = 0;
    int contagem_matricula = 0;
    int contagem_data = 0;
    int contagem_hora = 0;

    for (int i = 0; i < 20; i++)
    {
        if (portico[i].preco_ligeiro != 0)
        {
            contagem = contagem + 1;
        }
    }
printf("\n");
printf("\n");
    printf("Indique o pórtico da nova passagem: ");
    scanf("%d", &portic);
    printf("Indique a classe da nova passagem: ");
    scanf("%s", &classe);
    printf("Indique a matricula do carro da nova passagem: ");
    scanf("%s", &matricula);
    printf("Indique a data da nova passagem: ");
    scanf("%s", &data);
    printf("Indique a hora da nova passagem: ");
    scanf("%s", &hora);
    for (int i = 0; matricula[i] != '\0'; i++)
    {

        if (matricula[i] == '-')
        {
            contagem_matricula = contagem_matricula + 1;
        }
    }
    for (int i = 0; data[i] != '\0'; i++)
    {

        if (data[i] == '/')
        {
            contagem_data = contagem_data + 1;
        }
    }
    for (int i = 0; hora[i] != '\0'; i++)
    {

        if (hora[i] == ':')
        {
            contagem_hora = contagem_hora + 1;
        }
    }

    if (portic <= 0 || portic > contagem)
    {
        printf("\n");
        printf("\n");
        printf("Não inseriu um pórtico válido.\n");
        printf("Tente novamente: ");
        printf("\n");
        printf("\n");
        adicionar_passagem_4();
    }
    else if (strcmp(classe, "ligeiro") != 0 && strcmp(classe, "motociclo") != 0 && strcmp(classe, "pesado") != 0)
    {
        printf("\n");
        printf("\n");
        printf("Não inseriu uma classe válida.\n");
        printf("Tente novamente: \n");
        printf("\n");
        printf("\n");
        adicionar_passagem_4();
    }
    else if (contagem_matricula <= 0 || contagem_matricula > 2)
    {
        printf("\n");
        printf("\n");
        printf("Não inseriu uma matrícula válida.\n");
        printf("Tente novamente: \n");
        printf("\n");
        printf("\n");
        adicionar_passagem_4();
    }
    else if (contagem_data <= 0 || contagem_data > 2)
    {
        printf("\n");
        printf("\n");
        printf("Não inseriu uma data válida.\n");
        printf("Tente novamente: \n");
        printf("\n");
        printf("\n");
        adicionar_passagem_4();
    }
    else if (contagem_hora <= 0 || contagem_hora > 1)
    {
        printf("\n");
        printf("\n");
        printf("Não inseriu uma hora válida.\n");
        printf("Tente novamente: \n");
        printf("\n");
        printf("\n");
        adicionar_passagem_4();
    }
    else
    {

        for (int i = 0; i < 20; i++)
        {
            if (passagem[i].num_portico == 0)
            {
                passagem[i].num_portico = portic;
                strcpy(passagem[i].classe, classe);
                strcpy(passagem[i].matricula, matricula);
                strcpy(passagem[i].data, data);
                strcpy(passagem[i].hora, hora);

                break;
            }
        }
        printf("\n");
        printf("\n");
        printf("A passagem foi inserida no sistema com sucesso!");
        voltar_menu();
    }
}
void media_porticos_15()
{

    /*   int soma_portico1 = 0;
      int soma_portico2 = 0;
      int soma_portico3 = 0;
      int soma_portico4 = 0; */
    int soma[20] = {0};
    /*  float media_portico1 = 0.00;
      float media_portico2 = 0.00;
      float media_portico3 = 0.00;
      float media_portico4 = 0.00; */
    float media[20] = {0};
    float total;

    /*   for (int i = 0; i < 20; i++)
      {
          if (passagem[i].num_portico != 0)
          {
              if (passagem[i].num_portico == 1)
              {

                  soma_portico1 = soma_portico1 + 1;
                  total = total + 1;
              }
              if (passagem[i].num_portico == 2)
              {
                  soma_portico2 = soma_portico2 + 1;
                  total = total + 1;
              }
              if (passagem[i].num_portico == 3)
              {
                  soma_portico3 = soma_portico3 + 1;
                  total = total + 1;
              }
              if (passagem[i].num_portico == 4)
              {
                  soma_portico4 = soma_portico4 + 1;
                  total = total + 1;
              }
          }
      } */
   printf("\n");
printf("\n");
    for (int j = 0; j < 20; j++)
    {
        for (int i = 0; i < 20; i++)
        {
            if (passagem[i].num_portico != 0)
            {
                if (passagem[i].num_portico == j && portico[j].preco_ligeiro != 0)
                {

                    soma[j - 1] = soma[j - 1] + 1;
                    total = total + 1;
                  
                }
            }
        }
    }
    for (int i = 0; i < 20; i++)
    {

        if (portico[i].preco_ligeiro != 0)
        {
            media[i] = soma[i] / total;
            printf("Média do pórtico %d: %0.2f \n", i + 1, media[i]);
        }
    }

    // printf("%d", passagem[4].num_portico);

    voltar_menu();
}

void total_por_portico_8()
{
    printf("\n");
    printf("\n");
    float total[20] = {0};

    for (int j = 0; j < 20; j++)
    {
        for (int i = 0; i < 20; i++)
        {
            if (passagem[i].num_portico == j && strcmp(passagem[i].classe, "ligeiro") == 0)
            {
                total[j] = total[j] + portico[j - 1].preco_ligeiro;
            }
            if (passagem[i].num_portico == j && strcmp(passagem[i].classe, "motociclo") == 0)
            {
                total[j] = total[j] + portico[j - 1].preco_motociclo;
            }
            if (passagem[i].num_portico == j && strcmp(passagem[i].classe, "pesado") == 0)
            {
                total[j] = total[j] + portico[j - 1].preco_pesado;
            }
        }
    }

    for (int i = 0; i < 20; i++)
    {
        if (portico[i].preco_ligeiro != 0)
        {
            printf("Total faturado pelo pórtico %d: %0.2f \n", i + 1, total[i + 1]);
        }
    }
    voltar_menu();
}

void voltar_menu()
{
    int opc;
    printf("\n");
    printf("\n");
    printf("0- Voltar ao menu \n");
    //  scanf("%d", opc);

    printf("99- Sair \n");
    scanf("%d", &opc);

    switch (opc)
    {
    case 0:
        menu();
        break;
    case 99:
        break;

    default:
        break;
    }
}

void portico_com_mais_passagens_14()
{

    int portico_final;
    int soma[30] = {0};
    int max = 0;
    for (int j = 0; j < 20; j++)
    {
        for (int i = 0; i < 20; i++)
        {
            if (passagem[i].num_portico == j)
            {

                soma[j - 1] = soma[j - 1] + 1;
            }
        }
        for (int i = 0; i < 20; i++)
        {
            if (portico[i].preco_ligeiro != 0)
            {
                if (soma[i] >= max)
                {
                    max = soma[i];
                    portico_final = i + 1;
                }
            }
        }
    }
    printf("\n");
printf("\n");
    printf("O pórtico com mais passagens é o pórtico %d com %d passagens. \n", portico_final, max);

    voltar_menu();
}
void total_gasto_por_classe_10()
{
    float total;
    char c[20];
printf("\n");
printf("\n");
    printf("Indique a classe que pretende pesquisar: ");
    scanf("%s", c);
    if (strcmp(c, "ligeiro") != 0 && strcmp(c, "motociclo") != 0 && strcmp(c, "pesado") != 0)
    {
        printf("\n");
        printf("\n");
        printf("Não inseriu uma classe válida.\n");
        printf("Tente novamente: \n");
        printf("\n");
        printf("\n");
        total_gasto_por_classe_10();
    }
    else
    {
        for (int j = 0; j < 20; j++)
        {
            for (int i = 0; i < 20; i++)
            {
                if (passagem[i].num_portico == j && strcmp(c, "ligeiro") == 0 && strcmp(passagem[i].classe, c) == 0)
                {
                    total = total + portico[j - 1].preco_ligeiro;
                }
                if (passagem[i].num_portico == j && strcmp(c, "motociclo") == 0 && strcmp(passagem[i].classe, c) == 0)
                {
                    total = total + portico[j - 1].preco_motociclo;
                }
                if (passagem[i].num_portico == j && strcmp(c, "pesado") == 0 && strcmp(passagem[i].classe, c) == 0)
                {
                    total = total + portico[j - 1].preco_pesado;
                }
            }   
        }

        printf("A classe %s gastou %0.2f€ no total.", c, total);

        voltar_menu();
    }
}

void total_portico_dia_12()
{
    int portic;
    char data[20];
    float total_p1;

    float total_p2;
    float total_p3;
    float total_p4;
    float totall[30];
    int contagem = 0;
    int contagem_data = 0;

    for (int i = 0; i < 20; i++)
    {
        if (portico[i].preco_ligeiro != 0)
        {
            contagem = contagem + 1;
        }
    }
printf("\n");
printf("\n");
    printf("Indique o pórtico que pretende pesquisar: ");
    scanf("%d", &portic);

    printf("Indique a data que deseja pesquisar: ");
    scanf("%s", data);

    for (int i = 0; data[i] != '\0'; i++)
    {

        if (data[i] == '/')
        {
            contagem_data = contagem_data + 1;
        }
    }

    if (portic <= 0 || portic > contagem)
    {
        printf("\n");
        printf("\n");
        printf("Não inseriu um pórtico válido.\n");
        printf("Tente novamente: ");
        printf("\n");
        printf("\n");
        total_portico_dia_12();
    }
    else if (contagem_data <= 0 || contagem_data > 2)
    {
        printf("\n");
        printf("\n");
        printf("Não inseriu uma data válida.\n");
        printf("Tente novamente: \n");
        printf("\n");
        printf("\n");
        total_portico_dia_12();
    }
    else
    {

        for (int j = 0; j < 20; j++)
        {
            for (int i = 0; i < 20; i++)
            {
                if (strcmp(passagem[i].classe, "ligeiro") == 0 && portic == j && passagem[i].num_portico == j && strcmp(passagem[i].data, data) == 0)
                {
                    totall[j - 1] = totall[j - 1] + portico[j - 1].preco_ligeiro;
                }
                if (strcmp(passagem[i].classe, "motociclo") == 0 && portic == j && passagem[i].num_portico == j && strcmp(passagem[i].data, data) == 0)
                {
                    totall[j - 1] = totall[j - 1] + portico[j - 1].preco_motociclo;
                }
                if (strcmp(passagem[i].classe, "pesado") == 0 && portic == j && passagem[i].num_portico == j && strcmp(passagem[i].data, data) == 0)
                {
                    totall[j - 1] = totall[j - 1] + portico[j - 1].preco_pesado;
                }
            }
        }

        for (int i = 0; i < 20; i++)
        {
            if (portic == i)
            {
                printf("O pórtico %d faturou %0.2f€ no dia %s.", i, totall[i - 1], data);
            }
        }
        voltar_menu();
    }
}

void guardar_dados()
{
    int opc;

    
        printf("-------------------------------------------MENU INSERIR DADOS------------------------------------------- \n");

    printf("1- Inserir um pórtico \n");
    printf("2- Inserir uma passagem \n");
    printf("0- Voltar ao menu principal \n");
        printf("-------------------------------------------------------------------------------------------------------- \n");

        printf("SELECIONE UMA OPÇÃO: \n");
if (scanf("%d", &opc) !=1) 
   {
    printf("Não introduziu uma opção válida. \n");
    printf("Tente novamente: \n");
    fflush(stdin);
    guardar_dados();
   
   }
    

    switch (opc)
    {
    case 0:
        menu();
        break;
    case 1:
        adicionar_portico_0();
        break;
    case 2:
        adicionar_passagem_4();
        break;
    default:
    guardar_dados();
        break;
    }
}

void editar()
{
    int opc;

    
        printf("----------------------------------------------MENU EDITAR----------------------------------------------- \n");

    printf("1- Editar os preços de um pórtico \n");
    printf("0- Voltar ao menu principal \n");
        printf("-------------------------------------------------------------------------------------------------------- \n");

    printf("SELECIONE UMA OPÇÃO: \n");

    if (scanf("%d", &opc) !=1) 
   {
    printf("Não introduziu uma opção válida. \n");
    printf("Tente novamente: \n");
    fflush(stdin);
    editar();
   
   }

    switch (opc)
    {
    case 0:
        menu();
        break;
    case 1:
        alterar_3();
        break;

    default:
    editar();
        break;
    }
}

void pesquisar()
{
    int opc;

         printf("---------------------------------------------MENU PESQUISAR--------------------------------------------- \n");

    printf("1- Pesquisar o preço de um pórtico por classe de veiculo \n");
    printf("2- Pesquisar as passagens de um determinado pórtico \n");
    printf("3- Pesquisar o total armazenado por pórtico \n");
    printf("4- Pesquisar o total gasto por veículo em todos os pórticos ao longo dos tempos \n");
    printf("5- Pesquisar o total gasto por uma determinada classe de veiculos \n");
    printf("6- Pesquisar o total que um pórtico faturou num dia \n");
    printf("7- Pesquisar o número de veiculos que passou em cada um dos pórticos \n");
    printf("8- Mostrar o pórtico com mais passagens \n");
    printf("9- Mostrar a média de passagens nos pórticos \n");
    printf("0- Voltar ao menu principal \n");
        printf("-------------------------------------------------------------------------------------------------------- \n");

    printf("SELECIONE UMA OPÇÃO: \n");

    if (scanf("%d", &opc) !=1) 
   {
    printf("Não introduziu uma opção válida. \n");
    printf("Tente novamente: \n");
    fflush(stdin);
    pesquisar();
   
   }

    switch (opc)
    {
    case 0:
        menu();
        break;
    case 1:
        mostrar_info_2();
        break;
    case 2:
        listar_passagens_6();
        break;
    case 3:
        total_por_portico_8();
        break;
    case 4:
        total_gasto_por_veiculo_9();
        break;
    case 5:
        total_gasto_por_classe_10();
        break;
    case 6:
        total_portico_dia_12();
        break;
    case 7:
        mostrar_n_veiculos_13();
        break;
    case 8:
        portico_com_mais_passagens_14();
        break;
    case 9:
        media_porticos_15();
        break;
    default:
    pesquisar();
        break;
    }
}

void listar()

{
    int opc;

       printf("-----------------------------------------------MENU LISTAR----------------------------------------------- \n");

    printf("1- Listar todas as informações dos pórticos \n");

    printf("2- Listar todas as passagens de todos os veiculos \n");
    printf("3- Listar todas as passagens de um veiculo num determinado pórtico \n");
    printf("4- Listar, para cada classe de veículos, o total de veículos que passaram num determinado pórtico \n");
    printf("0- Voltar ao menu principal \n");
        printf("-------------------------------------------------------------------------------------------------------- \n");

    printf("SELECIONE UMA OPÇÃO: \n");
    if (scanf("%d", &opc) !=1) 
   {
    printf("Não introduziu uma opção válida. \n");
    printf("Tente novamente: \n");
    fflush(stdin);
    listar();
   
   }

    switch (opc)
    {
    case 0:
        menu();
        break;
    case 1:
        mostrar_info_1();
        break;
    case 2:
        listar_passagens_5();
        break;
    case 3:
        pesquisar_matricula_7();
        break;
    case 4:
        n_veiculos_classe_11();

        break;
    default:
    listar();
        break;
    }
}

void total_gasto_por_veiculo_9()
{
    float total;
    char v[20];
    int contagem_matricula = 0;
printf("\n");
printf("\n");
    printf("Indique a matricula do veiculo que pretende pesquisar: ");
    scanf("%s", v);
    for (int i = 0; v[i] != '\0'; i++)
    {

        if (v[i] == '-')
        {
            contagem_matricula = contagem_matricula + 1;
        }
    }

    if (contagem_matricula <= 0 || contagem_matricula > 2)
    {
        printf("\n");
        printf("\n");
        printf("Não inseriu uma matrícula válida.\n");
        printf("Tente novamente: \n");
        printf("\n");
        printf("\n");
        total_gasto_por_veiculo_9();
    }
    else
    {
        for (int j = 0; j < 20; j++)
        {
            for (int i = 0; i < 20; i++)
            {
                if (passagem[i].num_portico == j && strcmp(v, passagem[i].matricula) == 0 && strcmp(passagem[i].classe, "ligeiro") == 0)
                {
                    total = total + portico[j - 1].preco_ligeiro;
                }
                if (passagem[i].num_portico == j && strcmp(v, passagem[i].matricula) == 0 && strcmp(passagem[i].classe, "motociclo") == 0)
                {
                    total = total + portico[j - 1].preco_motociclo;
                }
                if (passagem[i].num_portico == j && strcmp(v, passagem[i].matricula) == 0 && strcmp(passagem[i].classe, "pesado") == 0)
                {
                    total = total + portico[j - 1].preco_pesado;
                }
            }
        }

        printf("O carro cuja matricula é %s gastou %0.2f ao todo em todas as portagens.", v, total);

        voltar_menu();
    }
}

void n_veiculos_classe_11()
{
   int soma_portico1 = 0;
    int soma_portico2 = 0;
    int soma_portico3 = 0;
    int soma_portico4 = 0; 
    int soma[20][3];
    printf("\n");
    printf("\n");

    for (int j = 0; j < 20; j++)
    {
        for (int i = 0; i < 20; i++)
        {
            if (passagem[i].num_portico == j && strcmp(passagem[i].classe, "ligeiro") == 0)
            {

                soma[j - 1][j - j] = soma[j - 1][j - j] + 1;
            }

            if (passagem[i].num_portico == j && strcmp(passagem[i].classe, "motociclo") == 0)
            {

                soma[j - 1][j - j + 1] = soma[j - 1][j - j + 1] + 1;
            }

            if (passagem[i].num_portico == j && strcmp(passagem[i].classe, "pesado") == 0)
            {

                soma[j - 1][j - j + 2] = soma[j - 1][j - j + 2] + 1;
            }
        }
    }

    for (int i = 0; i < 20; i++)
    {
        if (portico[i].preco_ligeiro != 0)
        {
            printf("Número de ligeiros do Pórtico %d: %d \n", i + 1, soma[i][i - i]);
            printf("Número de motociclos do Pórtico %d: %d \n", i + 1, soma[i][i - i + 1]);
            printf("Número de pesados do Pórtico %d: %d \n", i + 1, soma[i][i - i + 2]);
            printf("\n");
            printf("\n");
        }
    }
//a
    voltar_menu();
}