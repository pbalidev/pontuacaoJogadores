#include <cstdlib>
#include <cstdio>
#include <locale>
#include <Windows.h>
#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char **argv) {
	SetConsoleOutputCP (CP_UTF8);
    string jogador1, jogador2, jogador3;
    int pontos1, pontos2, pontos3;

    cout << "Digite o nome do primeiro jogador: ";
    cin >> jogador1;
    cout << "Digite a pontuação do primeiro jogador: ";
    cin >> pontos1;

    cout << "Digite o nome do segundo jogador: ";
    cin >> jogador2;
    cout << "Digite a pontuação do segundo jogador: ";
    cin >> pontos2;

    cout << "Digite o nome do terceiro jogador: ";
    cin >> jogador3;
    cout << "Digite a pontuação do terceiro jogador: ";
    cin >> pontos3;

    if (pontos1 > pontos2) swap(pontos1, pontos2);
    if (pontos2 > pontos3) swap(pontos2, pontos3);
    if (pontos1 > pontos2) swap(pontos1, pontos2);

    cout << "Pontuação em ordem crescente: " << pontos1 << ", " << pontos2 << ", " << pontos3 << endl;

    return 0;
}
