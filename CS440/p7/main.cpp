/* 
 * File:   main.cpp
 * Author: Jeremy Seago
 * Class: CSC 440
 *
 * Created on February 5, 2012, 12:10 AM
 */

#include<windows.h>
#include<gl\Gl.h>
#include<gl\glu.h>
#include<gl\glut.h>

// initialize canvas cvs to have width of 640 and height of 480
Canvas7 cvs(640,480, "Jeremy Seago - c440p7");

// checks for status of keyboard
void myKeyboard(unsigned char theKey, int mouseX, int mouseY)
{
    //switch based on key pressed
    switch(theKey)
    {
        case 'E':
        case 'e':
            // exit the program
            exit(-1);
            break;
        case 'r':
            /* Rotate teapot counterclockwise 10 degrees
             * -clear screen
             * -display cube
             * -push matrix to stack
             * -add 10 to the angle of rotation
             * -perform matrix manipulation with new angle
             * -display new teapot
             * -pop matrix from stack
             */
            glClear(GL_COLOR_BUFFER_BIT);
            cvs.background();
            glPushMatrix();
            cvs.setD(cvs.getD()+10);
            cvs.transform();
            glutWireTeapot(1.0);
            glPopMatrix();
            break;
        case 'R':
            /* Rotate teapot clockwise 10 degrees
             * -clear screen
             * -display cube
             * -push matrix to stack
             * -add 10 to the angle of rotation
             * -perform matrix manipulation with new angle
             * -display new teapot
             * -pop matrix from stack
             */
            glClear(GL_COLOR_BUFFER_BIT);
            cvs.background();
            glPushMatrix();
            cvs.setD(cvs.getD()-10);
            cvs.transform();
            glutWireTeapot(1.0);
            glPopMatrix();
            break;
        case 's':
            /* Scale the object by a factor of 1.1
             * -clear screen
             * -display cube
             * -push matrix to stack
             * -increase scale by a factor of 1.1
             * -perform matrix manipulation with new scale
             * -display new teapot
             * -pop matrix from stack
             */
            glClear(GL_COLOR_BUFFER_BIT);
            cvs.background();
            glPushMatrix();
            cvs.setS(cvs.getS()*1.1);
            cvs.transform();
            glutWireTeapot(1.0);
            glPopMatrix();
            break;
        case 'S':
            /* Scale the object by a factor of 1.1
             * -clear screen
             * -display cube
             * -push matrix to stack
             * -increase scale by a factor of 1.1
             * -perform matrix manipulation with new scale
             * -display new teapot
             * -pop matrix from stack
             */
            glClear(GL_COLOR_BUFFER_BIT);
            cvs.background();
            glPushMatrix();
            cvs.setS(cvs.getS()*.9);
            cvs.transform();
            glutWireTeapot(1.0);
            glPopMatrix();
            break;
        case 'x':
            /* Translate the object along the x axis .5 points
             * -clear screen
             * -display cube
             * -push matrix to stack
             * -move center .5 points along the x axis
             * -perform matrix manipulation with new angle
             * -display new teapot
             * -pop matrix from stack
             */
            glClear(GL_COLOR_BUFFER_BIT);
            cvs.background();
            glPushMatrix();
            cvs.setX(cvs.getX()+5);
            cvs.transform();
            glutWireTeapot(1.0);
            glPopMatrix();
            break;
        case 'X':
            /* Translate the object along the x axis .5 points
             * -clear screen
             * -display cube
             * -push matrix to stack
             * -move center -.5 points along the x axis
             * -perform matrix manipulation with new angle
             * -display new teapot
             * -pop matrix from stack
             */
            glClear(GL_COLOR_BUFFER_BIT);
            cvs.background();
            glPushMatrix();
            cvs.setX(cvs.getX()-5);
            cvs.transform();
            glutWireTeapot(1.0);
            glPopMatrix();
            break;
        case 'y':
            /* Translate the object along the y axis .5 points
             * -clear screen
             * -display cube
             * -push matrix to stack
             * -move center .5 points along the x axis
             * -perform matrix manipulation with new angle
             * -display new teapot
             * -pop matrix from stack
             */
            glClear(GL_COLOR_BUFFER_BIT);
            cvs.background();
            glPushMatrix();
            cvs.setY(cvs.getY()+5);
            cvs.transform();
            glutWireTeapot(1.0);
            glPopMatrix();
            break;
        case 'Y':
            /* Translate the object along the y axis -.5 points
             * -clear screen
             * -display cube
             * -push matrix to stack
             * -move center -.5 points along the x axis
             * -perform matrix manipulation with new angle
             * -display new teapot
             * -pop matrix from stack
             */
            glClear(GL_COLOR_BUFFER_BIT);
            cvs.background();
            glPushMatrix();
            cvs.setY(cvs.getY()-5);
            cvs.transform();
            glutWireTeapot(1.0);
            glPopMatrix();
            break;
    }
    glFlush();
}

void myDisplay(void)
{
    // prepare windows
    cvs.setWindow();
    // prepare viewport
    cvs.setViewport(0, 640, 0, 480);

    // Initialize center of teapot to origin and scale and degree values to default
    cvs.setX(0);
    cvs.setY(0);
    cvs.setX(0);
    cvs.setD(0);
    cvs.setS(1);

    // display original teapot
    cvs.transform();
    glPushMatrix();
    glutWireTeapot(1.0);
    glPopMatrix();

    // display backround
    cvs. background();

    // flush buffer
    glFlush();
}

using namespace std;

/*
 *
 * 
 */
int main(int argc, char** argv) {

    return 0;
}

