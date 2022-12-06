//  #include <glut.h> // bassil
#include <GL/glut.h> // hamdy
#include <GL/glu.h>
#include <GL/gl.h>
#include <math.h>


int dis = 4400;

void Keys(int key, int f, int l)
{
    switch (key)
    {
        case GLUT_KEY_DOWN:
            dis = 4400;
            glutPostRedisplay();
            break;
        case GLUT_KEY_UP:
            dis = 0;
            glutPostRedisplay();
            break;
    }
}

float colors[][3] = {
    {1, 1, 1}, // white
    {0, 0, 0}, // black
    {1, 0, 0}, // red
    };


GLUquadricObj* C_Latter = gluNewQuadric();
GLUquadricObj* I_Latter_Above = gluNewQuadric();
GLUquadricObj* angle_cir = gluNewQuadric();


void display()
{

    glClearColor(1, 1, 1, 1);
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix(); // start application

    //keys
    glTranslated(dis, 0, 0);

    glPushMatrix(); // LOGO START

    glPushMatrix(); // base open

    glBegin(GL_QUADS);
    glColor3f(1, 0, 0);
    glVertex2f(330,310);
    glVertex2f(330,290);
    glVertex2f(140,290);
    glVertex2f(140,310);
    glEnd();

    glPushMatrix();
    glColor3f(1, 1, 1);
    glTranslated(200, 310, 0);
    gluDisk(angle_cir, 0, 4, 360, 1);
    glTranslated(-200, -110, 0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3f(1, 1, 1);
    glTranslated(263, 310, 0);
    gluDisk(angle_cir, 0, 4, 360, 1);
    glTranslated(-263, -110, 0);
    glEnd();
    glPopMatrix();

    glPopMatrix(); // base close

    


    // 2 ----------------------
    glPushMatrix(); // all
    glMatrixMode(GL_MODELVIEW);
    glTranslated(240, -100, 0);
    glRotated(45, 0, 0, 1);

    glPushMatrix(); // square
    glBegin(GL_QUADS);
    glColor3f(1, 0, 0);
    glVertex2f(192, 420);
    glVertex2f(207, 290);
    glVertex2f(257, 290);
    glVertex2f(272, 420);
    glEnd();
    glPopMatrix(); // square

    glPushMatrix(); // right
    glBegin(GL_TRIANGLES);
    glColor3f(1, 0, 0);
    glVertex2f(257, 290);
    glVertex2f(210, 380);
    glVertex2f(280, 450);
    glEnd();
    glPopMatrix(); // right

    glPushMatrix(); // left
    glTranslated(232, 232, 0);
    glScaled(-1, 1, 1);
    glTranslated(-232, -232, 0);
    glBegin(GL_TRIANGLES);
    glColor3f(1, 0, 0);
    glVertex2f(257, 290);
    glVertex2f(210, 380);
    glVertex2f(280, 450);
    glEnd();
    glPopMatrix(); // left

    glPushMatrix(); // main
    glBegin(GL_TRIANGLES);
    glColor3f(1, 0, 0);
    glVertex2f(195, 420);
    glVertex2f(267, 420);
    glVertex2f(232, 470);
    glEnd();
    glPopMatrix(); // main


    // Layer Circular
    glPushMatrix();
    // glColor3f(0, 0, 0);
    glColor3f(1, 1, 1);
    glTranslated(180, 280, 0);
    gluDisk(C_Latter, 0, 70, 100, 270);
    glTranslated(-180, -280, 0);
    glEnd();
    glPopMatrix();

    glPopMatrix(); // all 2---------- end


    // 2 ----------------------

    glPushMatrix(); // reflect shape 2

    glTranslated(233, 190, 0);
    glScaled(-1, 1, 1);
    glTranslated(-233, -190, 0);

    glPushMatrix(); // all
    glMatrixMode(GL_MODELVIEW);
    glTranslated(240, -100, 0);
    glRotated(45, 0, 0, 1);

    glPushMatrix(); // square
    glBegin(GL_QUADS);
    glColor3f(1, 0, 0);
    glVertex2f(192, 420);
    glVertex2f(207, 290);
    glVertex2f(257, 290);
    glVertex2f(272, 420);
    glEnd();
    glPopMatrix(); // square

    glPushMatrix(); // right
    glBegin(GL_TRIANGLES);
    glColor3f(1, 0, 0);
    glVertex2f(257, 290);
    glVertex2f(210, 380);
    glVertex2f(280, 450);
    glEnd();
    glPopMatrix(); // right

    glPushMatrix(); // left
    glTranslated(232, 232, 0);
    glScaled(-1, 1, 1);
    glTranslated(-232, -232, 0);
    glBegin(GL_TRIANGLES);
    glColor3f(1, 0, 0);
    glVertex2f(257, 290);
    glVertex2f(210, 380);
    glVertex2f(280, 450);
    glEnd();
    glPopMatrix(); // left

    glPushMatrix(); // main
    glBegin(GL_TRIANGLES);
    glColor3f(1, 0, 0);
    glVertex2f(195, 420);
    glVertex2f(267, 420);
    glVertex2f(232, 470);
    glEnd();
    glPopMatrix(); // main


    // Layer Circular
    glPushMatrix();
    // glColor3f(0, 0, 0);
    glColor3f(1, 1, 1);
    glTranslated(180, 280, 0);
    gluDisk(C_Latter, 0, 70, 100, 270);
    glTranslated(-180, -280, 0);
    glEnd();
    glPopMatrix();

    glPopMatrix(); // all 3---------- end
    glPopMatrix(); // reflect -- end 

    // 1 - Middle
    glPushMatrix(); // all-open

    glPushMatrix(); // square-open
    glBegin(GL_QUADS);
    glColor3f(1, 0, 0);
    glVertex2f(192, 420);
    glVertex2f(207, 290);
    glVertex2f(257, 290);
    glVertex2f(272, 420);
    glEnd();
    glPopMatrix(); // square-close

    glPushMatrix(); // right-open
    glBegin(GL_TRIANGLES);
    glColor3f(1, 0, 0);
    glVertex2f(257, 290);
    glVertex2f(210, 380);
    glVertex2f(280, 450);
    glEnd();
    glPopMatrix(); // right-close

    glPushMatrix(); // left-open
    glTranslated(232, 232, 0);
    glScaled(-1, 1, 1);
    glTranslated(-232, -232, 0);
    glBegin(GL_TRIANGLES);
    glColor3f(1, 0, 0);
    glVertex2f(257, 290);
    glVertex2f(210, 380);
    glVertex2f(280, 450);
    glEnd();
    glPopMatrix(); // left-close

    glPushMatrix(); // main-open
    glBegin(GL_TRIANGLES);
    glColor3f(1, 0, 0);
    glVertex2f(195, 420);
    glVertex2f(267, 420);
    glVertex2f(232, 470);
    glEnd();
    glPopMatrix(); // main-close

    // rectangle white shape
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glColor3f(1, 1, 1);
    glVertex2f(207, 265);
    glVertex2f(207, 290);
    glVertex2f(257, 290);
    glVertex2f(257, 265);
    glEnd();
    glPopMatrix();


    glPopMatrix(); // all-close -- Middle

    glPopMatrix(); // LOGO END
    

    // ---------- Latter C ---------- // 

    glPushMatrix(); // descale word start -___--__

    glTranslated(200, 200, 0);
    glScaled(0.9, 0.9, 1);
    glTranslated(-200, -200, 0);



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
    glPopMatrix(); // descale word end _______ 


    glPopMatrix(); // end application

    glFlush();
}




//  void main(){ 
int main(int argc, char** argr) { // --> hamdy 
    glutInit(&argc, argr); // hamdy
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(400, 100);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow("Body Rotation");
    glutDisplayFunc(display);
    glutSpecialFunc(Keys);
    glClearColor(0, 0, 0, 0);
    gluOrtho2D(0, 600, 0, 600);
    glutMainLoop();
}