#include <GL/glut.h>

void display()
{
	int i;	
	float x1,y1,x2,y2;
	glClear(GL_COLOR_BUFFER_BIT);
	
	glPointSize(2.0); /* May not go between glBegin,glEnd */
	glLineWidth(2.0); /* May not go between glBegin,glEnd */
	glColor3f(1.0,1.0,1.0);

	for (i=1; i<100; i++){
	x1=((rand()%64)-32)/32.0;
	y1=((rand()%64)-32)/32.0;
	x2=((rand()%64)-32)/32.0;
	y2=((rand()%64)-32)/32.0;
	glBegin(GL_LINES);
		glColor3f(x1,x2,y1);
		glVertex2f(x1,y1);
		glVertex2f(x2,y2);
	glEnd();
	}

	glFlush();
}

int main(int argc, char **argv)
{
	glutInit(&argc,argv);
	glutCreateWindow("simple");
	glutDisplayFunc(display);
	glutMainLoop();
}
