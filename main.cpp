#include <stdio.h>
#include <cstring>
#include <locale>
#include <iostream>
#include "Constante.h"
#include "Controle.h"
using namespace std;

int main()
{
    int sair = 0;
    int opcao;
    int PosicaoRa = 0;
    int PosicaoTanque = 0;
    int PosicaoMovimentacao = 0;
    struct TipoRa *VetorTipoRa;
    struct Tanque *VetorTanque;
    struct Registro *Movimentacao;
    
    do{
        cout << "\nSistema" << endl;
        cout << INICIALIZAR << " - Inicializar" << endl;
        cout << INCLUIRRA << " - Incluir nova ra." << endl;
        cout << LISTARRA << " - Listar ras." << endl;
        cout << INCLUIRTANQUE << " - Incluir tanque." << endl;
        cout << LISTARTANQUE << " - Lista tanques." << endl;
        cout << ENTRADAANIMAIS << " - Entrada de animais." << endl;
        cout << ACASALAMENTO << " - Acasalamento." << endl;
        cout << TRANFERENCIA << " - Tranferencia." << endl;
        cout << ABATE << " - Abate." << endl;
        cout << ELIMINAR << " - Eliminar." << endl;
        cout << LISTARMOVIMENTACAOTANQUE << " - Listar os dados de movimentacao de um tanque." << endl;
        cout << LISTARMORTES << " - Listar animais que morreram." << endl;
        cout << LISTARDOENTES << " - Listar animais que ficaram doente." << endl;
        cout << LISTARTRANSFORMACAOEMCARNE << " - Listar animais que foram transformados em carne." << endl;
        cout << SAIR << " - Sair" << endl;
        cout << "Entre com opcao" << endl;
        cin >> opcao;
        switch(opcao){
            case INICIALIZAR:
                int total;
                cout << "Entre com o tamanho dos vetores" << endl;
                cin >> total;
                VetorTipoRa = (struct TipoRa *) malloc (total*sizeof(struct TipoRa));
                VetorTanque = (struct Tanque *) malloc (total*sizeof(struct Tanque));
                Movimentacao = (struct Registro *) malloc (total*sizeof(struct Registro));
                break;
            case INCLUIRRA: 
                IncluirRa(&PosicaoRa, VetorTipoRa);
                cout << "\nValor do contador\n" << PosicaoRa << endl;
                break;
            case LISTARRA:
                ListarRa(0, &PosicaoRa, VetorTipoRa);
                break;
            case INCLUIRTANQUE:
                IncluirTanque(&PosicaoTanque, VetorTanque);
                cout << "\nValor do contador\n" << PosicaoTanque << endl;
                break;
            case LISTARTANQUE:
                ListarTanque(0, &PosicaoTanque, VetorTanque);
                break;
            case ENTRADAANIMAIS:
                EntradaDeAnimais(&PosicaoMovimentacao, &PosicaoRa, &PosicaoTanque, VetorTipoRa, VetorTanque, Movimentacao);
                break;
            case ACASALAMENTO:
                Acasalamento(&PosicaoMovimentacao, &PosicaoRa, &PosicaoTanque, VetorTipoRa, VetorTanque, Movimentacao);
                break;
            case TRANFERENCIA:
                Transferencia(&PosicaoMovimentacao, &PosicaoRa, &PosicaoTanque, VetorTipoRa, VetorTanque, Movimentacao);
                break;
            case ABATE:
                Transferencia(&PosicaoMovimentacao, &PosicaoRa, &PosicaoTanque, VetorTipoRa, VetorTanque, Movimentacao);
                break;
            case RELATORIOCARDUME:
                ListarCardume(0, &PosicaoMovimentacao, Movimentacao);
                break;
            case GRAVARBINARIO: 
                BinarioTanque(&PosicaoTanque, pontTanque);
                BinarioPeixe(&PosicaoPeixe, pontPeixe);
                BinarioCardume(&PosicaoCardume, pontCardume);
                break;
            case CARREGARBINARIO: 
                CarregarTanque(&PosicaoTanque, pontTanque);
                CarregarPeixe(&PosicaoPeixe, pontPeixe);
                CarregarCardume(&PosicaoCardume, pontCardume);
                break;*/
            case SAIR: cout << "Deseja Realmente sair?" << endl << "1 - Sim" << endl << "2 - Nao" << endl;
				cin >> sair;
				if (sair == 1)
				    opcao = (SAIR + 1); 
			    break;
			default:
			break;
        }
    }while(opcao >= 0 && opcao <= SAIR);
    free (VetorTipoRa);
    free (VetorTanque);
    free (Movimentacao);
}
