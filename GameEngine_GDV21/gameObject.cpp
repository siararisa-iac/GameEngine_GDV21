#include "gameObject.h"
#include "glut.h"

GameObject::GameObject()
{
	// Initialize the defaul values for any objects created
	// Make sure that objects is at the origin by default
	position.SetValue(0, 0, 0);
	// Perform other initialization here
}

void GameObject::SetPosition(Vector3 newPosition)
{
	position.SetValue(newPosition);
}

void GameObject::SetPosition(float x, float y, float z)
{
	position.SetValue(x, y, z);
}

void GameObject::Draw()
{
	// This is where we call the respective openGL functions that will render our object
	glPushMatrix();
	glTranslatef(position.x, position.y, position.z);
	glutSolidCube(1.0f);
	glPopMatrix();
}
