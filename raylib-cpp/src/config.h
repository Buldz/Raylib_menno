/*
 * Copyright Rowan Pijnaker
 */
#include <raylib.h>
#include <iostream>

#ifndef CONFIG_H
#define CONFIG_H

const int SWIDTH = 910;
const int SHEIGHT = 540;

class Config
{
public:
    Config();
    virtual ~Config();
    virtual void update(float deltaTime);

private:
};
static float deltaTime;
#endif /* CONFIG_H */