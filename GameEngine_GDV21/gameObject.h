#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include "vector3.h"
#include "color.h"

class GameObject 
{
public:
	GameObject();
	// Setters
	void SetPosition(Vector3 newPosition);
	void SetPosition(float x, float y, float z);
	void SetScale(Vector3 newScale);
	void SetScale(float x, float y, float z);
	void SetRotation(float angle, Vector3 rotation);
	void SetRotation(float angle, float x, float y, float z);
	void SetColor(float red, float green, float blue);

	// Getters
	Vector3 GetScale();

	void Draw();

private:
	Vector3 position;
	Vector3 scale;
	// This can be further improved with its own rotation class later on
	Vector3 rotation;
	float angle;
	Color color;
};

#endif