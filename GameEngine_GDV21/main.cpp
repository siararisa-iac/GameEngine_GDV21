#include "engine.h"
#include "iostream";
#include "graphics.h"

using namespace std;

float angle = 0.2f;
// This will be separated soon
void CreateCube()
{
	glColor3f(1.0f, 1.0f, 0.2f); //down (-Y), yellow
	glBegin(GL_QUADS);
	glVertex3f(-1.0f, -1.0f, -1.0f); //top left
	glVertex3f(-1.0f, -1.0f, 1.0f);  //bottom left
	glVertex3f(1.0f, -1.0f, 1.0f);   //top right
	glVertex3f(1.0f, -1.0f, -1.0f);  //bottom right
	glEnd();

	glColor3f(1.0f, 0.5f, 0.2f); //north (-Z), orange
	glBegin(GL_QUADS);
	glVertex3f(-1.0f, -1.0f, -1.0f);
	glVertex3f(-1.0f, 1.0f, -1.0f);
	glVertex3f(1.0f, 1.0f, -1.0f);
	glVertex3f(1.0f, -1.0f, -1.0f);
	glEnd();

	glColor3f(0.2f, 0.2f, 1.0f); //east (+X), blue
	glBegin(GL_QUADS);
	glVertex3f(1.0f, 1.0f, -1.0f);
	glVertex3f(1.0f, 1.0f, 1.0f);
	glVertex3f(1.0f, -1.0f, 1.0f);
	glVertex3f(1.0f, -1.0f, -1.0f);
	glEnd();

	glColor3f(0.2f, 1.0f, 0.2f); //west (-X), green
	glBegin(GL_QUADS);
	glVertex3f(-1.0f, 1.0f, -1.0f);
	glVertex3f(-1.0f, 1.0f, 1.0f);
	glVertex3f(-1.0f, -1.0f, 1.0f);
	glVertex3f(-1.0f, -1.0f, -1.0f);
	glEnd();

	glColor3f(1.0f, 0.2f, 0.2f); //south (+Z), red
	glBegin(GL_QUADS);
	glVertex3f(-1.0f, -1.0f, 1.0f);
	glVertex3f(-1.0f, 1.0f, 1.0f);
	glVertex3f(1.0f, 1.0f, 1.0f);
	glVertex3f(1.0f, -1.0f, 1.0f);
	glEnd();

	glColor3f(1.0f, 1.0f, 1.0f); //up (+Y), white
	glBegin(GL_QUADS);
	glVertex3f(-1.0f, 1.0f, -1.0f);
	glVertex3f(-1.0f, 1.0f, 1.0f);
	glVertex3f(1.0f, 1.0f, 1.0f);
	glVertex3f(1.0f, 1.0f, -1.0f);
	glEnd();
}

void Initialize() 
{

}

void Update() 
{
	glRotatef(angle, 0.5f, 1.0f, 0.1f);
	for (int i = -1; i < 2; i++) {
		for (int j = -1; j < 2; j++) {
			for (int k = -1; k < 2; k++) {
				glPushMatrix(); //save coords cursor position
				glTranslatef(i * 2.25, j * 2.25, k * 2.25);
				CreateCube();
				glPopMatrix(); //load coords cursor position
			}
		}
	}
}

int main(int argc, char** argv)
{
	PrepareEngine(argc, argv);
}