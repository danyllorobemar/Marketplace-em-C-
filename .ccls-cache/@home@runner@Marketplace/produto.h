#ifndef PRODUTO_H
#define PRODUTO_H

#import <iostream>

using namespace std;

class Produto {
    public:
        int id; // número incremental
        string nome;
        float preco;
        int quantidade;
};

#endif