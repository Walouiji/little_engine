#pragma once

#include <string>

class Node {
    private:
    int id;
    std::string name;
    int x, y;

public:
    bool running = true;
    Node() = default;
    virtual ~Node() = default;

    virtual void _process() {};
    virtual void _init() {};
    virtual void _ending() {};

    void main() {
        _init();
        while(running) {
            _process();
        }
        _ending();
    }
};