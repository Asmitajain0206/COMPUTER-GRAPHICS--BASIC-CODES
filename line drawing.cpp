#include <stdlib.h>
#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
glClear (GL_COLOR_BUFFER_BIT);
//glColor3d (0, 1, 0);
glColor3f(2,0,0);
glLineWidth(10);
glBegin(GL_LINES);
//glVertex3f (0.25, 0.25, 0.0);
//glVertex3f (0.75, 0.25, 0.0);
//glVertex3f (0.75, 0.75, 0.0);
//glVertex3f (0.25, 0.75, 0.0);
glVertex2d(200,850);
glVertex2d(600,50);
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

