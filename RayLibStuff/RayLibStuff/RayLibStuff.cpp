// RayLibStuff.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <raylib.h> 
#include "raylib-cpp.hpp"

int main() {
    int screenWidth = 800;
    int screenHeight = 450;

    raylib::Window window(screenWidth, screenHeight, "raylib-cpp - basic window");

    Camera2D cam = { 0 };
    cam.zoom = 1.0f;

    //Sphere Variables
    float sRadius = 100.f;
    float sXPos = 0.f;
    float sYPos = 0.f;
    raylib::Color sColor = GOLD;

    SetTargetFPS(60);

    while (!window.ShouldClose())
    {
        if (IsKeyDown(KEY_W))
        {
            sYPos -= 1.f;
        }
        if (IsKeyDown(KEY_S))
        {
            sYPos += 1.f;
        }
        if (IsKeyDown(KEY_A))
        {
            sXPos -= 1.f;
        }
        if (IsKeyDown(KEY_D))
        {
            sXPos += 1.f;
        }

        sRadius += GetMouseWheelMove() * -2.0f;

        BeginDrawing();

        window.ClearBackground(BLACK);
        BeginMode2D(cam);

        DrawCircle(sXPos, sYPos, sRadius, sColor);


        DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
        EndMode2D();

        //// Object methods.
        //logo.Draw(
        //    screenWidth / 2 - logo.GetWidth() / 2,
        //    screenHeight / 2 - logo.GetHeight() / 2);

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


