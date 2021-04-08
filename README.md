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

Class reference : https://github.com/Blaiteray/SFML-TextBox/wiki
