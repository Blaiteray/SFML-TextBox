#include<SFML/Graphics.hpp>

namespace sdx {
  class Text {
  private:
    sf::Font font;
    sf::Text text;
  public:
    Text(sf::String, sf::Vector2f);
    sf::Text get();
    void set(sf::String);
  };

  class TextBox {
  private:
    Text inpText;
  public:
    TextBox();
    void draw(sf::RenderWindow &);
  };
}