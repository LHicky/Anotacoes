#include <bits/stdc++.h>
// A biblioteca bits/stdc++.h inclui a estrutura vector e os algoritmos sort/reverse.

using namespace std;


// Conversão
int main() {
    
    // É importante saber como converter variaveis de um tipo para outro para podermos fazer manipulações
    
    // STRING
    
    // Converter de string para inteiro
    int numInt = stoi("510");
    cout << "String para Int (\"510\" + 1): " << numInt + 1 << endl;
    
    // Converter de string para long long
    long long numLong = stoll("51654320");
    cout << "String para Long Long (\"51654320\" + 1): " << numLong + 1 << endl;
    
    // Converter de string para float
    float numFloat = stof("651.231");
    cout << "String para Float (\"651.231\" + 0.001): " << numFloat + 0.001 << endl;
    
    // Converter string para double
    double numDouble = stod("651.2315631");
    cout << "String para Double: " << fixed << setprecision (7) << numDouble + 0.0000001 << endl;
    
    // NUMEROS
    
    // Converter int, long long, double, float para string
    
    string texto = to_string(numInt);
    cout << "Int para String: " << texto << endl;
    texto = to_string(numLong);
    cout << "Long Long para String: " << texto << endl;
    // Quando convertemos para string fica com 6 casas de precisão
    texto = to_string(numFloat);
    cout << "Float para String: " << texto << endl;
    texto = to_string(numDouble);
    cout << "Double para String: " << texto << endl;
    
    // Converter char p/ int
    char numChar = '4';
    numInt = numChar - '0';
    cout << "Char '4' para Int real (+1): " << numInt + 1 << endl;
    
    // Converter int p/ char
    numInt = 4;
    numChar = numInt + '0';
    cout << "Int 4 para Char: " << numChar << endl;
    
    // Converter char p/ número ASCII
    char letra = 'a';
    numInt = (int) letra;
    cout << "Codigo ASCII da letra 'a': " << numInt << endl;
    
    // Converter número ASCII p/ char
    letra = (char) numInt;
    cout << "Codigo ASCII " << numInt << " para Char: " << letra << endl;
    
    // Podemos usar isso para somarmos letras com números;
    // Supomos que queremos adicionar 2 em a para que vire c por exemplo
    cout << "Somando 2 ao char 'a': " << (char)('a' + 2) << endl;
    
    
    
    
    return 0;
}
