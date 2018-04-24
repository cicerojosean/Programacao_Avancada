#ifndef POLIGONO_H
#define POLIGONO_H
#include "Point.h"

/**
 * @brief é uma classe que representa poligonos convexos com no máximo 100 vértices.
 */
class Poligono
{

protected:
    /**
     * @brief Cria um vetor do objeto ponto para definir os vértices.
     */
    Point vertices[100];



    /**
     * @brief É uma variável inteira que salva o número de vértices do polígono.
     */
    int numerovertices=0;



public:
    /**
     * @brief Método utilizado para inserir os vértices do polígono.
     * @details Assume-se que os vértices deverão ser inseridos conforme a sequência (anti-horária) em que figuram ao redor do polígono.
     * @param Coordenada no eixo X do vertice.
     * @param Coordenada no eixo Y do vertice.
     */
    void inserirvertices(float a, float b);



    /**
     * @return Retorna o número de vértices que o polígono possui.
     */
    int numvertices();




    /**
     * @brief Calcula a área do polígono e retorna para o usuário o seu valor.
     * @return Retorna a área do polígono.
     */
    float area();




    /**
     * @brief Método utilizado para transladar cada vértice do polígono para (x+a,y+b).
     * @param Valor que sera adicionado a coordenada X de cada vértice do poligono.
     * @param Valor que sera adicionado a coordenada Y de cada vértice do poligono.
     */
    void translada(float a, float b);



    /**
     * @brief Método utilizado para rotacionar o polígono em θ graus no sentido anti-horário em torno de um ponto (x0,y0) fornecido pelo usuário.
     * @param Angulo θ(em graus) que o poligono ira rotacionar.
     * @param Coordenada X do ponto no qual o poligono vai rotacionar.
     * @param Coordenada Y do ponto no qual o poligono vai rotacionar.
     */
    void rotacao(float a, float b, float c);



    /**
     * @brief Método que imprime o poligono armazenado da forma (x0,y0)→(x1,y1)→(x2,y2)→…​→(x0,y0).
     */
    void imprimir();
};

#endif // POLIGONO_H
