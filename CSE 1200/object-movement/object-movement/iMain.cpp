#include "iGraphics.h"
#include <math.h>
#include <iostream>
using namespace std;

#define scrWidth 1000
#define scrHeight 600

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://

double pos_x = 500;
double pos_y = 300;

double pos_en_x = 750;
double pos_en_y = 250;

double enemy_size = 200;

void iDraw()
{
	iClear();
	iFilledRectangle(pos_x-50, pos_y-50, 100, 100);
	iSetColor(255, 255, 255);


	//enemy
	iFilledRectangle(pos_en_x, pos_en_y, enemy_size, enemy_size);
	iSetColor(255, 0, 0);

}





/*function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/


void iMouseMove(int mx, int my)
{
	
}
//*******************************************************************ipassiveMouse***********************************************************************//
void iPassiveMouseMove(int mx, int my) //when hovering
{
	/*cout << mx << " " << my << "\n";

	pos_x = mx;
	pos_y = my;*/
}

void iMouse(int button, int state, int mx, int my)
{
	
	//cout << "MX: " << mx << " MY: " << my << "\n"; //gives pos for when clicked down and up

	//pos_x = mx;
	//pos_y = my;

	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		cout << "MX: " << mx << " MY: " << my << "\n";

		pos_x = mx;
		pos_y = my;
		
	}
	
	
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		
	}
}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/


void iKeyboard(unsigned char key) //called when we press a key in keyboard
{
	cout << key << "\n";
	if (key == 'd')
	{
		pos_x += 1.5;
	}
	else if (key == 'w') {
		pos_y += 1.5;
	}
	else if (key == 's') {
		pos_y -= 1.5;
	}
	else if (key == 'a') {
		pos_x -= 1.5;
	}
	
	
}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	if (key == GLUT_KEY_UP) {
		pos_y += 2.5;
	}

	if (key == GLUT_KEY_DOWN) {
		pos_y -= 2.5;
	}
	
	if (key == GLUT_KEY_RIGHT)
	{
		pos_x += 2;
	}
	if (key == GLUT_KEY_LEFT)
	{
		pos_x -= 2;
	}
	
	if (key == GLUT_KEY_HOME)
	{
		
	}
	
}

void enMove() {
	cout << "Enemy moving\n";
	pos_en_x -= 1.5;
}

void enemyExpand() {
	enemy_size += 20;
}


int main()
{
	///srand((unsigned)time(NULL));
	iInitialize(scrWidth, scrHeight, "Project Title");

	iSetTimer(500, enMove);
	iSetTimer(1000, enemyExpand);
	///updated see the documentations
	iStart();
	return 0;
}