#include <iostream>
#include "Channels.h"
#include "Channel.h"
using namespace std;

int main() {


	// Skapar kanaler
	Channel c1 = Channel(1);
	Channel c2 = Channel(2);

	// L�gger till kanalerna i samlingen tillg�ngliga kanaler
	Channels::addChannel(c1);
	Channels::addChannel(c2);


	// S�tter kanalen aktiv i 10 sekunder
	Channels::setActive(1, false, 10);


	// Master GameLoop y������
	while (1 == 1) {


		// Uppdaterar timers f�r alla kanaler
		Channels::update();

		// Kollar om en kanal �r aktiv.
		if (Channels::isChannelActive(1)) {

			// G�r saker s�l�nge den �r aktiv
			cout << "active" << endl;
		}
		else {
			cout << "deactive" << endl;
		}


	}



	return 0;
}