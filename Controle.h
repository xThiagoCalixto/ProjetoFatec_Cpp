#include <iostream>
#include <cstring>
#include <locale>
#include <string.h>
using namespace std;

/*void RelatorioTanque(int *posicao, struct tanque *pontTanque){
    FILE *arquivo;
    arquivo = fopen("RelatorioTanque.txt", "w+");
    if (arquivo == NULL){
        printf("Problemas na Criação do Arquivo.");
    }
    for (int i = 0; i < *posicao; i++){
        fprintf(arquivo,"\nModelo do tanque: ");
        fprintf(arquivo, pontTanque[i].modelo);
        fprintf(arquivo,"\nMarca do Veiculo: ");
        fprintf(arquivo, pontTanque[i].finalidade);
        fprintf(arquivo,"\nCodigo do tanque: ");
        char aux[12];
        sprintf(aux, "%d", pontTanque[i].codigotanque);
        fprintf(arquivo, aux);
        fprintf(arquivo,"\nPopulacao total do tanque: ");
        sprintf(aux, "%d", pontTanque[i].populacaototal);
        fprintf(arquivo, aux);
        fprintf(arquivo,"\n");
    }
    fclose(arquivo);
    system("clear");
    cout << "\nArquivo gerado com sucesso.";
    system ("pause");
}

void RelatorioPeixe(int *posicao, struct peixe *pontPeixe){
    FILE *arquivo;
    arquivo = fopen("RelatorioPeixe.txt", "w+");
    if (arquivo == NULL){
        printf("Problemas na Criação do Arquivo.");
    }
    for (int i = 0; i < *posicao; i++){
        fprintf(arquivo,"\nPeixe: ");
        fprintf(arquivo, pontPeixe[i].peixe);
        fprintf(arquivo,"\nDescricao: ");
        fprintf(arquivo, pontPeixe[i].descricao);
        fprintf(arquivo,"\nCodigo do peixe: ");
        char aux[12];
        sprintf(aux, "%d", pontPeixe[i].codigopeixe);
        fprintf(arquivo, aux);
        fprintf(arquivo,"\n");
    }
    fclose(arquivo);
    system("clear");
    cout << "\nArquivo gerado com sucesso.";
    system ("pause");
}

void RelatorioCardume(int *posicao, struct cardume *pontCardume){
    FILE *arquivo;
    arquivo = fopen("RelatorioCardume.txt", "w+");
    if (arquivo == NULL){
        printf("Problemas na Criação do Arquivo.");
    }
    for (int i = 0; i < *posicao; i++){
        fprintf(arquivo,"\nModelo do tanque: ");
        fprintf(arquivo, pontCardume[i].tanque1.modelo);
        fprintf(arquivo,"\nPeixe: ");
        fprintf(arquivo, pontCardume[i].peixe1.peixe);
        fprintf(arquivo,"\nQuantidade de peixes no tanque: ");
        char aux[12];
        sprintf(aux, "%d", pontCardume[i].qntpeixe);
        fprintf(arquivo, aux);
        fprintf(arquivo,"\n");
    }
    fclose(arquivo);
    system("clear");
    cout << "\nArquivo gerado com sucesso.";
    system ("pause");
}

void BinarioTanque(int *posicao, struct tanque *pontTanque){
    FILE *arquivo;
    arquivo = fopen("TanqueBinario.bin","wb+");
    if (arquivo == NULL)
    {
        printf ("Problemas na criação do Arquivo\n");
        return;
    }
    fwrite(pontTanque, sizeof(tanque), *posicao, arquivo);
    fclose(arquivo);
    system("clear");
    cout<<"\nArquivo gerado com sucesso.";
    system ("pause");
}

void BinarioPeixe(int *posicao, struct peixe *pontPeixe){
    FILE *arquivo;
    arquivo = fopen("PeixeBinario.bin","wb+");
    if (arquivo == NULL)
    {
        printf ("Problemas na criação do Arquivo\n");
        return;
    }
    fwrite(pontPeixe, sizeof(peixe), *posicao, arquivo);
    fclose(arquivo);
    system("clear");
    cout<<"\nArquivo gerado com sucesso.";
    system ("pause");
}

void BinarioCardume(int *posicao, struct cardume *pontCardume){
    FILE *arquivo;
    arquivo = fopen("CardumeBinario.bin","wb+");
    if (arquivo == NULL)
    {
        printf ("Problemas na criação do Arquivo\n");
        return;
    }
    fwrite(pontCardume, sizeof(cardume), *posicao, arquivo);
    fclose(arquivo);
    system("clear");
    cout<<"\nArquivo gerado com sucesso.";
    system ("pause");
}

void CarregarTanque(int *posicao, struct tanque *pontTanque){
    FILE *arquivo;
    *posicao = 0;
    arquivo = fopen("TanqueBinario.bin", "rb+");
    if (arquivo){
        fread(pontTanque, sizeof (tanque), *posicao, arquivo);
        for (int i = 0; i < *posicao; i++){
            if (pontTanque[i].modelo[0] != NULL){
                *posicao = (*posicao) + 1;
            }
            fclose(arquivo);
        }
        
    }
    system("clear");
    cout << "\nArquivo gerado com sucesso.";
    system ("pause");
}

void CarregarPeixe(int *posicao, struct peixe *pontPeixe){
    FILE *arquivo;
    *posicao = 0;
    arquivo = fopen("PeixeBinario.bin", "rb+");
    if (arquivo){
        fread(pontPeixe, sizeof (peixe), *posicao, arquivo);
        for (int i = 0; i < *posicao; i++){
            if (pontPeixe[i].peixe[0] != NULL){
                *posicao = (*posicao) +1;
            }
            fclose(arquivo);
        }
        
    }
    system("clear");
    cout << "\nArquivo gerado com sucesso.";
    system ("pause");
}

void CarregarCardume(int *posicao, struct cardume *pontCardume){
    FILE *arquivo;
    *posicao = 0;
    arquivo = fopen("CardumeBinario.bin", "rb+");
    if (arquivo){
        fread(pontCardume, sizeof (cardume), *posicao, arquivo);
        for (int i = 0; i < *posicao; i++){
            if (pontCardume[i].tanque1.modelo[0] != NULL){
                *posicao = (*posicao) + 1;
            }
            fclose(arquivo);
        }
        
    }
    system("clear");
    cout << "\nArquivo gerado com sucesso.";
    system ("pause");
}*/

void IncluirRa(int *posicao, struct TipoRa *VetorTipoRa){
    TipoRa v;
    cout << "\nCadastrar" << endl;
    
    cout << "Entre com o ID da ra: " << endl;
    cin >> v.id;
    
    cout << "Entre com o nome da ra: " << endl;
    string nome1;
    cin.ignore();
    getline(cin, nome1);
    strcpy(v.nomeRa, nome1.c_str());
    
    cout << "Entre com a origem da ra: " << endl;
    getline(cin, nome1);
    strcpy(v.origem, nome1.c_str());
    
    VetorTipoRa[*posicao] = v;
    *posicao = (*posicao) + 1;
}

void ListarRa(int i, int *posicao, struct TipoRa *VetorTipoRa){
    if(i == *posicao){
        return;
    }
    cout << "\nIndice: " << i << endl;
    cout << "ID da ra: " << VetorTipoRa[i].id << endl;
    cout << "Nome da ra: " << VetorTipoRa[i].nomeRa << endl;
    cout << "Origem da ra: " << VetorTipoRa[i].origem << endl << endl;
    ListarRa(i + 1, posicao, VetorTipoRa);
}

void IncluirTanque(int *posicao, struct Tanque *VetorTanque){
    Tanque v;
    cout << "\nCadastrar" << endl;
    
    cout << "Entre com o codigo do tanque: " << endl;
    cin >> v.codigo;
    
    cout << "Entre com a data atual: " << endl;
    string nome1;
    cin.ignore();
    getline(cin, nome1);
    strcpy(v.dia, nome1.c_str());
    
    v.qntAnimais = 0;
    int aux = 0;
    
    do{
        cout << "Entre com o tipo do tanque: " << endl;
        cout << "1 - Baia de mantenca" << endl;
        cout << "2 - Baia inicial" << endl;
        cout << "3 - Baia dos girinos" << endl;
        cout << "4 - Baia de acalamento" << endl;
        cout << "5 - Baia de terminacao" << endl;
        cin >> aux;
    }while(aux <=0 || aux > 5);
    if (aux == 1){
        getline(cin, nome1);
        strcpy(v.tipoTanque, "Mantenca");
    }
    if (aux == 2){
        getline(cin, nome1);
        strcpy(v.tipoTanque, "Inicial");
    }
    if (aux == 3){
        getline(cin, nome1);
        strcpy(v.tipoTanque, "Girinos");
    }
    if (aux == 4){
        getline(cin, nome1);
        strcpy(v.tipoTanque, "Acasalamento");
    }
    if (aux == 5){
        getline(cin, nome1);
        strcpy(v.tipoTanque, "Terminacao");
    }
    
    VetorTanque[*posicao] = v;
    *posicao = (*posicao) + 1;
}

void ListarTanque(int i, int *posicao, struct Tanque *VetorTanque){
    if(i == *posicao){
        return;
    }
    cout << "\nIndice: " << i << endl;
    cout << "Codigo do tanque: " << VetorTanque[i].codigo << endl;
    cout << "Dia da ultima alteracao: " << VetorTanque[i].dia << endl;
    cout << "Populacao atual do tanque: " << VetorTanque[i].qntAnimais << endl;
    cout << "Tipo do tanque: " << VetorTanque[i].tipoTanque << endl;
    ListarTanque(i + 1, posicao, VetorTanque);
}

void ListarMantenca(int i, int *posicao, struct Tanque *VetorTanque){
    if(i == *posicao){
        return;
    }
    if (0 == strcmp(VetorTanque[i].tipoTanque, "Mantenca")){
        cout << "\nIndice: " << i << endl;
        cout << "Codigo do tanque: " << VetorTanque[i].codigo << endl;
        cout << "Dia da ultima alteracao: " << VetorTanque[i].dia << endl;
        cout << "Populacao atual do tanque: " << VetorTanque[i].qntAnimais << endl;
        cout << "Tipo do tanque: " << VetorTanque[i].tipoTanque << endl;
    }
    ListarMantenca(i + 1, posicao, VetorTanque);
}

void EntradaDeAnimais(int *posicao, int *ra, int *tanque, struct TipoRa *VetorTipoRa, struct Tanque *VetorTanque, struct Registro *Movimentacao){
    Registro r;

    cout << endl;
    ListarRa(0, ra, VetorTipoRa);
    int IdRa;
    cout << "Digite o indice da ra: " << endl;
    cin >> IdRa;
    
    ListarMantenca(0, tanque, VetorTanque);
    int CodigoDoTanque;
    cout << "\nDigite o indice do tanque: " << endl;
    cin >> CodigoDoTanque;
    
    cout << "Digite a quantidade de ras que deseja adicionar: ";
    cin >> r.qnt;
    
    VetorTanque[CodigoDoTanque].qntAnimais += r.qnt;
    
    cout << "Entre com a data atual: " << endl;
    string nome1;
    cin.ignore();
    getline(cin, nome1);
    strcpy(r.data, nome1.c_str());
    strcpy(r.tanqueOrigem.tipoTanque, VetorTipoRa[IdRa].origem);
    strcpy(r.ra.nomeRa, VetorTipoRa[IdRa].nomeRa);
    strcpy(r.destino.tipoTanque, VetorTanque[CodigoDoTanque].codigo);
    strcpy(r.tipoDestino.tipoTanque, VetorTanque[CodigoDoTanque].tipoTanque);
    strcpy(VetorTanque[CodigoDoTanque].dia, r.data);
    strcpy(VetorTipoRa[IdRa].origem, VetorTanque[CodigoDoTanque].tipoTanque);
    strcpy(r.motivo, "Nao houve retirada, apenas entrada.");
    
    Movimentacao[*posicao] = r;
    *posicao = (*posicao) + 1;
}

void ListarAcasalamento(int i, int *posicao, struct Tanque *VetorTanque){
    if(i == *posicao){
        return;
    }
    if (0 == strcmp(VetorTanque[i].tipoTanque, "Acasalamento")){
        cout << "\nIndice: " << i << endl;
        cout << "Codigo do tanque: " << VetorTanque[i].codigo << endl;
        cout << "Dia da ultima alteracao: " << VetorTanque[i].dia << endl;
        cout << "Populacao atual do tanque: " << VetorTanque[i].qntAnimais << endl;
        cout << "Tipo do tanque: " << VetorTanque[i].tipoTanque << endl;
    }
    ListarAcasalamento(i + 1, posicao, VetorTanque);
}

void Acasalamento(int *posicao, int *ra, int *tanque, struct TipoRa *VetorTipoRa, struct Tanque *VetorTanque, struct Registro *Movimentacao){
    Registro r;

    cout << endl;
    ListarRa(0, ra, VetorTipoRa);
    int IdRa;
    cout << "Digite o indice da ra: " << endl;
    cin >> IdRa;
    
    ListarMantenca(0, tanque, VetorTanque);
    int CodigoDoTanque;
    cout << "\nDigite o indice do tanque de mantenca que deseja retirar as ras: " << endl;
    cin >> CodigoDoTanque;
    
    ListarAcasalamento(0, tanque, VetorTanque);
    int aux;
    cout << "\nDigite o indice do tanque de acasalamento: " << endl;
    cin >> aux;
    
    cout << "Digite a quantidade de ras que deseja adicionar: ";
    cin >> r.qnt;
    
    VetorTanque[CodigoDoTanque].qntAnimais -= r.qnt;
    VetorTanque[aux].qntAnimais += r.qnt;
    
    cout << "Entre com a data atual: " << endl;
    string nome1;
    cin.ignore();
    getline(cin, nome1);
    strcpy(r.data, nome1.c_str());
    strcpy(r.tanqueOrigem.tipoTanque, VetorTipoRa[IdRa].origem);
    strcpy(r.ra.nomeRa, VetorTipoRa[IdRa].nomeRa);
    strcpy(r.destino.tipoTanque, VetorTanque[CodigoDoTanque].codigo);
    strcpy(r.tipoDestino.tipoTanque, VetorTanque[CodigoDoTanque].tipoTanque);
    strcpy(VetorTanque[CodigoDoTanque].dia, r.data);
    strcpy(VetorTipoRa[IdRa].origem, VetorTanque[CodigoDoTanque].tipoTanque);
    
    cout << "Qual eh o motivo da retirada? " << endl;
    getline(cin, nome1);
    strcpy(r.motivo, nome1.c_str());
    
    Movimentacao[*posicao] = r;
    *posicao = (*posicao) + 1;
}

void ListarTransferenciaOrigem(int i, int *posicao, struct Tanque *VetorTanque){
    if(i == *posicao){
        return;
    }
    if (0 == strcmp(VetorTanque[i].tipoTanque, "Inicial") || 0 == strcmp(VetorTanque[i].tipoTanque, "Girinos") || 0 == strcmp(VetorTanque[i].tipoTanque, "Acasalamento")){
        cout << "\nIndice: " << i << endl;
        cout << "Codigo do tanque: " << VetorTanque[i].codigo << endl;
        cout << "Dia da ultima alteracao: " << VetorTanque[i].dia << endl;
        cout << "Populacao atual do tanque: " << VetorTanque[i].qntAnimais << endl;
        cout << "Tipo do tanque: " << VetorTanque[i].tipoTanque << endl;
    }
    ListarAcasalamento(i + 1, posicao, VetorTanque);
}

void ListarTransferenciaDestino(int i, int *posicao, struct Tanque *VetorTanque){
    if(i == *posicao){
        return;
    }
    if (0 == strcmp(VetorTanque[i].tipoTanque, "Inicial") || 0 == strcmp(VetorTanque[i].tipoTanque, "Girinos") || 0 == strcmp(VetorTanque[i].tipoTanque, "Terminacao")){
        cout << "\nIndice: " << i << endl;
        cout << "Codigo do tanque: " << VetorTanque[i].codigo << endl;
        cout << "Dia da ultima alteracao: " << VetorTanque[i].dia << endl;
        cout << "Populacao atual do tanque: " << VetorTanque[i].qntAnimais << endl;
        cout << "Tipo do tanque: " << VetorTanque[i].tipoTanque << endl;
    }
    ListarAcasalamento(i + 1, posicao, VetorTanque);
}

void Transferencia(int *posicao, int *ra, int *tanque, struct TipoRa *VetorTipoRa, struct Tanque *VetorTanque, struct Registro *Movimentacao){
    Registro r;

    cout << endl;
    ListarRa(0, ra, VetorTipoRa);
    int IdRa;
    cout << "Digite o indice da ra: " << endl;
    cin >> IdRa;
    
    ListarTransferenciaOrigem(0, tanque, VetorTanque);
    int CodigoDoTanque;
    cout << "\nDigite o indice do tanque de mantenca que deseja retirar as ras: " << endl;
    cin >> CodigoDoTanque;
    
    ListarTransferenciaDestino(0, tanque, VetorTanque);
    int aux;
    cout << "\nDigite o indice do tanque de acasalamento: " << endl;
    cin >> aux;
    
    cout << "Digite a quantidade de ras que deseja adicionar: ";
    cin >> r.qnt;
    
    VetorTanque[CodigoDoTanque].qntAnimais -= r.qnt;
    VetorTanque[aux].qntAnimais += r.qnt;
    
    cout << "Entre com a data atual: " << endl;
    string nome1;
    cin.ignore();
    getline(cin, nome1);
    strcpy(r.data, nome1.c_str());
    strcpy(r.tanqueOrigem.tipoTanque, VetorTipoRa[IdRa].origem);
    strcpy(r.ra.nomeRa, VetorTipoRa[IdRa].nomeRa);
    strcpy(r.destino.tipoTanque, VetorTanque[CodigoDoTanque].codigo);
    strcpy(r.tipoDestino.tipoTanque, VetorTanque[CodigoDoTanque].tipoTanque);
    strcpy(VetorTanque[CodigoDoTanque].dia, r.data);
    strcpy(VetorTipoRa[IdRa].origem, VetorTanque[CodigoDoTanque].tipoTanque);
    
    cout << "Qual eh o motivo da retirada? " << endl;
    getline(cin, nome1);
    strcpy(r.motivo, nome1.c_str());
    
    Movimentacao[*posicao] = r;
    *posicao = (*posicao) + 1;
}

//600 - Utilizar o vetor *Movimentação (descrito no item 3 solicitando os valores, 
//porém o tanque destino não precisa ser
//informado. Somente podem ser listado como origem os tanques do Tipo Terminação

void ListarTerminacao(int i, int *posicao, struct Tanque *VetorTanque){
    if(i == *posicao){
        return;
    }
    if (0 == strcmp(VetorTanque[i].tipoTanque, "Terminacao")){
        cout << "\nIndice: " << i << endl;
        cout << "Codigo do tanque: " << VetorTanque[i].codigo << endl;
        cout << "Dia da ultima alteracao: " << VetorTanque[i].dia << endl;
        cout << "Populacao atual do tanque: " << VetorTanque[i].qntAnimais << endl;
        cout << "Tipo do tanque: " << VetorTanque[i].tipoTanque << endl;
    }
    ListarAcasalamento(i + 1, posicao, VetorTanque);
}

void Abater(int *posicao, int *ra, int *tanque, struct TipoRa *VetorTipoRa, struct Tanque *VetorTanque, struct Registro *Movimentacao){
    Registro r;

    cout << endl;
    ListarRa(0, ra, VetorTipoRa);
    int IdRa;
    cout << "Digite o indice da ra: " << endl;
    cin >> IdRa;
    
    ListarTerminacao(0, tanque, VetorTanque);
    int CodigoDoTanque;
    cout << "\nDigite o indice do tanque de mantenca que deseja retirar as ras: " << endl;
    cin >> CodigoDoTanque;


    cout << "Digite a quantidade de ras que deseja abater: ";
    cin >> r.qnt;
    
    VetorTanque[CodigoDoTanque].qntAnimais -= r.qnt;


    cout << "Entre com a data atual: " << endl;
    string nome1;
    cin.ignore();
    getline(cin, nome1);
    strcpy(r.data, nome1.c_str());
    strcpy(r.tanqueOrigem.tipoTanque, VetorTipoRa[IdRa].origem);
    strcpy(r.ra.nomeRa, VetorTipoRa[IdRa].nomeRa);
    strcpy(r.destino.tipoTanque, VetorTanque[CodigoDoTanque].codigo);
    strcpy(r.tipoDestino.tipoTanque, VetorTanque[CodigoDoTanque].tipoTanque);
    strcpy(VetorTanque[CodigoDoTanque].dia, r.data);
    strcpy(VetorTipoRa[IdRa].origem, VetorTanque[CodigoDoTanque].tipoTanque);
    
    nome1 = " Abatimento"
    getline(cin, nome1);
    strcpy(r.motivo, nome1.c_str());
    
    Movimentacao[*posicao] = r;
    *posicao = (*posicao) + 1;
}




void ListarCardume(int i, int *posicao, struct Registro *Movimentacao){
    if(i == *posicao){
        return;
    }
    cout << "Tipo do tanque de origem: " << Movimentacao[i].tanqueOrigem.tipoTanque << endl;
    cout << "Ra: " << Movimentacao[i].ra.nomeRa << endl;
    cout << "Quantidade de ras no tanque: " << Movimentacao[i].qnt << endl;
    cout << "Data da ultima movimentacao: " << Movimentacao[i].data << endl;
    cout << "Motivo da retirada: " << Movimentacao[i].motivo << endl;
    cout << "Tipo do tanque destino: " << Movimentacao[i].tipoDestino.tipoTanque << endl;
    cout << "Codigo do tanque destino: " << Movimentacao[i].destino.tipoTanque << endl;
    ListarCardume(i + 1, posicao, Movimentacao);
}