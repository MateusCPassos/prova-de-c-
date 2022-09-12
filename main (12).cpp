#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    const int qtQuestoes = 10;
    string perguntas[qtQuestoes]{"1)para texto com apenas um caractere ultilizamos quais tipos de variaveis?","2)Quais as 3 divisões basica de um algoritimo?","3)Qual a biblioteca basica de entrada e saida de dados?","4)Para que serve o cin em c++?","5)qual o tipo de variavel dada para o valor 5.932?","6)na linguagem c++ o operador que siginifica diferente é?","7)Qual é o operador logico conhecido como ou em c++?","8)Para que serve a variavel bool?","9)Quais dessas opçoões é um laço de repetição?","10)O que é uma constante?"};
    string alternativa[qtQuestoes]  {"{A)Float\nB)int\nC)string\nD)char\nE)bool",
                                    "A)processamento, entra e saida\nB)entrada, processamento e saida\nC)analise, saida e processamento\nD)entrada, processamento, analise\nE)nenhuma das alternativas acima",
                                    "A)#include <math.h>\nB)#include <stdio.h>\nC)#include <string>\nD)#include <iostream>\nE)nenhuma das alternativas acima",
                                    "A)Para realizar a leitura de uma sequencia de dados\nB)É um operador de expressão\nC)Serve para ultilizar if e else\nD)para apresentar um resultado boleano\nE)nenhuma das alternativas acima",
                                    "A)int\nB)Float\nC)char\nD)bool\nE)string",
                                    "A)==\nB)<>\nC)>=\nD)!=\nE)><",
                                    "A)&&\nB)||\nC)<>\nD)!=\nE)nenhuma das alternativas acima",
                                    "A)para armazenar texto de ate 20 caracteres\nB)para retornar 0 ou 1\nC)para armazenar textos de apenas um caractere\nD)declarar um numero inteiro\nE)armazena textos complexos",
                                    "A)if\nB)else\nC)while\nD)cout\nE)vetor",
                                    "A)espaço na memoria não editavel\nB)espaço da memoria editavel\nC)multiplo espaço de memoria\nD)variavel\nE)nenhuma das alternativas acima"};
 
    string gabarito[qtQuestoes]{"D","B","D","A","B","D","B","B","C","A"};
    string resposta_aluno[qtQuestoes];
    int nota=0;
    char variavelResposta;
   
    for(int i=0; i<qtQuestoes; i++){
        cout<<perguntas[i]<<endl;
        cout<<alternativa[i]<<endl;
        cin>>resposta_aluno[i];
        while(resposta_aluno[i].size() > 1){
            cout<<"deve ser inserido somente um caractere na resposta"<<endl;
            cin>>resposta_aluno[i];
        }
        int n = resposta_aluno[i].length();
        char char_array[ n + 1];
        strcpy(char_array, resposta_aluno[i].c_str());
        variavelResposta = char_array[0];
   
        resposta_aluno[i] = toupper(variavelResposta);
        if(resposta_aluno[i]==gabarito[i]){
            nota+=1;
        }else{
            cout<<"a alternativa esta incorreta, você digitou: "<< resposta_aluno[i]<< " a resposta seria a alternativa: "<<gabarito[i]<<endl;
        }
        cout<<"--------------"<<endl;
       
   
    }
   
    cout<<"A sua nota foi: "<<nota;
    return 0;
}