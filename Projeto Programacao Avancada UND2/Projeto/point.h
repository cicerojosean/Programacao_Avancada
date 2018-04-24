#ifndef POINT_H
#define POINT_H

/**
 * @brief é uma classe que representa um ponto em um espaço bidimensional.
 */

class Point
{
private:
    /**
     * @brief x É a coordenada do ponto no eixo X.
     */
    /**
     * @brief y É a coordenada do ponto no eixo Y.
     */
    float x, y;

public:
    /**
   * @brief É um construtor padrão da classe que pode receber coordenadas iniciais ou não.
   * @details Caso não sejam colocadas, as coordenadas serão (0,0).
   * @param _x É a coordenada do ponto no eixo X.
   * @param _y É a coordenada do ponto no eixo Y.
   */
  Point(float _x=0, float _y=0);
  /**
   * @brief Define o valor da coordenada X do ponto.
   * @param _x Coordenada X do ponto.
   */
  void setX(float _x);
  /**
   * @brief Define o valor da coordenada Y do ponto.
   * @param _y Coordenada Y do Ponto.
   */
  void setY(float _y);



  /**
   * @brief Método que define as coordenadas X e Y do ponto.
   * @param _x Coordenada X do ponto.
   * @param _y Coordenada Y do Ponto.
   */
  void setXY(float _x, float _y);



  /**
   * @brief Imprime o valor da coordenada X do ponto.
   * @return O valor da coordenada X do ponto.
   */
  float getX();



  /**
   * @brief Imprime o valor da coordenada Y do ponto.
   * @return O valor da coordenada Y do ponto.
   */
  float getY();

  /**
   * @brief Adiciona as coordenadas (x,y) do ponto com as coordenadas de um outro ponto P1(x1,y1) fornecido
   * @details Armazena o resultado (x+x1,y+y1) nas coordenadas de um novo ponto, que deverá ser retornado para o cliente da classe.
   * @param p1 Ponto fornecido.
   * @return Retorna o ponto com as coordenadas (x+x1,y+y1) para o cliente da classe.
   */
  Point add(Point p1);
  /**
   * @brief Subtrai as coordenadas (x,y) do ponto com as coordenadas de um outro ponto P1(x1,y1) fornecido
   * @details Armazena o resultado (x-x1,y-y1) nas coordenadas de um novo ponto, que deverá ser retornado para o cliente da classe.
   * @param p1 Ponto fornecido.
   * @return Retorna o ponto com as coordenadas (x-x1,y-y1) para o cliente da classe.
   */
  Point sub(Point p1);

  /**
   * @brief Calcula a distância do ponto para a origem do sistema de coordenadas.
   * @return Retorna o valor da norma.
   */
  float norma();


  /**
   * @brief Translada as coordenadas dos pontos.
   * @param a Valor que será adicionado a coordenada X.
   * @param b Valor que será adicionado a coordenada Y.
   */
  void translada(float a, float b);


  /**
   * @brief Função que imprime as coordenadas do ponto.
   */
  void imprimir();


};


#endif // POINT_H
