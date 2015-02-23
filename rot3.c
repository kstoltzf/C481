#include <GL/glut.h>
#include <stdio.h>

float mytheta = 0.0;  /* Must be global */

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glRotatef(mytheta,0.0,0.0,1.0);

	glBegin(GL_LINE_LOOP);
		glVertex2f(-0.5,-0.5);
		glVertex2f(-0.5,0.5);
		glVertex2f(0.5,0.5);
		glVertex2f(0.5,-0.5);
	glEnd();

	glFlush(); 
}

void myidle()
{

	mytheta+=2.0;
	if (mytheta > 360.0) mytheta-=360.0;
	glutPostRedisplay();
}

int main(int argc, char **argv)
{
	glutInit(&argc,argv);
	glutCreateWindow("simple");
	glutIdleFunc(myidle);
	glutDisplayFunc(display);
	glutMainLoop();
}
