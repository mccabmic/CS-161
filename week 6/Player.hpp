/*************************
Author:Michael McCabe
Date: October 31, 2017
Description: This is the class DEFINITION file for the Player object
IDE: Microsoft Visual Studio
**************************/

#ifndef PLAYER_HPP
#define PLAYER_HPP
#include <string>

class Player{
	// Attributes
	private:
		std::string name;
		int pts;
		int rebnds;
		int asts;
	
	public:
		// Constructors
		Player();
		Player(std::string playerName, int points, int rebounds, int assists);
	
		// Getters
		std::string getName(void) const;
		int getPoints(void) const;
		int getRebounds(void) const;
		int getAssists(void) const;
		bool hasMorePointsThan(Player otherPlayer) const;
	
		// Setters
		void setAssists(int assists);
		void setRebounds(int rebounds);
		void setPoints(int points);
};
#endif // !PLAYER_HPP