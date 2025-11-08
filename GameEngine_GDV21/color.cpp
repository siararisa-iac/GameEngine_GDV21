#include "color.h"

Color::Color()
{
	red = 1.0f;
	green = 1.0f;
	blue = 1.0f;
	alpha = 1.0f;
}

Color::Color(float red, float green, float blue)
{
	this->red = red;
	this->green = green;
	this->blue = blue;
	alpha = 1.0f;
}

Color::Color(float red, float green, float blue, float alpha)
{
	this->red = red;
	this->green = green;
	this->blue = blue;
	this->alpha = alpha;
}

void Color::SetColor(float red, float green, float blue)
{
	this->red = red;
	this->green = green;
	this->blue = blue;
	alpha = 1.0f;
}

void Color::SetColor(float red, float green, float blue, float alpha)
{
	this->red = red;
	this->green = green;
	this->blue = blue;
	this->alpha = alpha;
}
