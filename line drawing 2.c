#include <stdlib.h>
#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
glClear (GL_COLOR_BUFFER_BIT);
//glColor3d (0, 1, 0);
glColor3f(0,0,1);
glLineWidth(10);
glBegin(GL_LINES);
glVertex2d(50,500);
glVertex2d(400,500);
glColor3f(0,1,0);
glLineWidth(10);
glVertex2d(400,500);
glVertex2d(400,100);
glColor3f(0,0,1);
glLineWidth(10);
glVertex2d(400,100);
glVertex2d(50,100);
glColor3f(0,1,0);
glLineWidth(10);
glVertex2d(50,100);
glVertex2d(50,500);
glEnd();
glFlush ();
}
void init (void)
{
/* select clearing (background) color */
glClearColor (0.0, 1.0, 1.0,1.0);
/* initialize viewing values */
//glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0,600,0,800);
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (500, 500);
glutInitWindowPosition (100, 100);
glutCreateWindow ("LINE");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0;
}


