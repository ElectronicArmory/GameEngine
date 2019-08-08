//
//  GameActor.cpp
//  GameEngine
//
//  Created by Mike Z on 8/7/19.
//  Copyright © 2019 Z Studio Labs. All rights reserved.
//

#include "GameActor.hpp"
#include <string>
#include "ResourcePath.hpp"



GameActor::GameActor()
{
    context = nullptr;
}



GameActor::GameActor(RenderWindow &window, String textureFilename)
{
    context = &window;
    
    if (!mainTexture.loadFromFile(resourcePath() + textureFilename)) {
        return EXIT_FAILURE;
    }
    
    mainSprite = Sprite(mainTexture);
    position = Vector2f(0,0);
}



void GameActor::setPosition(Vector2f newPosition)
{
    mainSprite.setPosition(newPosition.x, newPosition.y);
    
    position = newPosition;
}



void GameActor::draw()
{
    if( context != nullptr ){
        context->draw(mainSprite);
    }
}


