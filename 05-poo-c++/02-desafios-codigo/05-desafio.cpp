#include <iostream>
#include <string>

using namespace std;

enum Naipe {
  Paus = 0, Ouros = 1, Copas = 2, Espadas = 3
};

enum Valor {
  As = 1, Valete = 2, Dama = 3, Rei = 4
};

class Carta {
  private:
    Naipe naipe;
    Valor valor;

  public:
    Carta(Naipe n, Valor v) {
      naipe = n;
      valor = v;
    }

    Naipe getNaipe() {
      return naipe;
    }

    Valor getValor() {
      return valor;
    }
};

// Função que converte os enums para strings
string enumToString(Naipe naipe, Valor valor) {
  string naipeString;
  string valorString;

  switch (naipe) {
    case Paus:
      naipeString = "Paus";
      break;
    case Ouros:
      naipeString = "Ouros";
      break;
    case Copas:
      naipeString = "Copas";
      break;
    case Espadas:
      naipeString = "Espadas";
      break;
    default:
      naipeString = "Naipe inválido";
      break;
  }

  switch (valor) {
    case As:
      valorString = "Ás";
      break;
    case Valete:
      valorString = "Valete";
      break;
    case Dama:
      valorString = "Dama";
      break;
    case Rei:
      valorString = "Rei";
      break;
    default:
      valorString = "Valor inválido";
      break;
  }

  return valorString + " de " + naipeString;
}

int main() {
  int valorEscolhido, naipeEscolhido;

  cin >> valorEscolhido;
  cin >> naipeEscolhido;

  // Criação da carta escolhida pelo usuário usando "static_cast" para converter as escolhas.
  Carta cartaEscolhida(static_cast<Naipe>(naipeEscolhido), static_cast<Valor>(valorEscolhido));

  // Conversão dos enums para strings
  string cartaString = enumToString(cartaEscolhida.getNaipe(), cartaEscolhida.getValor());

  // Impressão da mensagem de saída
  cout << "Carta escolhida: " << cartaString << endl;

  return 0;
}

