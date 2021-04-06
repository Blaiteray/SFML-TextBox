/***********************************
 * Implementation of textbox.hpp
 * 
 * ********************************/

#include "./textbox.hpp"

namespace sdx {
    Text::Text(sf::String string, float x, float y) {
    font.loadFromFile("asset/monospace.ttf");
    text.setFont(font);
    text.setString(string);
    text.setFillColor(sf::Color::Black);
    text.setCharacterSize(18);
    text.setPosition(sf::Vector2f(x,y));
  }
  sf::Text Text::get() {
    return text;
  }
  void Text::setText(sf::String string) {
    text.setString(string);
  }

  void Text::setPosition(float x, float y) {
    text.setPosition(sf::Vector2f(x,y));
  }
  
  void Text::setSize(unsigned int x) {
    text.setCharacterSize(x);
  }

  //*********Here starts textbox class***************//
  TextBox::TextBox() : inpText("", 6, 5) {
    outerRect.setSize(sf::Vector2f(460,32));
    innerRect.setSize(sf::Vector2f(456,28));
    outerRect.setPosition(sf::Vector2f(0,0));
    innerRect.setPosition(sf::Vector2f(2,2));
    outerRect.setFillColor(sf::Color::Black);
    innerRect.setFillColor(sf::Color::White);
    textSize=18;
    getPinp="";
    txtInp="";
    thickness=2;
    posX=0;
    posY=0;
    height=32;
    width=460;
  }


  void TextBox::setSize(float x, float y) {
    height=y;
    width=x;
    textSize=(unsigned int)(y-4-2*thickness);
    outerRect.setSize(sf::Vector2f(x,y));
    innerRect.setSize(sf::Vector2f(x-2*thickness,y-2*thickness));
    inpText.setSize(textSize);
    inpText.setPosition(posX+thickness+2,posY+thickness-1);
  }

  void TextBox::setPosition(float x, float y) {
    posX=x;
    posY=y;
    outerRect.setPosition(sf::Vector2f(x,y));
    innerRect.setPosition(sf::Vector2f(x+thickness,y+thickness));
    inpText.setPosition(x+thickness+2,y+thickness-1);
  }

  void TextBox::setBorder(float x) {
    thickness=x;
    textSize=(unsigned int)(height-4-2*x);
    innerRect.setSize(sf::Vector2f(width-2*x,height-2*x));
    inpText.setSize(textSize);
    setPosition(posX,posY);
  }

  sf::String TextBox::getCurrentText() {
    return getPinp;
  }

  sf::String TextBox::getInput() {
    return txtInp;
  }

  void TextBox::handleEvent(sf::Event & event)  {
    if(event.type==sf::Event::TextEntered) {
      if(event.text.unicode=='\b') getPinp=getPinp.substring(0,getPinp.getSize()-1);
      else if(getPinp.getSize()<=(unsigned int)(5*width/(3*textSize))) getPinp+=event.text.unicode;
    }
    if(event.type==sf::Event::KeyPressed) {
      if(event.key.code==sf::Keyboard::Enter) {
        txtInp=getPinp;
        getPinp.clear();
      }
    }
  }

  void TextBox::draw(sf::RenderWindow & window) {
    inpText.setText(getPinp);
    window.draw(outerRect);
    window.draw(innerRect);
    window.draw(inpText.get());
  }
}