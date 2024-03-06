#include <iostream>
#include <raylib.h>

#ifndef CONFIG_H
#define CONFIG_H

#define screen_width 800
#define screen_height 600
#define fullscreen 0
#define vsync 0
#define msaa 0

class Config
{
public:
    Config() = delete;
    inline static void configure();
    const static uint16_t SWIDTH = screen_width;
    const static uint16_t SHEIGHT = screen_height;
};

void Config::configure()
{
// fullscreen
#if fullscreen
    SetWindowState(FLAG_FULLSCREEN_MODE);
#endif

// vsync
#if vsync
    SetWindowState(FLAG_VSYNC_HINT);
#else
    SetTargetFPS(60);
#endif

// msaa anti aliasing
#if msaa
    SetWindowState(FLAG_MSAA_4X_HINT);
#endif
}

#endif /* CONFIG_H */