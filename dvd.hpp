#ifndef DVD_H
#define DVD_H
#include "Filme.hpp"

class DVD : public Filme {
private:
    string _categoria;

public:
    DVD(int id, string titulo, int qtd_disp, string categoria);
    ~DVD();
    
    virtual string get_categoria() override;

    float calc_valor_locacao (int dias) const override;



};

#endif