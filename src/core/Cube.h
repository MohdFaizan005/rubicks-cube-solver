#pragma once
#include<array>

class Cube {
public:
    Cube();

    void print() const;
private:
    std::array<char,54> faces;
};