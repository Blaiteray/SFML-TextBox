# SFML-TextBox

A utility [SFML](https://www.sfml-dev.org/) class in which creates a complete textbox, and get input from it.

## Properties

- [x] Has black border, white background, black font color.
- [x] Font type - monospace. Size sets automatically depending on box height.
- [x] Left click on the box to type. Clicking outside of the box will disable it.
- [x] Use left and right arrow or mouse left click to navigate through text.
- [ ] Text won't go outside of the box. So the maximum number of characters depends on textbox width.
- [ ] Don't have a copy-paste facility.

<img src="https://github.com/Blaiteray/SFML-TextBox/blob/master/example.png" width="80%" height="80%"/>

## How to use

### Prerequisites

- You have to have [SFML](https://www.sfml-dev.org/download.php) downloaded in your PC.
- Any C++ compiler and
- Decent knowledge about using external header files in C++.

And also you have to download `SFML-TextBox.rar` from [here](https://github.com/Blaiteray/SFML-TextBox/releases).

### Compilation

You'll need only three files from the `include` directory of the release. Include `textbox.hpp` in your main C++ source and compile it with `textbox.cpp`. If you replace `monospace.ttf` with some other font, everthing might break.

## `sdx::TextBox` class Reference

| Return type | Name and parameter | Description |
| --- | --- | --- |
|**void**| `TextBox()` | Default constructor. Creates an instance `TextBox` class. |
|**void**| `TextBox(float width, float height, flat positionX, float positionY, float borderThickness)` | Another `TextBox` constructor. First two parameters take `width` and `height`, second two take position of the upper-right corner of the textbox, and the last one takes the border `thickness`. |
|**void**| `draw(sf::RenderWindow & window)` | Takes the main `window` (object of `RenderWindow` class) as parameter. Place it inside the main event loop in order to draw the textbox in the window. |
|**void**| `handleEvent(sf::Event & event)` | Takes the instance `sf::Event` class inside the main event loop. Place this function inside `window.pollEvent(event)` loop in order to handle events related to this textbox. |
| `sf::String` | `getCurrentText()` | Returns the `text` inside the textbox. |
| `sf::String` | `getInput` | Returns the inserted `text` after pressing `Enter`. |
|**void**| `setSize(float width, float height)` | Updates textbox size. |
|**void**| `setPosition(float positionX, float positionY)` | Updates position of upper-left corner of the textbox. |
|**void**| `setBorder(float thickness)` | Updates border thickness. |

