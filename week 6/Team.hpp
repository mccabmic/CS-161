/*************************
Author:Michael McCabe
Date: October 31, 2017
Description: This is the class DEFINITION file for the Team object
IDE: Microsoft Visual Studio
**************************/

#ifndef TEAM_HPP
#define TEAM_HPP
#include "Player.hpp"

class Team{
	// Attributes
	private:
		Player pointGuard;
		Player shootingGuard;
		Player smallForward;
		Player powerForward;
		Player Center;

	public:
		// Constructor - default construction intentionally omitted
		Team(Player ptGuard, Player shtGuard, Player smlForward, Player pwrForward, Player Cntr);

		// Getters
		Player getPointGuard(void) const;
		Player getShootingGuard(void) const;
		Player getSmallForward(void) const;
		Player getPowerFoward(void) const;
		Player getCenter(void) const;
		int totalPoints(void) const;

		// Setters
		void setPointGuard(Player ptGuard);
		void setShootingGuard(Player shtGuard);
		void setSmallForward(Player smlForward);
		void setPowerFoward(Player pwrFoward);
		void setCenter(Player Cntr);

};
#endif // !TEAM_HPP
