#include <bits/stdc++.h>
// A biblioteca bits/stdc++.h inclui as ferramentas de formatação (iomanip).

using namespace std;
// Atalho para não precisar digitar "std::" antes de funções como cout e cin.

int main() {
    double num = 3.141592;
    
    // --- 1. CASAS DECIMAIS E PRECISÃO ---
    cout << "--- Precision e Fixed ---\n";
    cout << "Numero original: " << num << "\n";
    
    // PERIGO: Sem 'fixed', setprecision define o total de digitos significativos!
    cout << "Sem fixed - setprecision(2): " << setprecision(2) << num << "\n"; // Imprime: 3.1
    
    // Com 'fixed', o setprecision foca apenas nas casas apos o ponto.
    // Nota: O 'fixed' fica ativo para sempre se nao for resetado!
    cout << fixed << setprecision(2);
    cout << "Com fixed - setprecision(2): " << num << "\n\n";
    
    
    // --- 2. ESPAÇAMENTO E PREENCHIMENTO (Alinhamento) ---
    cout << "--- Alinhamento com setw e setfill ---\n";
    int numInt = 1;
    
    // IMPORTANTE: O 'setw(3)' serve APENAS para o proximo item exibido. Ele se reseta sozinho!
    // O 'left' (esquerda) e 'right' (direita) continuam valendo para os proximos.
    cout << "Esquerda: [" << left << setw(3) << numInt << "]\n";
    cout << "Direita:  [" << right << setw(3) << numInt << "]\n";
    
    // 'setfill' define o caractere de preenchimento. Ele tambem eh permanente!
    cout << "Com zeros: [" << setfill('0') << setw(3) << numInt << "]\n\n";
    
    // Restaurando o preenchimento padrao (espaco em branco)
    cout << setfill(' ');
    
    
    // --- 3. NOTAÇÃO CIENTÍFICA ---
    cout << "--- Notacao Cientifica ---\n";
    cout << "Cientifico: " << scientific << num << "\n\n";
    
    
    // --- 4. BASES NUMÉRICAS (Decimal, Hex, Octal) ---
    cout << "--- Bases Numericas ---\n";
    numInt = 10;
    // Cuidado: Mudar a base afeta TODOS os inteiros seguintes!
    cout << "Decimal:     " << dec << numInt << "\n"; // 10
    cout << "Hexadecimal: " << hex << numInt << "\n"; // a
    cout << "Octal:       " << oct << numInt << "\n\n"; // 12
    
    cout << dec; // Sempre volte para decimal para nao quebrar o resto do programa!
    
    
    // --- 5. EXIBIR SINAL DE POSITIVO ---
    cout << "--- Sinal Positivo ---\n";
    numInt = 42;
    // 'showpos' força a exibicao do sinal de + em numeros positivos.
    cout << "Com sinal: " << showpos << numInt << "\n";
    cout << "Sem sinal: " << noshowpos << numInt << "\n";
    
    return 0;
}
