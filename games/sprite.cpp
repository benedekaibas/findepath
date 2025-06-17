#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>


struct game_parameters{
  unsigned int size_x = 800;
  unsigned int size_y = 800;
};

game_parameters obj1;

void display_window(){
  sf::RenderWindow window(sf::VideoMode({obj1.size_x, obj1.size_y}), "Sprite Game");
}

void display(){
  sf::RenderWindow window(sf::VideoMode({800, 600}), "Sprite Game");
}

int main(){
  display_window();
  //display();
}

