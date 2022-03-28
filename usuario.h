#ifndef USUARIO_H
#define USUARIO_H

#import <iostream>

using namespace std;

class Usuario {
    public:
        int id; // número incremental
        string email;
        string nome;
        string senha_hash; // Senha em hash
};

#endif