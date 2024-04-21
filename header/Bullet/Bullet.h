#pragma once
#include <SFML/Graphics.hpp>

class Bullet {
private:
    sf::Sprite bulletSprite;
    float bulletSpeed;

public:
    Bullet(const sf::Texture& texture, float speed) : bulletSpeed(speed) {
        bulletSprite.setTexture(texture);
    }

    void update() {
        // Move bullet upwards (you can adjust direction as needed)
        bulletSprite.move(0, -bulletSpeed);
    }

    const sf::Sprite& getSprite() const {
        return bulletSprite;
    }
};

