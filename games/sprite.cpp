#include <SFML/Graphics/RenderWindow.hpp>
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

struct game_parameters{
  const int size_x = 800;
  const int size_y = 800;
};



void display_window(){
  game_parameters obj1;
  const int window_size = obj1.size_x;
  sf::RenderWindow window(sf::VideoMode({800, 600}), "Sprite Game");
};

