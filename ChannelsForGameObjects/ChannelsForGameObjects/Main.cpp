#include <iostream>
#include "Channels.h"
#include "Channel.h"
using namespace std;

int main() {


	// Skapar kanaler
	Channel c1 = Channel(1);
	Channel c2 = Channel(2);

	// Lägger till kanalerna i samlingen tillgängliga kanaler
	Channels::addChannel(c1);
	Channels::addChannel(c2);


	// Sätter kanalen aktiv i 10 sekunder
	Channels::setActive(1, false, 10);


	// Master GameLoop yääääää
	while (1 == 1) {


		// Uppdaterar timers för alla kanaler
		Channels::update();

		// Kollar om en kanal är aktiv.
		if (Channels::isChannelActive(1)) {

			// Gör saker sålänge den är aktiv
			cout << "active" << endl;
		}
		else {
			cout << "deactive" << endl;
		}


	}



	return 0;
}