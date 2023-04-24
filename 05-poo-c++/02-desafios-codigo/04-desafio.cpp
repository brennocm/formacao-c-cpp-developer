#include <iostream>
#include <string>

using namespace std;

class Robo {
  private: 
    string nome;
    string modelo;
    int anoFabricacao;
  
  public: 
    Robo(string nome, string modelo, int anoFabricacao) {
      this -> nome = nome;
      this -> modelo = modelo;
      this -> anoFabricacao = anoFabricacao;
    }
  
    void exibirInformacoes() {
      cout << "O robô " << nome << ", modelo " << modelo << ", foi fabricado em " << anoFabricacao << "." << endl;
    }
};

int main() {
  string nome, modelo;
  int ano;
  
  getline(cin, nome);
  getline(cin, modelo);
  cin >> ano;
  
  Robo meuRobo(nome, modelo, ano);
  
  meuRobo.exibirInformacoes();
  
  return 0;
}

