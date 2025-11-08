#include "gameObject.h"
#include "glut.h"

GameObject::GameObject()
{
	// Initialize the defaul values for any objects created
	// Make sure that objects is at the origin by default
	position.SetValue(0, 0, 0);
	// Perform other initialization here
	scale.SetValue(1, 1, 1);
	SetRotation(0, 0, 0, 0);
	color.SetColor(1.0f, 1.0f, 1.0f, 1.0f);
}

void GameObject::SetPosition(Vector3 newPosition)
{
	position.SetValue(newPosition);
}

void GameObject::SetPosition(float x, float y, float z)
{
	position.SetValue(x, y, z);
}

void GameObject::SetScale(Vector3 newScale)
{
	scale.SetValue(newScale);
}

void GameObject::SetScale(float x, float y, float z)
{
	scale.SetValue(x, y, z);
}

void GameObject::SetRotation(float angle, Vector3 rotation)
{
	this->angle = angle;
	rotation.SetValue(rotation);
}

void GameObject::SetRotation(float angle, float x, float y, float z)
{
	this->angle = angle;
	rotation.SetValue(x, y, z);
}

void GameObject::SetColor(float red, float green, float blue) {
	this->color.SetColor(red, green, blue);
}

Vector3 GameObject::GetScale() 
{
	return scale;
}

void GameObject::Draw()
{
	// This is where we call the respective openGL functions that will render our object
	glPushMatrix();
	glTranslatef(position.x, position.y, position.z);
	glRotatef(angle, rotation.x, rotation.y, rotation.z);
	glScalef(scale.x, scale.y, scale.z);
	glColor4f(color.red, color.green, color.blue, color.alpha);
	glutSolidCube(1.0f);
	glPopMatrix();
}
