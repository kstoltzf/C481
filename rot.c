#include <GL/glut.h>

void display()
{
	int i;
	glClear(GL_COLOR_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glRotatef((float)45.0,0.0,0.0,1.0);

	glBegin(GL_LINE_LOOP);
		glVertex2f(-0.5,-0.5);
		glVertex2f(-0.5,0.5);
		glVertex2f(0.5,0.5);
		glVertex2f(0.5,-0.5);
	glEnd();

	glFlush();
}

int main(int argc, char **argv)
{
	glutInit(&argc,argv);
	glutCreateWindow("simple");
	glutDisplayFunc(display);
	glutMainLoop();
}
