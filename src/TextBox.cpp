#include "./textbox.hpp"

namespace sdx {
    Text::Text(sf::String string, sf::Vector2f pos) {
    font.loadFromFile("asset/monospace.ttf");
    text.setFont(font);
    text.setString(string);
    text.setFillColor(sf::Color::Black);
    text.setCharacterSize(18);
    text.setPosition(pos);
  }
  sf::Text Text::get() {
    return text;
  }
  void Text::set(sf::String string) {
    text.setString(string);
  }

  //*********Here starts textbox class***************//
  TextBox::TextBox() : inpText("", sf::Vector2f(106,105)) {
    outerRect.setSize(sf::Vector2f(460,32));
    innerRect.setSize(sf::Vector2f(456,28));
    outerRect.setPosition(sf::Vector2f(100,100));
    innerRect.setPosition(sf::Vector2f(102,102));
    outerRect.setFillColor(sf::Color::Black);
    innerRect.setFillColor(sf::Color::White);
    getPinp="";
  }

  void TextBox::draw(sf::RenderWindow & window) {
    inpText.set(getPinp);
    window.draw(outerRect);
    window.draw(innerRect);
    window.draw(inpText.get());
  }

  void TextBox::handleEvent(sf::Event & event)  {
    if(event.type==sf::Event::TextEntered) {
      if(event.text.unicode=='\b') getPinp=getPinp.substring(0,getPinp.getSize()-1);
      else if(getPinp.getSize()<=42) getPinp+=event.text.unicode;
    }
    if(event.type==sf::Event::KeyPressed) {
      if(event.key.code==sf::Keyboard::Enter) getPinp.clear();
    }
  }
}