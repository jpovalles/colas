#include "Personaje.h"

int Personaje::DibujarPersonaje(int it, float alfa, float x, float y, float z) {
    glPushMatrix();
    glTranslatef(-1.0, 0.0, 0.0);
    glRotatef((GLfloat)alfa, 0.0, 0.0, 1.0);
    glTranslatef(-1.0, 0.0, 0.0);
    glPushMatrix();
    glScalef(2.0, 0.4, 1.0);
    glutSolidCube(1); /* shoulder */
    glPopMatrix();

    // Primer triangulo
    glPushMatrix();
    glRotatef(180, 0, 0, 1);
    glBegin(GL_TRIANGLES);
    glVertex3f(1, 0, 0);
    glVertex3f(0, 1, 0);
    glVertex3f(-1, 0, 0);
    glEnd();
    glPopMatrix();

    for (int i = 0; i < it; i++) {
        glTranslatef(1.0, 0.0, 0.0);
        glRotatef((GLfloat)alfa, 0.0, 0.0, 1.0);

        glTranslatef(1.0, 0.0, 0.0);
        glPushMatrix();
        glRotatef(180, 0, 0, 1);
        glBegin(GL_TRIANGLES);
        glVertex3f(1, 0, 0);
        glVertex3f(0, 1, 0);
        glVertex3f(-1, 0, 0);
        glEnd();
        glPopMatrix();
        glPushMatrix();
        glScalef(2.0, 0.4, 1.0);
        glutSolidCube(1); /* elbow */
        glPopMatrix();
    }
    glPushMatrix();
    glTranslatef(0, -1, 0);
    glRotatef(90, 0, 0, 1);
    glScalef(2.0, 0.4, 0.5);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, -2, 0);
    glutSolidTeapot(1);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, 4, 0);
    glutSolidSphere(3, 50, 50);
    glTranslatef(0, -1, 3);
    glutSolidSphere(1, 50, 50);

    glTranslatef(-1, 2, 0);

    glutSolidSphere(0.5, 50, 50);
    glTranslatef(2, 0, 0);
    glutSolidSphere(0.5, 50, 50);
    glPopMatrix();

    glPopMatrix();

    return 1;
}