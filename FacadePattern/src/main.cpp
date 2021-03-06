#include "HomeTheaterFacade.hpp"

int main(int argc, char * argv[])
{
	/* components instantiations */
	auto amp	   = std::make_shared<Amplifier>("Top-O-Line Amplifier");
	auto cd		   = std::make_shared<CdPlayer>("Top-O-Line CD Player", amp);
	auto dvd	   = std::make_shared<DvdPlayer>("Top-O-Line DVD Player", amp);
	auto tuner	   = std::make_shared<Tuner>("Top-O-Line AM/FM Tune", amp);
	auto projector = std::make_shared<Projector>("Top-O-Line Projector", dvd);
	auto popper    = std::make_shared<PopcornPopper>("Popcorn Popper");
	auto screen	   = std::make_shared<Screen>("Theater Screen");
	auto lights    = std::make_shared<TheaterLights>("Theater Ceiling Lights");

	/* watch a movie here */
	std::cout << "---------- Watch a movie 'Titanic' ----------" << std::endl;
	auto home      = std::make_shared<HomeTheaterFacade>(amp, tuner, dvd, cd, projector, lights, screen, popper);
	home->WatchMovie("Titanic");
	home->EndMovie();	
	std::cout << "\n\n";

	/* listen to cd */
	std::cout << "---------- Listen to CD 'Despacito' ---------" << std::endl;
	home->ListenToCd("Despacito");
	home->EndCd();
	std::cout << "\n\n";

	/* listen to radio */
	std::cout << "-------------- Listen to Radio --------------" << std::endl;
	home->ListenToRadio(20);
	home->EndRadio();

	return 0;
}
