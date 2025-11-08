#ifndef COLOR_H
#define COLOR_H

// Create your custom color class
class Color 
{
public:
	float red;
	float green;
	float blue;
	float alpha;
	Color();
	Color(float red, float green, float blue);
	Color(float red, float green, float blue, float alpha);
	void SetColor(float red, float green, float blue);
	void SetColor(float red, float green, float blue, float alpha);
	// For setting RGB values up to 255
	// void SetColor(int red, int green, int blue);
};
#endif