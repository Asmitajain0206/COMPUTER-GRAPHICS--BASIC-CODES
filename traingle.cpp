#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>

void display(void)
{

    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(2.0f, 2.0f, 2.0f);
    //glBegin(GL_TRIANGLES); //for filled
    glBegin(GL_LINE_LOOP); // for simple triangle
     glVertex3f(5.0f, 5.0f, 0.0f);
     glVertex3f(25.0f, 5.0f, 0.0f);
     glVertex3f(25.0f, 25.0f, 0.0f);
     //glColor3f(1, 0, 0); glVertex3f(5.0f, 5.0f, 0.0f);
     //glColor3f(0, 1, 0);glVertex3f(25.0f, 5.0f, 0.0f);
     //glColor3f(0, 0, 1);glVertex3f(25.0f, 25.0f, 0.0f);
     glEnd();

     glFlush();
}

void init (void)
{
    glClearColor(0.5, 0.5, 0.5, 0.0);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 30.0, 0.0, 35.0, -1.0, 1.0);

}

int main(int argc, char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600,600);
    glutInitWindowPosition(100,100);
    glutCreateWindow("TRIANGLE");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

