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
#include "GameActor.hpp"


class GameActorComponent
{
public:
    GameActorComponent();
    GameActorComponent(class GameActor *parentGameActor);
    
private:
    GameActor *parentGameActor;
};

#endif /* GameActorComponent_hpp */
