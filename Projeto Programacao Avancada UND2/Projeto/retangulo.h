#ifndef RETANGULO_H
#define RETANGULO_H
#include "poligono.h"

/**
 * @brief é uma subclasse derivada da classe Polígono que representa um retângulo.
 */
class Retangulo:public Poligono   //HERANÇA de Polígono
{

public:
    /**
     * @brief Construtor padrão da classe retangulo.
     * @param x Representa a coordenada X do vertice superior esquerdo do retangulo.
     * @param y Representa a coordenada Y do vertice superior esquerdo do retangulo.
     * @param largura Largura do retangulo.
     * @param altura Altura do retangulo.
     */
    Retangulo(float x, float y, float largura, float altura);
};

#endif // RETANGULO_H
