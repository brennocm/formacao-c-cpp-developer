#include <iostream>
#include <string>

class Produto {
  protected: 
    std::string nome;

  public: 
    Produto(std::string n): nome(n) {}

    virtual std::string informacoes() = 0;
};

class Eletronico: public Produto {
  int garantia;

  public: 
    Eletronico(std::string n, int g): Produto(n), garantia(g) {}

    std::string informacoes() override {
      return nome + ", garantia: " + std::to_string(garantia) + " meses";
    }
};

class Vestuario: public Produto {
  std::string tamanho;

  public:
    Vestuario(std::string n, std::string t): Produto(n), tamanho(t) {}

    std::string informacoes() override {
      return nome + ", tamanho: " + tamanho;
    }
};

int main() {
  std::string nome;
  std::getline(std::cin, nome);
  char tipo;
  std::cin >> tipo;
  
  Produto * produto;
  if (tipo == 'E') {
    int garantia;
    std::cin >> garantia;
    produto = new Eletronico(nome, garantia);
  } else if (tipo == 'V') {
    std::string tamanho;
    std::cin >> tamanho;
    produto = new Vestuario(nome, tamanho);
  }
  
  std::cout << produto->informacoes() << std::endl;
  
  delete produto;
  return 0;
}

