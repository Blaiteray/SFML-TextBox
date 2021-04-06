#include<SFML/Graphics.hpp>

class Text {
private:
  sf::Font font;
  sf::Text text;
public:
  Text(sf::String, sf::Vector2f);
  sf::Text get();
  void set(sf::String);
};