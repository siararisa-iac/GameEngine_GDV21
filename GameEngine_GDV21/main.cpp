//#include <iostream>
//#include <thread>
//#include <chrono>
//using namespace std;
//
//void multiplyByTwo(int& x)
//{
//    x *= 2;
//}
//
//string RandomCodeGenerator()
//{
//	srand((unsigned)time(0));
//	int length = rand() % 11;
//
//	string code;
//
//	for (int i = 0; i < length; i++)
//	{
//		int charType = rand() % 3;
//		if (charType == 0)
//		{
//			code += 'A' + rand() % 26;
//		}
//		else if (charType == 1)
//		{
//			code += 'a' + rand() % 26;
//		}
//		else
//		{
//			code += '0' + rand() % 10;
//		}
//	}
//	return code;
//}
//
//int main() {
//    int x;
//    cout << "Give me a number: ";
//    cin >> x;
//
//    multiplyByTwo(x);
//    cout << "That number multiplied by two is " << x << endl;
//
//	string text = "hello world im gay";
//    string printable =
//        "0123456789abcdefghijklmnopqrstuvwxyz"
//        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
//        " !\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~";
//    string temp = "";
//
//    for (char ch : text) {
//        for (char i : printable) {
//            this_thread::sleep_for(chrono::milliseconds(20));
//            cout << temp + i << endl;
//
//            if (i == ch) {
//                temp += ch;
//                break;
//            }
//        }
//    }
//
//    cout << "Nice changes." << endl;
//}

#include<glut.h>
#include<cmath>

float angle = 0.0f;

void createCube()
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

void renderScene(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	//reset matrices
	glLoadIdentity();

	//set camera (where cam is, where it looks at, how high it is(?))
	gluLookAt(0.0f, 0.0f, 10.0f,
		0.0f, 0.0f, 0.0f,
		0.0f, 1.0f, 0.0f);

	//FOR REFERENCE: translate, rotate, scale, color
		//glTranslatef(3.0f, 0.0f, 0.0f); //Moves actual coord grid
	glRotatef(angle, 0.5f, 1.0f, 0.1f);
	glScalef(0.6f, 0.6f, 0.6f);
	//glColor3f(1.0f, 1.0f, 0.4f);

	//Create a grey cube as a solid core
	glColor3f(0.4f, 0.4f, 0.4f);
	glutSolidCube(6.2f); //slightly smaller than the actual main cube
	//^ Okay listen, this isn't part of the mandatory cube. Let me have this one to save space-

	for (int i = -1; i < 2; i++) {
		for (int j = -1; j < 2; j++) {
			for (int k = -1; k < 2; k++) {
				glPushMatrix(); //save coords cursor position
				glTranslatef(i * 2.25, j * 2.25, k * 2.25);
				createCube();
				glPopMatrix(); //load coords cursor position
			}
		}
	}

	angle += 2.00f;
	glutSwapBuffers();
}

void changeWindowSize(int w, int h)
{
	//height or width should NOT be 0
	if (h == 0)
		h = 1;

	float ratio = 1.0 * w / h;

	//fix matrixMode to projection
	glMatrixMode(GL_PROJECTION);

	//Reset the value of matrices
	glLoadIdentity();

	//Set the viewport of the window
	glViewport(0, 0, w, h);

	//Set the correct perspective
	gluPerspective(45, ratio, 1, 1000);

	//Get back to Modelview
	glMatrixMode(GL_MODELVIEW);
}

// This function will be called every 16ms (~60 times per second)
void timer(int value)
{
	glutPostRedisplay(); // tells GLUT to call renderScene()
	glutTimerFunc(16, timer, 0); // schedule again ~60fps
}


int main(int argc, char** argv)
{
	//initialize GLUT, create window
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(200, 100);
	glutInitWindowSize(450, 400);
	glutCreateWindow("MyOpenGL");

	//register callbacks
	glutDisplayFunc(renderScene);
	glutReshapeFunc(changeWindowSize);
	//glutIdleFunc(renderScene); //Renders program at uncapped FPS
	glutTimerFunc(16, timer, 0); //Renders program at ~60fps :]

	glEnable(GL_DEPTH_TEST);
	//enter GLUT event processing cycle
	glutMainLoop();
	return 1;
}