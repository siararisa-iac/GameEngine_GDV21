#ifndef INPUT_H
#define INPUT_H

// You can also create your own custom enum for each letter or key you want to represent

class Input {
public:
	// stores the boolean value whether a certain keycode from the ASCII table is pressed
	static bool keyPress[256];
	// function that will detect if a key is being held down
	static bool GetKey(unsigned char key);
	// function that will detect if a key is pressed down once
};

void keyPressed(unsigned char key, int x, int y);
void keyPressedUp(unsigned char key, int x, int y);
#endif
