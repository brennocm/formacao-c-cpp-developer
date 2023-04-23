#include <stdio.h>

void imprimirDiagnostico(int idade, int concentracaoGlicose, float imc) {
   
   if(idade >= 40 && concentracaoGlicose <= 120){
      printf("Não tem diabetes. IMPORTANTE: cuide da sua saúde por estar acima dos 40 anos");
   } 
     else if(concentracaoGlicose < 120 && idade < 40){
        printf("Você não corre risco de diabetes");
      }  
        else if(concentracaoGlicose >= 120 && concentracaoGlicose <= 125 && imc > 27.0){
          printf("Você tem uma probabilidade de adquirir diabetes. Procure um médico");
        }
          else if(concentracaoGlicose >= 126){
            printf("É altamente recomendável que você procure um médico para avaliação");
          }
        
}

int main() {
    int idade, concentracaoGlicose;
    float imc;

    scanf("%d", &idade);
    scanf("%d", &concentracaoGlicose);
    scanf("%f", &imc);

    imprimirDiagnostico(idade, concentracaoGlicose, imc);

    return 0;
}
