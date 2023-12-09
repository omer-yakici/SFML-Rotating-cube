#include <SFML/Graphics.hpp>

int main() {
    // Pencere oluştur
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Cube Animation");

    // Küp özellikleri
    sf::Vector2f cubeSize(100.f, 100.f);
    sf::RectangleShape cube(cubeSize);
    cube.setFillColor(sf::Color::Blue);
    cube.setOrigin(cubeSize.x / 2.f, cubeSize.y / 2.f);
    cube.setPosition(window.getSize().x / 2.f, window.getSize().y / 2.f);
    
    while (window.isOpen()) {
        
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Küpü döndür
        cube.rotate(0.1f);  // Küpün dönme hızını ayarla

        // arka planı beyaza ayarla
        window.clear(sf::Color::White);

        // Küpü çiz
        window.draw(cube);

        // Ekranı göster
        window.display();
    }

    return 0;
}
