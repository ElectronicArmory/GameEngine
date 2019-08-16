//
//  GameActor.cpp
//  GameEngine
//
//  Created by Mike Z on 8/7/19.
//  Copyright © 2019 Z Studio Labs. All rights reserved.
//

#include "GameActor.hpp"
#include <string>



GameActor::GameActor()
{
    context = nullptr;
}



GameActor::GameActor(GameWorld* gameWorld, String textureFilename)
{
    context = gameWorld->getWindow();
    
    if (!mainTexture.loadFromFile(resourcePath() + textureFilename)) {
        return EXIT_FAILURE;
    }
    
    mainSprite = Sprite(mainTexture);
    mainSprite.setPosition(0, 0);
}



void GameActor::setWorldPosition(Vector2f newPosition)
{
    mainSprite.setPosition(newPosition.x, newPosition.y);
}



const Vector2f GameActor::getWorldPosition() const
{
    return mainSprite.getPosition();
}



void GameActor::draw()
{
    if( context != nullptr ){
        context->draw(mainSprite);
    }
}


