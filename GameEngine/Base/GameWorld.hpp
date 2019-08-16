//
//  GameWorld.hpp
//  GameEngine
//
//  Created by Mike Z on 8/15/19.
//  Copyright © 2019 Z Studio Labs. All rights reserved.
//

#ifndef GameWorld_hpp
#define GameWorld_hpp

#include <stdio.h>
#include "GameEngineMin.h"


class GameWorld
{
public:
    static GameWorld* getGameWorld();

    sf::RenderWindow* getWindow();
    
private:
    static GameWorld* _gameWorld;
    GameWorld();
    
    sf::RenderWindow _window;
};
#endif /* GameWorld_hpp */
