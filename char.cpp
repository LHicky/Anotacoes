#include <bits/stdc++.h>
// A biblioteca bits/stdc++.h inclui quase todas as bibliotecas padrão.

using namespace std;
// Atalho para não precisar digitar "std::" antes de funções como cout e cin.

int main() {
    // 1. DECLARAÇÃO E ATRIBUIÇÃO
    char caractere;
    caractere = 'a'; 
    // Para usarmos char (um único caractere), precisamos colocá-lo entre aspas simples.
    cout << "Caractere: " << caractere << "\n\n";
    
    // 2. LEITURA DE UM CHAR
    cout << "Digite uma palavra:\n";
    cin >> caractere;
    // O cin lê apenas o PRIMEIRO caractere digitado, ignorando o resto da palavra.
    cout << "Letra capturada: " << caractere << "\n\n";
    
    // RESETANDO PARA OS TESTES
    caractere = 'a';
    
    // 3. TRANSFORMAÇÕES (MAIÚSCULO / MINÚSCULO)
    // As funções toupper/tolower retornam o código numérico (ASCII) do caractere.
    // Por isso, precisamos usar o (char) antes para converter esse número de volta em letra.
    cout << "--- Transformacoes ---\n";
    cout << "Original: " << caractere << "\n";
    cout << "Com toupper: " << (char)toupper(caractere) << "\n\n";
     
    caractere = 'A';
    cout << "Original: " << caractere << "\n";
    cout << "Com tolower: " << (char)tolower(caractere) << "\n\n";
     
    // 4. VERIFICAÇÕES
    // IMPORTANTE: Usamos (bool) antes da função porque o C++ pode retornar qualquer 
    // número diferente de zero para "verdadeiro". O (bool) força o resultado a ser 1 ou 0.
    cout << "--- Verificacoes (Retornam 1 para Sim, 0 para Nao) ---\n";
     
    // isupper: Verifica se é maiúsculo
    cout << "A letra 'A' eh maiuscula? " << (bool)isupper('A') << "\n";
    cout << "A letra 'a' eh maiuscula? " << (bool)isupper('a') << "\n\n";
     
    // islower: Verifica se é minúsculo
    cout << "A letra 'A' eh minuscula? " << (bool)islower('A') << "\n";
    cout << "A letra 'a' eh minuscula? " << (bool)islower('a') << "\n\n";
     
    // isdigit: Verifica se é um número (caractere de '0' a '9')
    cout << "O caractere '0' eh um numero? " << (bool)isdigit('0') << "\n";
    cout << "O caractere 'A' eh um numero? " << (bool)isdigit('A') << "\n\n";
     
    // isalpha: Verifica se é uma letra (alfabeto)
    cout << "O caractere '0' eh uma letra? " << (bool)isalpha('0') << "\n";
    cout << "O caractere 'A' eh uma letra? " << (bool)isalpha('A') << "\n\n";
     
    // isalnum: Verifica se é alfanumérico (letra ou número)
    cout << "O caractere '0' eh letra/numero? " << (bool)isalnum('0') << "\n";
    cout << "O caractere '?' eh letra/numero? " << (bool)isalnum('?') << "\n\n";
     
    // isspace: Verifica se é um espaço em branco, tabulação (\t) ou quebra de linha (\n)
    cout << "O caractere ' ' eh um espaco? " << (bool)isspace(' ') << "\n";
    cout << "O caractere 'A' eh um espaco? " << (bool)isspace('A') << "\n";
    
    return 0;
}
