#pragma once

#include "Node.hpp"

class Board: public Node {
    private:
    int maxX, maxY;
    int x, y;

    public:
    Board() = default;    
    ~Board() override = default;
};