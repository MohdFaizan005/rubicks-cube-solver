#include "Cube.h"
#include <iostream>

Cube::Cube() {
    // Initialize solved cube
    // U = W (white)
    // L = O (orange)
    // F = G (green)
    // R = R (red)
    // B = B (blue)
    // D = Y (yellow)

    for (int i = 0; i < 9; i++) faces[i] = 'W';
    for (int i = 9; i < 18; i++) faces[i] = 'O';
    for (int i = 18; i < 27; i++) faces[i] = 'G';
    for (int i = 27; i < 36; i++) faces[i] = 'R';
    for (int i = 36; i < 45; i++) faces[i] = 'B';
    for (int i = 45; i < 54; i++) faces[i] = 'Y';
}

void Cube::print() const {
    auto pFace = [&](int start) {
        std::cout << faces[start] << " " << faces[start+1] << " " << faces[start+2] << "\n"
                  << faces[start+3] << " " << faces[start+4] << " " << faces[start+5] << "\n"
                  << faces[start+6] << " " << faces[start+7] << " " << faces[start+8] << "\n";
    };

    std::cout << "UP FACE:\n";
    pFace(0);

    std::cout << "\nLEFT FACE:\n";
    pFace(9);

    std::cout << "\nFRONT FACE:\n";
    pFace(18);

    std::cout << "\nRIGHT FACE:\n";
    pFace(27);

    std::cout << "\nBACK FACE:\n";
    pFace(36);

    std::cout << "\nDOWN FACE:\n";
    pFace(45);
}