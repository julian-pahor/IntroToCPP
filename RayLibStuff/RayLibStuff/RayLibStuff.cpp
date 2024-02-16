// RayLibStuff.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <raylib.h> 
#include "Player.h"
#include "raylib-cpp.hpp"
#include "vector"
#include "ActualPlayer.h"



int main() {
    int screenWidth = 1600;
    int screenHeight = 900;

    raylib::Window window(screenWidth, screenHeight, "raylib-cpp - basic window");

    Camera2D cam = { 0 };
    cam.zoom = 1.f;
    std::vector<Object*> objects;
    size_t objectCount = 1000;

    for (int i = 0; i < objectCount; i++)
    {
        Object* player = new Player(rand() % 50, LIGHTGRAY);
        objects.push_back(player);
    }

    Object* actualPlayer = new ActualPlayer();
    objects.push_back(actualPlayer);

    SetTargetFPS(60);

    while (!window.ShouldClose())
    {
        for (Object* o : objects)
        {
            o->Update();
        }

        BeginDrawing();
        window.ClearBackground(BLACK);
        BeginMode2D(cam);

        for (Object* o : objects)
        {
            o->Draw();
        }

        EndMode2D();

        EndDrawing();
    }

    // UnloadTexture() and CloseWindow() are called automatically.

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file


