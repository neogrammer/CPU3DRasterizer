#include <SFML/Graphics.hpp>



int main(int argc,  char* argv[])
{
	sf::RenderWindow window{sf::VideoMode(1600,900,32), "3D Rasterizer"};

	while (window.isOpen())
	{
		sf::Event e;
		while (window.pollEvent(e))
		{
			switch (e.type)
			{
			case sf::Event::Closed:
				window.close();
				continue;
				break;
			case sf::Event::KeyReleased:
				if (e.key.code == sf::Keyboard::Escape)
				{
					window.close();
				}
				break;
			default:
				break;
			}
		}
		window.clear(sf::Color::Blue);
		window.display();
	}


	return 0;
}