#include <SFML/Graphics.hpp>

class shamrock {
private:
int xpos;
int ypos;
int size;
sf::CircleShape circle;
sf::RectangleShape rect;
public:
shamrock(int x, int y, int s);
void draw(sf::RenderWindow& window);
};




int main() {

shamrock s1(100, 100, 50);
shamrock s2(300, 300, 50);
shamrock s3(500, 500, 50);
sf::RenderWindow window(sf::VideoMode(800, 800), "Shamrocks");
sf::CircleShape circle;
sf::RectangleShape rect;
while (window.isOpen())//GAME LOOP--------------------------------
{
sf::Event event;
while (window.pollEvent(event))
{
if (event.type == sf::Event::Closed)
window.close();

}
s1.draw(window);
s2.draw(window);
s3.draw(window);
window.display();
}
}



shamrock::shamrock(int x, int y, int s) {
xpos = x;
ypos = y;
size = s;
}

void shamrock::draw(sf::RenderWindow& window) {
circle.setRadius(size);
circle.setFillColor((sf::Color(0, 100, 0)));
circle.setPosition(xpos, ypos);
window.draw(circle);

circle.setRadius(size);
circle.setFillColor((sf::Color(0, 100, 0)));
circle.setPosition(xpos+50, ypos);
window.draw(circle);

circle.setRadius(size);
circle.setFillColor((sf::Color(0, 100, 0)));
circle.setPosition(xpos+25, ypos-50);
window.draw(circle);

rect.setPosition(xpos+65, ypos+50);
rect.setFillColor(sf::Color(0, 100, 0));
rect.setSize(sf::Vector2f(20, 80));
window.draw(rect);
}
