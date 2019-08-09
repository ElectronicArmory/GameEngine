//
//  GameActorComponent.cpp
//  GameEngine
//
//  Created by Mike Z on 8/7/19.
//  Copyright © 2019 Z Studio Labs. All rights reserved.
//

#include "GameActorComponent.hpp"


GameActorComponent::GameActorComponent()
{
    parentGameActor = nullptr;
    
    position = Vector2f(0, 0);
}



GameActorComponent::GameActorComponent(class GameActor *parentGameActor)
{
    this->parentGameActor = parentGameActor;
    
    position = Vector2f(0, 0);
}



Vector2f GameActorComponent::getWorldPosition()
{
    return position;
}



Vector2f GameActorComponent::getRelativePosition()
{
    return parentGameActor->getWorldPosition() + position;
}


