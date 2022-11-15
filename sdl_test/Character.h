
#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include "Grid.h"

using namespace std;

class Character {

public:
	Transform transform;
	virtual void displayCharacter();
	virtual void SetGridPosition(Vector2 gridPosition);
	Vector2 currentGridPosition;

protected:
	Grid grid;
	SDL_Texture* characterTex;
	SDL_Rect characterRect;
};
#endif