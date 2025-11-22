#ifndef VECTOR3_H
#define VECTOR3_H

class Vector3
{
public:
	float x, y, z;
	Vector3();
	Vector3(float x, float y, float z);

	// Setter
	// Make additional functions overloads that offer different parameters
	void SetValue(float x, float y, float z);
	void SetValue(Vector3 other);
	// Getter
	Vector3 GetValue();

	// Apply other Vector mathematics here for future support
	// Addition
	Vector3 operator+ (const Vector3 & other);
	Vector3 operator+= (const Vector3 & other);

	// Subtraction
	// Multiplication
	// etc
	
	// Add suport for other vector mathematics
	// Distance
	// Magnitude
	// DotProduct
	// CrossProduct
	// etc
};
#endif
