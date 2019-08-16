//
//  GameActor.hpp
//  GameEngine
//
//  Created by Mike Z on 8/7/19.
//  Copyright © 2019 Z Studio Labs. All rights reserved.
//

#ifndef GameActor_hpp
#define GameActor_hpp

#include <stdio.h>
#include <vector>

#include <SFML/Graphics.hpp>

#include "GameEngineMin.h"
#include "GameActorComponent.hpp"


using namespace sf;


class GameActor
{
public:
    GameActor();
    
    GameActor(GameWorld* gameWorld, String textureFilename);

    void setWorldPosition(Vector2f newPosition);
    const Vector2f getWorldPosition() const;
    
    void draw();
    
private:
    GameWorld* _gameWorld;
    
    RenderWindow *context;
    
    std::vector<class GameActorComponent *>components;
    
    Texture mainTexture;
    Sprite mainSprite;
    
    Vector2f position;
};
#endif /* GameActor_hpp */


