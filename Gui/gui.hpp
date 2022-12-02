#pragma once

#include "includes/imgui.h"
#include "includes/imgui-SFML.h"

#include <SFML/Graphics.hpp>
#include <memory>

class Gui {
    public:
        struct iGui {
            sf::Vector2f velocity;
            int lifetime;
        };

        std::shared_ptr<sf::RenderWindow> window;
        std::vector<iGui> m_particles;
        sf::VertexArray vertices;
        sf::Color color;
        float size, x, y;
        std::size_t count;

        void reset_gui_effect();
        void reset_effect(std::size_t, bool);
        void update();

        Gui();
        void run();
};