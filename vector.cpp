#include <bits/stdc++.h>
// A biblioteca bits/stdc++.h inclui a estrutura vector e os algoritmos sort/reverse.

using namespace std;

int main() {
    // 1. DECLARAÇÃO E INICIALIZAÇÃO
    int vetorSimples[5];    // Array tradicional: tamanho fixo e imutavel.
    vector<int> vetor(5);   // Vector: tamanho inicial 5, mas pode crescer ou diminuir!
    
    // Inserindo valores por índice (só funciona se o vector já tiver um tamanho definido)
    vetor[0] = 1;
    vetor[1] = 3;
    vetor[2] = 5;
    vetor[3] = 2;
    vetor[4] = 4;
    
    // Para vetores usamos .size() para retornar o tamanho do vetor
    cout << "Tamanho do vetor: " << vetor.size() << "\n";
    
    cout << "Elementos do vetor: ";
    for(int i = 0; i < vetor.size(); i++){
        cout << vetor[i] << " ";
    }
    cout << "\n\n";
    
    // 2. ADICIONANDO E REMOVENDO DO FINAL
    // push_back() empurra um elemento para o final do vetor, aumentando seu tamanho dinamicamente.
    vetor.push_back(6); 
    cout << "Apos push_back(6), novo tamanho: " << vetor.size() << "\n";
    cout << "Elemento na nova posicao [5]: " << vetor[5] << "\n\n";
    
    // pop_back() remove o ultimo elemento do vetor.
    vetor.pop_back();
    cout << "Apos pop_back(), tamanho voltou para: " << vetor.size() << "\n\n";
    
    // 3. LIMPEZA E VERIFICAÇÃO
    // clear() zera o vetor completamente (tamanho vira 0)
    vetor.clear();
    
    // empty() retorna 1 (true) se o vetor estiver totalmente vazio 0 (false) caso contrário
    cout << "O vetor esta vazio apos o clear()? " << vetor.empty() << "\n\n";
    
    // 4. ALIMENTANDO O VETOR COM LOOP
    // Como o vetor estava vazio (size = 0), precisamos usar um limite fixo (ex: 5)
    for(int i = 0; i < 5; i++){
        vetor.push_back(i + 1); // Vai inserir: 1, 2, 3, 4, 5
    }
    
    // 5. ALGORITMOS (REVERSE E SORT)
    // reverse() inverte a ordem atual dos elementos
    reverse(vetor.begin(), vetor.end());
    cout << "Vetor invertido (reverse): ";
    for(int x : vetor) { cout << x << " "; } // Maneira moderna de varrer um vetor! Funciona igual ao for convencional
    cout << "\n";
    
    // sort() ordena de forma crescente (do menor para o maior)
    sort(vetor.begin(), vetor.end());
    cout << "Vetor ordenado crescente (sort): ";
    for(int x : vetor) { cout << x << " "; }
    cout << "\n";
    
    // sort() com rbegin/rend ordena de forma decrescente (do maior para o menor)
    sort(vetor.rbegin(), vetor.rend());
    cout << "Vetor ordenado decrescente: ";
    for(int x : vetor) { cout << x << " "; }
    cout << "\n\n";
    
    // 6. INICIALIZAÇÃO AVANÇADA
    // Cria um vetor de tamanho 10, onde TODOS os elementos comecam valendo 0
    vector<int> novoVetor(10, 0);
    
    // 7. MATRIZES DINÂMICAS (Vetores de Vetores)
    // Cria uma matriz 10x10 preenchida com zeros
    vector<vector<int>> matriz(10, vector<int>(10, 0));
    
    cout << "Exibindo uma parte da matriz (linha 0):\n";
    for(int i = 0; i < matriz[0].size(); i++){
        cout << matriz[0][i] << " ";
    }
    cout << "\n";
    
    cout << "Exibindo a matriz completa:\n";
    
    for(int j = 0; j < matriz.size(); j++){
        for(int i = 0; i < matriz[0].size(); i++){
	        cout << matriz[j][i] << " ";
	    }
	    cout << endl;
    }
    cout << "\n";
    
    return 0;
}
