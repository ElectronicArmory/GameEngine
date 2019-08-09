//
//  GameActorComponent.hpp
//  GameEngine
//
//  Created by Mike Z on 8/7/19.
//  Copyright © 2019 Z Studio Labs. All rights reserved.
//

#ifndef GameActorComponent_hpp
#define GameActorComponent_hpp

#include <stdio.h>
#include "GameEngine.h"

#include "GameActor.hpp"

using namespace sf;


class GameActorComponent
{
public:
    GameActorComponent();
    GameActorComponent(class GameActor *parentGameActor);
    
    Vector2f getWorldPosition();
    Vector2f getRelativePosition();
    
    
private:
    Vector2f position;
    GameActor *parentGameActor;
};

#endif /* GameActorComponent_hpp */
