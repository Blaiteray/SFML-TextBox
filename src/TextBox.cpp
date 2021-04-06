#include "./textbox.hpp"

namespace sdx {
    Text::Text(sf::String string, sf::Vector2f pos) {
    font.loadFromFile("asset/monospace.ttf");
    text.setFont(font);
    text.setString(string);
    text.setFillColor(sf::Color::Black);
    text.setCharacterSize(16);
    text.setPosition(pos);
  }
  sf::Text Text::get() {
    return text;
  }
  void Text::set(sf::String string) {
    text.setString(string);
  }

  TextBox::TextBox() : inpText("",sf::Vector2f(0,0)) {

  }
}