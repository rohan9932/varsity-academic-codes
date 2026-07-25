#include "iGraphics.h"
#include<math.h>
#include<iostream>
using namespace std;

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://

void iDraw()
{
	iClear();
	//iSetColor(255, 0, 255); // r, g, b
	//glLineWidth(10);
	//iRectangle(250, 100, 200, 150); //x axis, y axis, length, width
	//iSetColor(255, 150, 255);
	//iFilledRectangle(100, 250, 20, 150);
	//iSetColor(255, 0, 0);
	//iRectangle(150, 70, 10, 15);

	//iSetColor(255, 0, 255);
	//iFilledCircle(500, 400, 50);

	//iSetColor(100, 100, 100);
	//iEllipse(600, 300, 50, 100);

	//iSetColor(10, 111, 123);
	//iPoint(200, 200, 10);

	/*for (float i = 0; i <= 90; i++) {
		iPoint(i, sin(i), 5);
	}*/

	//Polygon
	//iSetColor(255, 255, 255);
	//double polyX[] = { 200, 250, 300, 270, 200 }; //point will go clockwise
	//double polyY[] = { 200, 250, 200, 150, 150 };
	//iFilledPolygon(polyX, polyY, 5);

	////Line
	//iSetColor(0, 255, 0);
	//glLineWidth(10);
	//iLine(100, 100, 200, 100);

	////Text
	//iSetColor(255, 255, 255);
	//char text[20];
	//int score = 124;
	//sprintf_s(text, "Score %d", score);
	//iText(500, 200, text);

	////Flag
	//iSetColor(0, 106, 78);
	//iFilledRectangle(350, 150, 300, 200);
	//iSetColor(244, 42, 65);
	//iFilledCircle(500, 250, 50);
	//iSetColor(86, 50, 50);
	//iFilledRectangle(330, 0, 20, 350);

	//Barighor
	iSetColor(255, 213, 128);
	int bariX[] = { 300, 300, 600, 600 };
	int bariY[] = { 0, 500, 0, 500 };
	

}





/*function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/


void iMouseMove(int mx, int my)
{
	
}
//*******************************************************************ipassiveMouse***********************************************************************//
void iPassiveMouseMove(int mx, int my)
{
	
}

void iMouse(int button, int state, int mx, int my)
{
	
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{

		
	}
	
	
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		
	}
}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/


void iKeyboard(unsigned char key)
{
	if (key == '\r')
	{
		
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

	
	if (key == GLUT_KEY_RIGHT)
	{
				
	}
	if (key == GLUT_KEY_LEFT)
	{
		
	}
	
	if (key == GLUT_KEY_HOME)
	{
		
	}
	
}


int main()
{
	///srand((unsigned)time(NULL));
	iInitialize(1000, 500, "My First Project");
	///updated see the documentations
	iStart();
	return 0;
}