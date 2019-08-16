//
//  GameWorld.cpp
//  GameEngine
//
//  Created by Mike Z on 8/15/19.
//  Copyright © 2019 Z Studio Labs. All rights reserved.
//

#include "GameWorld.hpp"



GameWorld* GameWorld::_gameWorld;



GameWorld* GameWorld::getGameWorld()
{
    if( _gameWorld == nullptr )
    {
        _gameWorld = new GameWorld;
    }

    return _gameWorld;
}



GameWorld::GameWorld()
{
    // Create the main window
    _window.create(sf::VideoMode(800, 600), "Window Name");
    
    // Set the Icon
    sf::Image icon;
    if (!icon.loadFromFile(resourcePath() + "icon.png")) {
        return EXIT_FAILURE;
    }
    _window.setIcon(icon.getSize().x, icon.getSize().y, icon.getPixelsPtr());
}



sf::RenderWindow* GameWorld::getWindow()
{
    return &_window;
}


