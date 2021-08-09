//
// Created by Michael Cheng on 8/8/21.
//

#ifndef CHIP8_PLATFORM_H
#define CHIP8_PLATFORM_H

#include <cstdint>

class SDL_Window;
class SDL_Renderer;
class SDL_Texture;

class Platform
{
public:
    Platform(char const* title, int windowWidth, int windowHeight, int textureWidth, int textureHeight);
    ~Platform();
    void Update(void const* buffer, int pitch);
    bool ProcessInput(uint8_t* keys);

private:
    SDL_Window* window{};
    SDL_Renderer* renderer{};
    SDL_Texture* texture{};
};

#endif //CHIP8_PLATFORM_H
