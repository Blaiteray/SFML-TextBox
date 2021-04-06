#include "src/textbox.hpp"

int main() {
  sf::RenderWindow window(sf::VideoMode(820,540),"Blaiteray Antivirus",sf::Style::Titlebar|sf::Style::Close);
  sdx::TextBox textBox;


  while(window.isOpen()) {
    sf::Event event;
    while(window.pollEvent(event)) {
      textBox.handleEvent(event);
      if(event.type==sf::Event::Closed) {
        window.close();
      }
    }
    
    window.clear(sf::Color::White);
    textBox.draw(window);
    window.display();
  }

  return 0;
}
