
//
// Disclaimer:
// ----------
//
// This code will work only if you selected window, graphics and audio.
//
// Note that the "Run Script" build phase will copy the required frameworks
// or dylibs to your application bundle so you can execute it on any OS X
// computer.
//
// Your resource files (images, sounds, fonts, ...) are also copied to your
// application bundle. To get the path to these resources, use the helper
// function `resourcePath()` from ResourcePath.hpp
//

#include <SFML/Audio.hpp>


// Here is a small helper for you! Have a look.
#include "ResourcePath.hpp"
#include "GameEngine.h"


int main(int, char const**)
{
    // ------- Move to Game Instance ----------
    GameWorld* gameWorld = GameWorld::getGameWorld();
    //-----------------------------------------

    // Load a sprite to display
    GameActor backgroundActor = GameActor(gameWorld, "cute_image.jpg");

    // Create a graphical text to display
    sf::Font font;
    if (!font.loadFromFile(resourcePath() + "sansation.ttf")) {
        return EXIT_FAILURE;
    }
    sf::Text text("Hello SFML", font, 50);
    text.setFillColor(sf::Color::Black);

    
    // Audio Controller -----------------------
    // Load a music to play
    sf::Music music;
    if (!music.openFromFile(resourcePath() + "nice_music.ogg")) {
        return EXIT_FAILURE;
    }

    // Play the music
    music.play();
    
    // -----------------------------------------
    

    // Start the game loop
    sf::RenderWindow* window = gameWorld->getWindow();
    while (window->isOpen())
    {
        // Process events
        sf::Event event;
        while (window->pollEvent(event))
        {
            // Close window: exit
            if (event.type == sf::Event::Closed) {
                window->close();
            }

            // Escape pressed: exit
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) {
                window->close();
            }
        }

        // Clear screen
        window->clear();

        // Draw the sprite
        backgroundActor.draw();

        // Draw the string
        window->draw(text);

        // Update the window
        window->display();
    }

    return EXIT_SUCCESS;
}
