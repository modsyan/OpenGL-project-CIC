//  #include <glut.h> // bassil
#include <GL/glut.h> // hamdy
#include <GL/glu.h>
#include <GL/gl.h>
#include <math.h>


float colors[][3] = {
    {1, 1, 1}, // white
    {0, 0, 0}, // black
    {1, 0, 0}, // red
    };

GLUquadricObj* head = gluNewQuadric();
GLUquadricObj* hand = gluNewQuadric();

GLUquadricObj* C_Latter = gluNewQuadric();


void display()
{

    glClearColor(1, 1, 1, 1);
    glClear(GL_COLOR_BUFFER_BIT);

    // ---------- Latter C ---------- // 

    glPushMatrix(); // CIC WORD START

    glPushMatrix();

    glPushMatrix();
    glColor3f(0, 0, 0);
    glTranslated(150, 200, 0);
    gluDisk(C_Latter, 0, 70, 300, 270);
    glTranslated(-150, -200, 0);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glColor3f(1, 1, 1);
    glTranslated(160, 200, 0);
    gluDisk(C_Latter, 0, 55, 300, 270);
    glTranslated(-160, -200, 0);
    glEnd();
    glPopMatrix();

    glBegin(GL_QUADS);
    glColor3f(1, 1, 1);
    glVertex2f(160, 150);
    glVertex2f(220, 135);
    glVertex2f(220, 265);
    glVertex2f(160, 250);
    glEnd();

    glPopMatrix();

    // --------------- I ---------------  

    glPushMatrix();

    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(220, 135);
    glVertex2f(245, 135);
    glVertex2f(245, 265);
    glVertex2f(220, 265);
    glEnd();

    glPopMatrix();

    // ---------- Latter C ---------- // 

    glPushMatrix();

    glTranslated(200, 0, 0);

    glPushMatrix();
    glColor3f(0, 0, 0);
    glTranslated(150, 200, 0);
    gluDisk(C_Latter, 0, 70, 300, 270);
    glTranslated(-150, -200, 0);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glColor3f(1, 1, 1);
    glTranslated(160, 200, 0);
    gluDisk(C_Latter, 0, 55, 300, 270);
    glTranslated(-160, -200, 0);
    glEnd();
    glPopMatrix();

    glBegin(GL_QUADS);
    glColor3f(1, 1, 1);
    glVertex2f(160, 150);
    glVertex2f(220, 135);
    glVertex2f(220, 265);
    glVertex2f(160, 250);
    glEnd();

    glPopMatrix();

    glPopMatrix(); // >>>>>>>>>>>>>>>  CIC WORD END <<<<<<<<<<<<

    




    glLineWidth(3);
    glFlush();
}

// void keyboard(unsigned char key, int x, int y) {
//     switch (key) {
//     case 'x':        AD -= val;
//     case 'y':
//         spin_y += 0.9;
//         break;
//     }
//     glutPostRedisplay();
// }

// void my_keyboard(unsigned char key, int x, int y)
// {

//     switch (key) {
//     case 'a':
//         cnt = 0;
        
//         moveTrg = 1;
//         break;
//     case 'd':
//         moveTrg = 1;
//         cnt = 210;
//         break;

//     case 'w':
//         randTrg = 1;
//         randcnt = 0;
//         break;
//     case 's':
//         randTrg = 1;
//         randcnt = 300;
//         break;
//     case ' ':
//         AD = 0;
//         A2 = 0;
//         // while (randcnt%3) {
//         //     color
//         // }
//         break;

//     default:
//         break;
//     }
// }





//  void main(){ 
int main(int argc, char** argr) { // --> hamdy 
    glutInit(&argc, argr); // hamdy
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(400, 100);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow("Body Rotation");
    glutDisplayFunc(display);
    // glutKeyboardFunc(my_keyboard);
    // glutIdleFunc(anim);
    // glutKeyboardFunc(keyboard);
    glClearColor(0, 0, 0, 0);
    gluOrtho2D(0, 600, 0, 600);
    glutMainLoop();
}