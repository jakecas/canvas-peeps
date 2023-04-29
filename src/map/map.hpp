#ifndef MAP_HPP
#define MAP_HPP

#include <SFML/Graphics.hpp>
#include <string>

using namespace std;

#define WINDOW_WIDTH 1280
#define WINDOW_HEIGHT 720

class Map {
  public:
    void execute();

  private:
    sf::RenderWindow window;
    void create_window(string name, int window_width, int window_height);
    void handle_window_event(sf::Event event);
};

#endif
