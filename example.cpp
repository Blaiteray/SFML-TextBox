/*****************************************
 * This is just implementaion of our textbox header.
 * You have to use sdx namespace in order to use the
 * Text and TextBox Class.
 * 
 * 
 * ****************************************/

#include "include/textbox.hpp"


int main() {
    sf::RenderWindow window(sf::VideoMode(820,540),"TextBox Implementation",sf::Style::Titlebar|sf::Style::Close);
    sdx::TextBox::Text text("",134,220);
    text.setSize(20);
    sdx::TextBox textBox(560,32,130,160,2);
    sdx::TextBox textBox2;
    textBox2.setPosition(180,300);
    textBox2.setSize(460,24);
    textBox2.setBorder(1);

    while(window.isOpen()) {
        sf::Event event;
        while(window.pollEvent(event)) {
            textBox.handleEvent(event);
            textBox2.handleEvent(event);
            if(event.type==sf::Event::Closed) {
                window.close();
            }
        }
        text.setText(textBox.getInput());
        window.clear(sf::Color::White);
        textBox.draw(window);
        textBox2.draw(window);
        window.draw(text.get());
        window.display();
    }

    return 0;
}
