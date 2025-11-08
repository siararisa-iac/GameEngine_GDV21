#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include "vector3.h"

class GameObject 
{
public:
	GameObject();
	void SetPosition(Vector3 newPosition);
	void SetPosition(float x, float y, float z);
	void Draw();
private:
	Vector3 position;
};

#endif