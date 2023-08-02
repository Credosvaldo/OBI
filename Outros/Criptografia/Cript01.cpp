#include<bits/stdc++.h>
using namespace std;

FILE *arquivo;

char chave[] = "AbCd";

void Iniciar()
{
    //if(nomeArquivo == "")
    //nomeArquivo = "text";

    arquivo = fopen("D:\\Criptografia\\text.txt", "wt");
    fclose(arquivo);
}

bool Cript()
{
    char texto[1000000];
    arquivo = fopen("D:\\Criptografia\\text.txt", "rt");

    if(arquivo == NULL)
    {
        cout<< "\n\n\n E nulo \n\n\n";
        return false;
    }

    char palavra[100000];
    char auxPalavra[100000];
    while(!feof(arquivo))
    {
        fscanf(arquivo,"%s", palavra);

        strcat(auxPalavra,palavra);
        strcat(auxPalavra," ");

    }
    strcpy(texto,auxPalavra);

    fclose(arquivo);

    system("pause");

    int textoCriptografado[strlen(texto)];

    if(strlen(texto)<=0)
        return false;

    int indice =0;
    int ValorDoTexto =0;
    int ValorDaChave;

    for(int i = 0; i< strlen(texto);i++)
    {
        ValorDoTexto = texto[i];
        ValorDaChave = chave[indice];
        textoCriptografado[i] = ValorDoTexto*ValorDaChave ;
        indice++;
        if(indice==4)
            indice=0;
    }

    for(int i = 0; i< strlen(texto);i++)
        cout << textoCriptografado[i] << " ";
    cout<< "\n\n";

    arquivo = fopen("D:\\Criptografia\\text.txt", "wt");
    for(int i = 0; i< strlen(texto);i++)
        fprintf(arquivo,"%d ",textoCriptografado[i]);
    fclose(arquivo);

    return true;
}

void Criptografar()
{
    char enter;
    system("cls");
    cout<< "Instrucoes para criptografia:\n\n";
    cout << "1 - Precione enter para abrir a pasta\n\n";
    cout<< "2 - Coloque o arquivo que deseja que seja criptografado na pasta com o nome de text.txt\n\n";
    cout<< "3 - Feche o explorador de arquivos. Digite qualque coisa prosseguir\n\n";

    cin>> enter;

    system("explorer D:\\Criptografia");

    system("pause");

    cout<< "Criptando Arquivo... \n\n";

    if(Cript())
    {
        cout<< "\n\n Arquivo criptografado com sucesso!";
        cout<< "\n\n Precione enter para abrir a pasta com o arquivo.";
        cin >> enter;
        system("explorer D:\\Criptografia");
    }
    else
    {
        cout<< "\n Error: Nao foi possivel criptografar o arquivo";
        system("pause");
    }




}

bool Descript()//---------------------------------------------------------------------------------//
{
    char enter;
    int textoCriptografado[100000];

    arquivo = fopen("D:\\Criptografia\\Descriptografado\\text.txt", "r");

    if(arquivo == NULL)
    {
        return false;
    }

    int j=0;
    int valor;

    while(!feof(arquivo))
    {
        fscanf(arquivo,"%d",&textoCriptografado[j]);
        j++;
    }


    system("pause");

    char textoDescriptografado[j];

    int auxChave;
    int indiceChave=0;
    int auxCript;
    for(int i =0;i<j;i++)
    {
        auxChave=chave[indiceChave];
        auxCript = textoCriptografado[i];
        textoDescriptografado[i]=auxCript/auxChave;


        indiceChave++;
        if(indiceChave>3)
            indiceChave=0;

    }

    for(int i =0;i<j;i++)
    {
        cout<< textoDescriptografado[i];
    }

    fclose(arquivo);
    arquivo = fopen("D:\\Criptografia\\Descriptografado\\text.txt", "wt");


    fprintf(arquivo,"%s",textoDescriptografado);

    cout<< "\ndigite algo pra abrir a pasta do arquivo.";
    cin>> enter;

    system("explorer D:\\Criptografia\\Descriptografado");//abrir o arquivo direto

    fclose(arquivo);

    return true;
}

void Descriptografar()
{
    char enter;
    system("cls");
    cout<< "Instrucoes para descriptografia:\n\n";
    cout << "1 - Precione enter para abrir a pasta\n\n";
    cout<< "2 - Coloque o arquivo que deseja que seja descriptografado na pasta com o nome de text.txt\n\n";
    cout<< "3 - Feche o explorador de arquivos. Digite qualque coisa para prosseguir\n\n";

    cin>> enter;

    system("explorer D:\\Criptografia\\Descriptografado");

    cout<< "\n\n" << "Descrepitografando...\n\n";
    if(Descript())
    {
        cout<<"\n Seu Programa foi descriptografado com sucesso!";
    }
    else
    {
        cout << "\n Error: Nao foi possivel descriptografar o arquivo.";
        system("pause");
    }
}

void Menu()
{
    int opcao;
    while(1)
    {
        system("cls");
        cout<< "Criptografia\n\n\n";
        cout<< "Digite 1 pra iniciar a criptografia\n\n";
        cout<< "Digite 2 pra descriptografar\n\n";
        cout<< "Digite 3 pra Cancelar\n\n";
        cin>> opcao;
        if(opcao==1)
        {
            Criptografar();
        }
        else if(opcao==2)
        {
            Descriptografar();
        }
        else if(3)
        {
            exit(1);
        }
        else
        {
            cout<< "\n\nError: Esse caracter nao e aceito.\n\n";
            system("pause");
        }

    }

}

int main()
{
    Menu();


    return 0;
}
