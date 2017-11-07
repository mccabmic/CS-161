/*************************
Author:Michael McCabe
Date: October 31, 2017
Description: This is the class IMPLEMENTATION file for the Player object
IDE: Microsoft Visual Studio
**************************/

#include "Player.hpp"

// Class should have a default constructor that initializes the name to the empty string ("") and initializes each of the stats to -1. 
Player::Player(void){
	name = "";
	pts = -1;
	rebnds = -1;
	asts = -1;
}

//It should also have a constructor that takes four parameters and uses them to initialize the data members.  It should have get methods for each data member.  
// REMEMBER TO SET CONSTUCTOR ORDER - NAME, POINTS, REBOUNDS, ASSISTS
Player::Player(std::string playerName, int points, int rebounds, int assists){
	name = playerName;
	setAssists(assists);
	setRebounds(rebounds);
	setPoints(points);
}
	
// Getters
std::string Player::getName(void) const{
	return (name);
};
	
int Player::getPoints(void) const{
	return (pts);
};
	
int Player::getRebounds(void) const{
	return (rebnds);
};

int Player::getAssists(void) const{
	return (asts);
};

// This bool method takes a Player parameter and returns a boolean value if the player executing the function has more points than the player
// passed as a parameter.
bool Player::hasMorePointsThan(Player otherPlayer) const {

	//We could do this in one line but this appears to be more clear of intentions
	if (pts > otherPlayer.getPoints())
		return true;
	else
		return false;

}
// Setters
void Player::setAssists(int assists){
	asts = assists;	
}

void Player::setRebounds(int rebounds){
	rebnds = rebounds;
}

void Player::setPoints(int points){
	pts = points;
}



	

	
	
	
	