#include <iostream>
#include "map.hpp"

void Map::execute() {
  create_window("Map", WINDOW_WIDTH, WINDOW_HEIGHT);
  while (window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event)) {
      handle_window_event(event);
    }
    window.clear();
    window.display();
  }
}

void Map::create_window(string name, int window_width, int window_height) {
  window.create(
    sf::VideoMode(window_width, window_height),
    name
  );
}

void Map::handle_window_event(sf::Event event) {
  switch(event.type) {
    case sf::Event::Closed:
      window.close();
      break;

    case sf::Event::KeyPressed:
      switch(event.key.code) {
        case sf::Keyboard::Escape:
          window.close();
          break;

        default:
          break;
      }
      break;

    default:
      break;
  }
}
