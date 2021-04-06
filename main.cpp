#include "src/textbox.hpp"

int main() {
  sf::RenderWindow window(sf::VideoMode(820,540),"Blaiteray Antivirus",sf::Style::Titlebar|sf::Style::Close);
  sf::String getPinp="";
  Text hW("", sf::Vector2f(6,6));
  sf::RectangleShape rect;
  rect.setSize(sf::Vector2f(820,1));
  rect.setPosition(sf::Vector2f(0,28));
  rect.setFillColor(sf::Color::Black);

  while(window.isOpen()) {
    sf::Event event;
    while(window.pollEvent(event)) {
      if(event.type==sf::Event::TextEntered) {
        if(event.text.unicode=='\b') getPinp=getPinp.substring(0,getPinp.getSize()-1);
        else if(getPinp.getSize()<=64) getPinp+=event.text.unicode;
      }
      if(event.type==sf::Event::KeyPressed) {
        if(event.key.code==sf::Keyboard::Enter) getPinp.clear();
      }
      if(event.type==sf::Event::Closed) {
        window.close();
      }
    }
    hW.set(getPinp);
    window.clear(sf::Color::White);
    window.draw(hW.get());
    window.draw(rect);
    window.display();
  }

  return 0;
}
