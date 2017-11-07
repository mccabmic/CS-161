/*************************
Author:Michael McCabe
Date: October 31, 2017
Description: This is the class IMPLEMENTATION file for the Team object
IDE: Microsoft Visual Studio
**************************/
#include "Team.hpp"

Player pointGuard;
Player shootingGuard;
Player smallForward;
Player powerForward;
Player Center;

// Constructor, takes in the order set below as specified in announcement
Team::Team(Player ptGuard, Player shtGuard, Player smlForward, Player pwrForward, Player Cntr) {

	setPointGuard(ptGuard);
	setShootingGuard(shtGuard);
	setSmallForward(smlForward);
	setPowerFoward(pwrForward);
	setCenter(Cntr);

}

// Getters
Player Team::getPointGuard(void) const {
	return(pointGuard);
}

Player Team::getShootingGuard(void) const {
	return(shootingGuard);
}

Player Team::getSmallForward(void) const {
	return(smallForward);
}

Player Team::getPowerFoward(void) const {
	return (powerForward);
}

Player Team::getCenter(void) const {
	return (Center);
}

//	This member function tallies up the total points across the team and returns an integer for the total points
int Team::totalPoints(void) const {
	int sum;

	sum = pointGuard.getPoints() + shootingGuard.getPoints() + smallForward.getPoints()
		+ powerForward.getPoints() + Center.getPoints();

	return (sum);
}

// Setters
void Team::setPointGuard(Player ptGuard) {
	pointGuard = ptGuard;

}
void Team::setShootingGuard(Player shtGuard) {
	shootingGuard = shtGuard;

}
void Team::setSmallForward(Player smlForward) {
	smallForward = smlForward;

}
void Team::setPowerFoward(Player pwrFoward) {
	powerForward = pwrFoward;
}
void Team::setCenter(Player Cntr) {
	Center = Cntr;
}
