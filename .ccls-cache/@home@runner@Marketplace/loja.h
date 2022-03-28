#ifndef LOJA_H
#define LOJA_H

#import <iostream>
#import <vector>
#include "produto.h"
#include "usuario.h"

using namespace std;

class Loja {
    public:
        int id; // número incremental
        string nome;
        Usuario proprietario;
        vector<Produto> produtos;
};

#endif