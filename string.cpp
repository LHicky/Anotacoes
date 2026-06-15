#include <bits/stdc++.h>
// A biblioteca bits/stdc++.h inclui quase todas as bibliotecas padrão (vector, string, math, etc.).

using namespace std;
// Atalho para não precisar digitar "std::";

int main() {
    
    string texto; // Cria uma variável do tipo string de nome "texto"
    
    // Para atribuir um valor textual direto, usamos aspas duplas
    texto = "Teste"; 
    cout << "Texto inicial: " << texto << "\n\n";
    
    cout << "Digite duas palavras separadas por espaco (usando cin >>): \n";
    cin >> texto; 
    // O 'cin' para de ler assim que encontra o primeiro espaço, tabulação ou quebra de linha.
    cout << "O cin pegou apenas: " << texto << "\n\n";
    
    getline(cin >> ws, texto);
    // IMPORTANTE: Limpar o buffer e ignorar espaços em branco antes do getline
    cout << "Digite uma frase completa (usando getline): \n";
    getline(cin >> ws, texto); 
    // O 'getline' lê a linha inteira, incluindo os espaços, até você apertar Enter.
    cout << "O getline pegou: " << texto << "\n\n";
    
    // 3. LEITURA EM LOOPS
    cout << "Digite duas palavras (lidas em um loop for): \n";
    for(int i = 0; i < 2; i++){
        cin >> texto;
        cout << "Palavra " << i+1 << ": " << texto << "\n";
    }
    cout << "\n";
    
    cout << "Digite palavras (digite 0 para encerrar o loop while): \n";
    while(cin >> texto){
        if(texto.find("0") != string::npos) {
            break; // Sai do loop se encontrar o caractere '0'
        }
        cout << "Palavra lida: " << texto << "\n";
    }
    cout << "\n";
    
    // 4. PROPRIEDADES DA STRING
    texto = "C++";
    cout << "Texto atual: " << texto << "\n";
    // size() e length() fazem exatamente a mesma coisa: retornam o tamanho da string
    cout << "Tamanho (size): " << texto.size() << "\n";
    cout << "Tamanho (length): " << texto.length() << "\n";
    
    // empty() retorna 1 (true) se a string estiver vazia, ou 0 (false) se tiver conteúdo
    cout << "A string esta vazia? " << texto.empty() << "\n\n";
    
    // 5. ACESSO E MANIPULAÇÃO DE CARACTERES
    texto = "Maratona";
    cout << "Texto: " << texto << "\n";
    cout << "Primeiro caractere (front): " << texto.front() << "\n";
    cout << "Ultimo caractere (back): " << texto.back() << "\n";
    
    texto.push_back('s'); // Adiciona um único caractere no FINAL da string
    cout << "Apos push_back('s'): " << texto << "\n";
    
    texto.pop_back(); // Remove o ÚLTIMO caractere da string (não recebe argumentos)
    cout << "Apos pop_back(): " << texto << "\n\n";
    
    // 6. APAGAR, INSERIR E SUBSTITUIR
    texto = "Exemplo";
    // erase(posicao_inicial, quantidade_de_caracteres)
    texto.erase(2, 3); // Remove 3 caracteres a partir do índice 2
    cout << "Apos erase(2, 3): " << texto << "\n";
    
    texto = "Teste";
    // insert(posicao, string_a_ser_inserida)
    texto.insert(2, "XYZ");
    cout << "Apos insert(2, \"XYZ\"): " << texto << "\n";
    
    texto = "Programacao";
    // replace(posicao, quantidade, nova_string)
    texto.replace(0, 5, "Isto"); // Substitui 5 caracteres a partir do índice 0 por "Isto"
    cout << "Apos replace: " << texto << "\n\n";
    
    // 7. SUBSTRINGS (CORTAR STRINGS)
    texto = "Computacao";
    // substr(inicio, tamanho) -> extrai um pedaço da string
    cout << "Sub-string de (1, 4): " << texto.substr(1, 4) << "\n"; 
    cout << "Sub-string do indice 4 ate o fim: " << texto.substr(4) << "\n\n";
    
    // 8. BUSCAS (FIND)
    texto = "gato sapato";
    
    // find() busca da esquerda para a direita. Retorna o índice da primeira ocorrência.
    cout << "Primeira posicao de 'ato': " << texto.find("ato") << "\n";
    
    // rfind() busca da direita para a esquerda (reverso).
    cout << "Ultima posicao de 'ato': " << texto.rfind("ato") << "\n";
    
    // find(termo, posicao_inicial) começa a buscar a partir daquela posição
    cout << "Buscar 'ato' comecando do indice 4: " << texto.find("ato", 4) << "\n";
    
    // Se o find não encontra nada, ele retorna 'string::npos'
    if(texto.find("cachorro") == string::npos){
        cout << "Palavra 'cachorro' nao foi encontrada!\n";
    }
    
    return 0;
}
