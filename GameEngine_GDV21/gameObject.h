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
	Vector3 GetPosition();

	void Draw();
	// Possible modification to this class
	// Add more primitives to this class
	void DrawSphere(float radius, int slices, int stacks);
	//void DrawCube();
	// Create an enum for all possible primitives available in glut and pass in that enum
	//void Draw(Primitives.Cube)

private:
	Vector3 position;
	Vector3 scale;
	// This can be further improved with its own rotation class later on
	Vector3 rotation;
	float angle;
	Color color;
};

#endif