/*****************************************
 * This is just implementaion of our textbox header.
 * You have to use sdx namespace in order to use the
 * Text and TextBox Class.
 * 
 * 
 * ****************************************/

#include "src/textbox.hpp"


int main() {
  sf::RenderWindow window(sf::VideoMode(820,540),"Blaiteray Antivirus",sf::Style::Titlebar|sf::Style::Close);
  sdx::Text text("",134,260);
  text.setSize(20);
  sdx::TextBox textBox;
  textBox.setSize(560,32);
  textBox.setPosition(130,200);
  textBox.setBorder(2);

  while(window.isOpen()) {
    sf::Event event;
    while(window.pollEvent(event)) {
      textBox.handleEvent(event);
      if(event.type==sf::Event::Closed) {
        window.close();
      }
    }
    text.setText(textBox.getInput());
    window.clear(sf::Color::White);
    textBox.draw(window);
    window.draw(text.get());
    window.display();
  }

  return 0;
}
