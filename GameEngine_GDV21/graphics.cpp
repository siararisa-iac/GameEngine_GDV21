#include "graphics.h"
#include "engine.h"

void ChangeWindowSize(int width, int height)
{
	//height or width should NOT be 0
	if (height == 0)
		height = 1;

	float ratio = 1.0 * width / height;

	//fix matrixMode to projection
	glMatrixMode(GL_PROJECTION);

	//Reset the value of matrices
	glLoadIdentity();

	//Set the viewport of the window
	glViewport(0, 0, width, height);

	//Set the correct perspective
	gluPerspective(45, ratio, 1, 1000);

	//Get back to Modelview
	glMatrixMode(GL_MODELVIEW);
}

void Timer(int timer)
{
	glutPostRedisplay(); // tells GLUT to call renderScene()
	glutTimerFunc(16, Timer, 0); // schedule again ~60fps
}

void RenderScene()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	// Call Update here
	Update();

	glutSwapBuffers();
}
