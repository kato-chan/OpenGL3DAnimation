#include <windows.h> 

#include <GL/glut.h> 


float eyez = 30.0;
float pozx = 0.0;
float pozy = 0.0;

float fovy = 90.0, aspect = 1.0, near_ = 0.1, far_ = 600.0;

float vertex1[] = {
	-2.0, 10.0, 0.0,
	2.0, 10.0, 0.0,
	2.0, -10.0, 0.0,
	-2.0, -10.0, 0.0
};

float vertex2[] = {
	0.0, 10.0, -2.0,
	0.0, 10.0, 2.0,
	0.0, -10.0, 2.0,
	0.0, -10.0, -2.0
};

float vertex3[] = {
	2.0, 0.0, 2.0,
	2.0, 0.0, -2.0,
	-2.0, 0.0, -2.0,
	-2.0, 0.0, 2.0
};

float vertex4[] = {
	-2.0, 10.0, 2.0,
	-2.0, 10.0, -2.0,
	2.0, 4.0, -2.0,
	2.0, 4.0, 2.0
};

float vertex5[] = {
	-2.0, 4.0, 2.0,
	-2.0, 4.0, -2.0,
	2.0, 10.0, -2.0,
	2.0, 10.0, 2.0
};

float vertex6[] = {
	-18.0, -10.0, 3.0,
	-18.0, -10.0, -3.0,
	18.0, -10.0, -3.0,
	18.0, -10.0, 3.0
};

float vertex7[] = {
	0.0, -10.0, 3.0,
	0.0, -10.0, -3.0,
	0.0, -14.0, -3.0,
	0.0, -14.0, 3.0
};

float vertex8[] = {
	-18.0, -10.0, 0.0,
	18.0, -10.0, 0.0,
	18.0, -14.0, 0.0,
	-18.0, -14.0, 0.0
};

float vertex9[] = {
	-2.0, 10.0, 0.0,
	-2.0, 6.0, 0.0,
	2.0, 0.0, 0.0,
	2.0, 4.0, 0.0
};

float vertex10[] = {
	-2.0, 0.0, 0.0,
	-2.0, 4.0, 0.0,
	2.0, 10.0, 0.0,
	2.0, 6.0, 0.0
};

unsigned short index[] = { 0, 1, 2, 3 };


void wall1()
{
	glEnableClientState(GL_VERTEX_ARRAY);
	glVertexPointer(3, GL_FLOAT, 0, vertex1);
	glDrawElements(GL_QUADS, 4, GL_UNSIGNED_SHORT, index);
	glDisableClientState(GL_VERTEX_ARRAY);
}

void wall2()
{
	glEnableClientState(GL_VERTEX_ARRAY);
	glVertexPointer(3, GL_FLOAT, 0, vertex2);
	glDrawElements(GL_QUADS, 4, GL_UNSIGNED_SHORT, index);
	glDisableClientState(GL_VERTEX_ARRAY);
}

void wall3()
{
	glEnableClientState(GL_VERTEX_ARRAY);
	glVertexPointer(3, GL_FLOAT, 0, vertex3);
	glDrawElements(GL_QUADS, 4, GL_UNSIGNED_SHORT, index);
	glDisableClientState(GL_VERTEX_ARRAY);
}
void wall4()
{
	glEnableClientState(GL_VERTEX_ARRAY);
	glVertexPointer(3, GL_FLOAT, 0, vertex4);
	glDrawElements(GL_QUADS, 4, GL_UNSIGNED_SHORT, index);
	glDisableClientState(GL_VERTEX_ARRAY);
}

void wall5()
{
	glEnableClientState(GL_VERTEX_ARRAY);
	glVertexPointer(3, GL_FLOAT, 0, vertex5);
	glDrawElements(GL_QUADS, 4, GL_UNSIGNED_SHORT, index);
	glDisableClientState(GL_VERTEX_ARRAY);
}

void wall6()
{
	glEnableClientState(GL_VERTEX_ARRAY);
	glVertexPointer(3, GL_FLOAT, 0, vertex6);
	glDrawElements(GL_QUADS, 4, GL_UNSIGNED_SHORT, index);
	glDisableClientState(GL_VERTEX_ARRAY);
}

void wall7()
{
	glEnableClientState(GL_VERTEX_ARRAY);
	glVertexPointer(3, GL_FLOAT, 0, vertex7);
	glDrawElements(GL_QUADS, 4, GL_UNSIGNED_SHORT, index);
	glDisableClientState(GL_VERTEX_ARRAY);
}

void wall8()
{
	glEnableClientState(GL_VERTEX_ARRAY);
	glVertexPointer(3, GL_FLOAT, 0, vertex8);
	glDrawElements(GL_QUADS, 4, GL_UNSIGNED_SHORT, index);
	glDisableClientState(GL_VERTEX_ARRAY);
}

void wall9()
{
	glEnableClientState(GL_VERTEX_ARRAY);
	glVertexPointer(3, GL_FLOAT, 0, vertex9);
	glDrawElements(GL_QUADS, 4, GL_UNSIGNED_SHORT, index);
	glDisableClientState(GL_VERTEX_ARRAY);
}

void wall10()
{
	glEnableClientState(GL_VERTEX_ARRAY);
	glVertexPointer(3, GL_FLOAT, 0, vertex10);
	glDrawElements(GL_QUADS, 4, GL_UNSIGNED_SHORT, index);
	glDisableClientState(GL_VERTEX_ARRAY);
}

void leweM() {

	glColor3f(1.0, 1.0, 0.0);
	glPushMatrix();
	glTranslatef(-15.0, 0.0, 2.0);
	wall1();
	glPopMatrix();

	glColor3f(1.0, 1.0, 0.0);
	glPushMatrix();
	glTranslatef(-3.0, 0.0, 2.0);
	wall1();
	glPopMatrix();

	glColor3f(0.0, 1.0, 0.0);
	glPushMatrix();
	glTranslatef(-15.0, 0.0, -2.0);
	wall1();
	glPopMatrix();
	
	glColor3f(0.0, 1.0, 0.0);
	glPushMatrix();
	glTranslatef(-3.0, 0.0, -2.0);
	wall1();
	glPopMatrix();

	glColor3f(0.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(-17.0, 0.0, 0.0);
	wall2();
	glPopMatrix();

	glColor3f(0.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(-13.0, 0.0, 0.0);
	wall2();
	glPopMatrix();

	glColor3f(0.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(-5.0, 0.0, 0.0);
	wall2();
	glPopMatrix();

	glColor3f(0.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(-1.0, 0.0, 0.0);
	wall2();
	glPopMatrix();

	glColor3f(0.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(-15.0, 10.0, 0.0);
	wall3();
	glPopMatrix();

	glColor3f(0.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(-15.0, -10.0, 0.0);
	wall3();
	glPopMatrix();

	glColor3f(0.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(-3.0, -10.0, 0.0);
	wall3();
	glPopMatrix();

	glColor3f(0.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(-3.0, 10.0, 0.0);
	wall3();
	glPopMatrix();

	glColor3f(0.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(-11.0, 0.0, 0.0);
	wall4();
	glPopMatrix();

	glColor3f(0.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(-11.0, -4.0, 0.0);
	wall4();
	glPopMatrix();

	glColor3f(0.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(-7.0, 0.0, 0.0);
	wall5();
	glPopMatrix();

	glColor3f(0.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(-7.0, -4.0, 0.0);
	wall5();
	glPopMatrix();

	glColor3f(1.0, 1.0, 0.0);
	glPushMatrix();
	glTranslatef(-11.0, 0.0, 2.0);
	wall9();
	glPopMatrix();

	glColor3f(0.0, 1.0, 0.0);
	glPushMatrix();
	glTranslatef(-11.0, 0.0, -2.0);
	wall9();
	glPopMatrix();

	glColor3f(1.0, 1.0, 0.0);
	glPushMatrix();
	glTranslatef(-7.0, 0.0, 2.0);
	wall10();
	glPopMatrix();

	glColor3f(0.0, 1.0, 0.0);
	glPushMatrix();
	glTranslatef(-7.0, 0.0, -2.0);
	wall10();
	glPopMatrix();
}

void praweM() {

	glColor3f(1.0, 1.0, 0.0);
	glPushMatrix();
	glTranslatef(15.0, 0.0, 2.0);
	wall1();
	glPopMatrix();

	glColor3f(1.0, 1.0, 0.0);
	glPushMatrix();
	glTranslatef(3.0, 0.0, 2.0);
	wall1();
	glPopMatrix();

	glColor3f(0.0, 1.0, 0.0);
	glPushMatrix();
	glTranslatef(15.0, 0.0, -2.0);
	wall1();
	glPopMatrix();

	glColor3f(0.0, 1.0, 0.0);
	glPushMatrix();
	glTranslatef(3.0, 0.0, -2.0);
	wall1();
	glPopMatrix();

	glColor3f(0.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(17.0, 0.0, 0.0);
	wall2();
	glPopMatrix();

	glColor3f(0.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(13.0, 0.0, 0.0);
	wall2();
	glPopMatrix();

	glColor3f(0.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(5.0, 0.0, 0.0);
	wall2();
	glPopMatrix();

	glColor3f(0.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(1.0, 0.0, 0.0);
	wall2();
	glPopMatrix();

	glColor3f(0.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(15.0, 10.0, 0.0);
	wall3();
	glPopMatrix();

	glColor3f(0.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(15.0, -10.0, 0.0);
	wall3();
	glPopMatrix();

	glColor3f(0.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(3.0, -10.0, 0.0);
	wall3();
	glPopMatrix();

	glColor3f(0.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(3.0, 10.0, 0.0);
	wall3();
	glPopMatrix();

	glColor3f(0.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(7.0, 0.0, 0.0);
	wall4();
	glPopMatrix();

	glColor3f(0.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(7.0, -4.0, 0.0);
	wall4();
	glPopMatrix();

	glColor3f(0.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(11.0, 0.0, 0.0);
	wall5();
	glPopMatrix();

	glColor3f(0.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(11.0, -4.0, 0.0);
	wall5();
	glPopMatrix();

	glColor3f(1.0, 1.0, 0.0);
	glPushMatrix();
	glTranslatef(7.0, 0.0, 2.0);
	wall9();
	glPopMatrix();

	glColor3f(0.0, 1.0, 0.0);
	glPushMatrix();
	glTranslatef(7.0, 0.0, -2.0);
	wall9();
	glPopMatrix();

	glColor3f(1.0, 1.0, 0.0);
	glPushMatrix();
	glTranslatef(11.0, 0.0, 2.0);
	wall10();
	glPopMatrix();

	glColor3f(0.0, 1.0, 0.0);
	glPushMatrix();
	glTranslatef(11.0, 0.0, -2.0);
	wall10();
	glPopMatrix();
}

void podstawka() {

	glColor3f(1.0, 0.0, 0.0);
	glPushMatrix();
	glTranslatef(0.0, 0.0, 2.0);
	wall8();
	glPopMatrix();

	glColor3f(1.0, 0.0, 0.0);
	glPushMatrix();
	glTranslatef(0.0, 0.0, -2.0);
	wall8();
	glPopMatrix();

	glColor3f(1.0, 0.0, 0.0);
	glPushMatrix();
	glTranslatef(0.0, 0.0, 0.0);
	wall6();
	glPopMatrix();

	glColor3f(1.0, 0.0, 0.0);
	glPushMatrix();
	glTranslatef(0.0, -4.0, 0.0);
	wall6();
	glPopMatrix();

	glColor3f(1.0, 0.0, 0.0);
	glPushMatrix();
	glTranslatef(-18.0, 0.0, 0.0);
	wall7();
	glPopMatrix();

	glColor3f(1.0, 0.0, 0.0);
	glPushMatrix();
	glTranslatef(18.0, 0.0, 0.0);
	wall7();
	glPopMatrix();
}

void scene()
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glEnable(GL_DEPTH_TEST);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(fovy, aspect, near_, far_);
	gluLookAt(0.0, 0.0, eyez, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glRotatef(pozx, 0, 1, 0);
	glRotatef(pozy, 1, 0, 0);	
	leweM();
	praweM();
	podstawka();
	glEnd();	
	glFlush();
	glutSwapBuffers();
}

void Keyboard(unsigned char key, int x, int y)
{
	switch (key)
	{
	case '-': {eyez += 1.0; 
	break;
	}
	case '+': {eyez -= 1.0; 
	break;
	}
	default: {
		break;}
	}

	glutPostRedisplay();
}

void SpecialKeys(int key, int x, int y)
{
	switch (key)
	{
	case GLUT_KEY_LEFT:
		pozx += 1.0;
		break;

	case GLUT_KEY_UP:
		pozy += 1.0;
		break;

	case GLUT_KEY_RIGHT:
		pozx -= 1.0;
		break;

	case GLUT_KEY_DOWN:
		pozy -= 1.0;
		break;
	}
	glutPostRedisplay();
}

void main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Inicjaly");
	glutDisplayFunc(scene);
	glutKeyboardFunc(Keyboard);
	glutSpecialFunc(SpecialKeys);
	glutMainLoop();
}