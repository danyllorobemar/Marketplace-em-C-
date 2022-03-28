#ifndef VENDA_H
#define VENDA_H

#import <iostream>

using namespace std;

class Venda {
    public:
        int id; // número incremental
        int comprador_id; // Id do Usuário que fez a compra
        int loja_id; // Id da Loja que o produto foi comprado
        int produto_id; // Id do produto comprado
        int quantidade; // Quantos produtos foram comprados
        float preco_unitario; // Qual era o preço do produto no momento da venda
};

#endif