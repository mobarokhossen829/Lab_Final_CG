#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include <math.h>

void background(double a, double b)
{
    float theta;
    int i;
    glColor3f(0.9,0.6,0.2);
    glBegin(GL_POLYGON);
    for(i=0; i< 360; i++)
    {
        theta = i*3.142/180;
        glVertex2f(a+150*cos(theta), b+150*sin(theta));
    }
    glEnd();
}

void init(void)
{
    glClearColor(1.0,1.0,1.0,1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-400.0, 400.0, -400.0, 400.0, -1.0, 1.0);
}

void Draw()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f( 0,0,0);
    // center of the circle is (-5,9) and radius is 15
    double x0=-5, y0=9+150, r = 150;


    background(-5,9);
    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);

    glVertex3f(-84,-85,0);
    glVertex3f(89,-85,0);
    glVertex3f(5,88,0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);

    glVertex3f(-84,40,0);
    glVertex3f(5,-133,0);
    glVertex3f(89,40,0);
    glEnd();


    glFlush();
    glutSwapBuffers();
}

int main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(100,100);
    glutInitWindowSize(500,500);
    glutCreateWindow("ID: 182-15-2187");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}

