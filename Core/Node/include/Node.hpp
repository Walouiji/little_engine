#pragma once

#include <string>
#include <vector>
#include <memory> 

#include <Macros.hpp>

class Node {
    protected:
    int id;
    std::string name;
    int x, y;
    std::vector<std::unique_ptr<Node>> children;

public:
    bool running = true;
    Node() = default;
    virtual ~Node() = default;

    virtual void _process() {};
    virtual void _init() {};
    virtual void _ending() {};
    GETTER_SETTER(int, id);
    GETTER_SETTER(std::string, name);
    GETTER_SETTER(int, x);
    GETTER_SETTER(int, y);

    void main() {
        _init();
        while(running) {
            _process();
        }
        _ending();
    }

    // Méthode pour ajouter un enfant (prend possession de l'objet)
        void addChild(std::unique_ptr<Node> child) {
            children.push_back(std::move(child));
        }

        // Accesseur aux enfants (const pour éviter les modifications externes)
        const std::vector<std::unique_ptr<Node>>& getChildren() const {
            return children;
        }
    
};