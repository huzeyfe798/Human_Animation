#include <iostream>
#include <GL/glut.h>  
#include <stdlib.h>
#include <fstream>
using namespace std;




double a = 4;
int width = 1600;
int height = 900;
float asp = 1;
float br1 = 0.0; float x;
float br2 = 0.0; float b;
float kr1x = 0.0; float c;
float kr1z = 0.0; float d;
float akr1z = 0.0; float e;
float kr2x = 0.0; float f;
float kr2z = 0.0; float g;
float akr2z = 0.0; float h;
float bsry = 0.0; float j;
float ab1x = 0.0; float k;
float ab2x = 0.0; float l;
float ht1 = 0.0;
float tt1 = 0.0;
float ekle = 0.0;
float mode= 0;
float mesafe = 0.1;
float donme = 0;

void readFile() {
	ifstream myReadFile;
	myReadFile.open("AnimationData.txt");
	if (myReadFile.is_open()) {
		myReadFile >> bsry >> br1 >> br2 >> kr1x >> kr2x >> kr1z >> kr2z >> akr1z >> akr2z 
			        >> j    >> x   >> b    >> c    >> f     >> d >> g    >> e     >> h    ;
		cout << bsry << br1 << br2 << kr1x << kr2x << kr1z << kr2z << akr1z << akr2z<<h <<" \n ";
		myReadFile.close();
	}
	else
		cout << "Error !!! Not read items ";

}
void writeFile() {
	ofstream myWriteFile;
	myWriteFile.open("AnimationData.txt");
	if (myWriteFile.is_open()) {
		myWriteFile << bsry <<" "<< br1<< " "<< br2 << " " << kr1x << " " << kr2x << " " << kr1z << " " << kr2z << " " << akr1z << " " << akr2z
			<<" "<< j << " " << x << " " << b << " " << c << " " << f << " " << d << " " << g << " " << e << " " << h<<"\n";
		myWriteFile.close();
	}
	else
		cout << "Error !!! Not write items ";
}


void insan() {

	

	glPushMatrix();
	glTranslatef(0, 10, ht1);
	glRotatef(donme, 0, 1, 0);

	//govde
	{
		glColor3f(0.41, 0.31, 0.21);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(3 * a / 4, -a, -3 * a / 6);
		glVertex3f(3 * a / 4, a, -3 * a / 6);
		glVertex3f(-3 * a / 4, a, -3 * a / 6);
		glVertex3f(-3 * a / 4, -a, -3 * a / 6);
		glEnd();
		glColor3f(0.61, 0.81, 0.21);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(3 * a / 4, -a, 3 * a / 6);
		glVertex3f(3 * a / 4, a, 3 * a / 6);
		glVertex3f(-3 * a / 4, a, 3 * a / 6);
		glVertex3f(-3 * a / 4, -a, 3 * a / 6);
		glEnd();
		glColor3f(0.121, 0.831, 0.71);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(3 * a / 4, -a, -3 * a / 6);
		glVertex3f(3 * a / 4, a, -3 * a / 6);
		glVertex3f(3 * a / 4, a, 3 * a / 6);
		glVertex3f(3 * a / 4, -a, 3 * a / 6);
		glEnd();
		glColor3f(0.11, 0.31, 0.31);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(-3 * a / 4, -a, 3 * a / 6);
		glVertex3f(-3 * a / 4, a, 3 * a / 6);
		glVertex3f(-3 * a / 4, a, -3 * a / 6);
		glVertex3f(-3 * a / 4, -a, -3 * a / 6);;
		glEnd();
		glColor3f(0.41, 0.51, 0.11);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(3 * a / 4, a, 3 * a / 6);
		glVertex3f(3 * a / 4, a, -3 * a / 6);
		glVertex3f(-3 * a / 4, a, -3 * a / 6);
		glVertex3f(-3 * a / 4, a, 3 * a / 6);
		glEnd();
		glColor3f(0.41, 0.31, 0.61);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(3 * a / 4, -a, -3 * a / 6);
		glVertex3f(3 * a / 4, -a, 3 * a / 6);
		glVertex3f(-3 * a / 4, -a, 3 * a / 6);
		glVertex3f(-3 * a / 4, -a, -3 * a / 6);
		glEnd();
	}
	glPopMatrix();
	glPushMatrix();

	glTranslatef(0, 15, ht1);
	glRotatef(bsry, 0.0f, 1.0f, 0.0f);
	glRotatef(donme, 0, 1, 0);
	
	//BAS
	{
		glColor3f(0.41, 0.31, 0.21);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(a / 4, -a / 4, -a / 4);
		glVertex3f(a / 4, a / 4, -a / 4);
		glVertex3f(-a / 4, a / 4, -a / 4);
		glVertex3f(-a / 4, -a / 4, -a / 4);
		glEnd();
		glColor3f(0.61, 0.81, 0.21);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(a / 4, -a / 4, a / 4);
		glVertex3f(a / 4, a / 4, a / 4);
		glVertex3f(-a / 4, a / 4, a / 4);
		glVertex3f(-a / 4, -a / 4, a / 4);
		glEnd();
		glColor3f(0.121, 0.831, 0.71);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(a / 4, -a / 4, -a / 4);
		glVertex3f(a / 4, a / 4, -a / 4);
		glVertex3f(a / 4, a / 4, a / 4);
		glVertex3f(a / 4, -a / 4, a / 4);
		glEnd();
		glColor3f(0.11, 0.31, 0.31);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(-a / 4, -a / 4, a / 4);
		glVertex3f(-a / 4, a / 4, a / 4);
		glVertex3f(-a / 4, a / 4, -a / 4);
		glVertex3f(-a / 4, -a / 4, -a / 4);;
		glEnd();
		glColor3f(0.41, 0.51, 0.11);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(a / 4, a / 4, a / 4);
		glVertex3f(a / 4, a / 4, -a / 4);
		glVertex3f(-a / 4, a / 4, -a / 4);
		glVertex3f(-a / 4, a / 4, a / 4);
		glEnd();
		glColor3f(0.41, 0.31, 0.61);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(a / 4, -a / 4, -a / 4);
		glVertex3f(a / 4, -a / 4, a / 4);
		glVertex3f(-a / 4, -a / 4, a / 4);
		glVertex3f(-a / 4, -a / 4, -a / 4);
		glEnd();
	}					//BAS						//BAS

	glPopMatrix();
	glPushMatrix();

	glTranslatef(4, 13, ht1);
	glRotatef(kr1x, 1.0f, 0.0f, 0.0f);
	glRotatef(kr1z, 0.0f, 0.0f, 1.0f);
	glRotatef(donme, 0, 1, 0);
	glTranslatef(0, -2, 0);
	
	//sag UST KOL
	{
		glColor3f(0.41, 0.31, 0.21);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(a / 4, -a / 2, -a / 4);
		glVertex3f(a / 4, a / 2, -a / 4);
		glVertex3f(-a / 4, a / 2, -a / 4);
		glVertex3f(-a / 4, -a / 2, -a / 4);
		glEnd();
		glColor3f(0.61, 0.81, 0.21);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(a / 4, -a / 2, a / 4);
		glVertex3f(a / 4, a / 2, a / 4);
		glVertex3f(-a / 4, a / 2, a / 4);
		glVertex3f(-a / 4, -a / 2, a / 4);
		glEnd();
		glColor3f(0.121, 0.831, 0.71);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(a / 4, -a / 2, -a / 4);
		glVertex3f(a / 4, a / 2, -a / 4);
		glVertex3f(a / 4, a / 2, a / 4);
		glVertex3f(a / 4, -a / 2, a / 4);
		glEnd();
		glColor3f(0.11, 0.31, 0.31);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(-a / 4, -a / 2, a / 4);
		glVertex3f(-a / 4, a / 2, a / 4);
		glVertex3f(-a / 4, a / 2, -a / 4);
		glVertex3f(-a / 4, -a / 2, -a / 4);;
		glEnd();
		glColor3f(0.41, 0.51, 0.11);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(a / 4, a / 2, a / 4);
		glVertex3f(a / 4, a / 2, -a / 4);
		glVertex3f(-a / 4, a / 2, -a / 4);
		glVertex3f(-a / 4, a / 2, a / 4);
		glEnd();
		glColor3f(0.41, 0.31, 0.61);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(a / 4, -a / 2, -a / 4);
		glVertex3f(a / 4, -a / 2, a / 4);
		glVertex3f(-a / 4, -a / 2, a / 4);
		glVertex3f(-a / 4, -a / 2, -a / 4);
		glEnd();
	}
	glTranslatef(-4, -11, -ht1);
	glTranslatef(4, 8, ht1);
	glRotatef(-kr1z, 0.0f, 0.0f, 1.0f);
	glRotatef(akr1z, 0.0f, 0.0f, 1.0f);

	glTranslatef(0, 3, 0);
	
	
	//sa galt kol
	{
		glColor3f(0.41, 0.31, 0.21);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(a / 8, -5 * a / 4, -a / 8);
		glVertex3f(a / 8, -a / 2, -a / 8);
		glVertex3f(-a / 8, -a / 2, -a / 8);
		glVertex3f(-a / 8, -5 * a / 4, -a / 8);
		glEnd();
		glColor3f(0.61, 0.81, 0.21);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(a / 8, -5 * a / 4, a / 8);
		glVertex3f(a / 8, -a / 2, a / 8);
		glVertex3f(-a / 8, -a / 2, a / 8);
		glVertex3f(-a / 8, -5 * a / 4, a / 8);
		glEnd();
		glColor3f(0.121, 0.831, 0.71);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(a / 8, -5 * a / 4, -a / 8);
		glVertex3f(a / 8, -a / 2, -a / 8);
		glVertex3f(a / 8, -a / 2, a / 8);
		glVertex3f(a / 8, -5 * a / 4, a / 8);
		glEnd();
		glColor3f(0.11, 0.31, 0.31);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(-a / 8, -5 * a / 4, a / 8);
		glVertex3f(-a / 8, -a / 2, a / 8);
		glVertex3f(-a / 8, -a / 2, -a / 8);
		glVertex3f(-a / 8, -5 * a / 4, -a / 8);;
		glEnd();
		glColor3f(0.41, 0.51, 0.11);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(a / 8, -a / 2, a / 8);
		glVertex3f(a / 8, -a / 2, -a / 8);
		glVertex3f(-a / 8, -a / 2, -a / 8);
		glVertex3f(-a / 8, -a / 2, a / 8);
		glEnd();
		glColor3f(0.41, 0.31, 0.61);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(a / 8, -5 * a / 4, -a / 8);
		glVertex3f(a / 8, -5 * a / 4, a / 8);
		glVertex3f(-a / 8, -5 * a / 4, a / 8);
		glVertex3f(-a / 8, -5 * a / 4, -a / 8);
		glEnd();
		glPopMatrix();
	}
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(-4, 13, ht1);
	glRotatef(kr2x, 1.0f, 0.0f, 0.0f);
	glRotatef(kr2z, 0.0f, 0.0f, 1.0f);
	glRotatef(donme, 0, 1, 0);
	glTranslatef(0, -2, 0);

	//sol UST KOL
	{
		glColor3f(0.41, 0.31, 0.21);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(a / 4, -a / 2, -a / 4);
		glVertex3f(a / 4, a / 2, -a / 4);
		glVertex3f(-a / 4, a / 2, -a / 4);
		glVertex3f(-a / 4, -a / 2, -a / 4);
		glEnd();
		glColor3f(0.61, 0.81, 0.21);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(a / 4, -a / 2, a / 4);
		glVertex3f(a / 4, a / 2, a / 4);
		glVertex3f(-a / 4, a / 2, a / 4);
		glVertex3f(-a / 4, -a / 2, a / 4);
		glEnd();
		glColor3f(0.121, 0.831, 0.71);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(a / 4, -a / 2, -a / 4);
		glVertex3f(a / 4, a / 2, -a / 4);
		glVertex3f(a / 4, a / 2, a / 4);
		glVertex3f(a / 4, -a / 2, a / 4);
		glEnd();
		glColor3f(0.11, 0.31, 0.31);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(-a / 4, -a / 2, a / 4);
		glVertex3f(-a / 4, a / 2, a / 4);
		glVertex3f(-a / 4, a / 2, -a / 4);
		glVertex3f(-a / 4, -a / 2, -a / 4);;
		glEnd();
		glColor3f(0.41, 0.51, 0.11);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(a / 4, a / 2, a / 4);
		glVertex3f(a / 4, a / 2, -a / 4);
		glVertex3f(-a / 4, a / 2, -a / 4);
		glVertex3f(-a / 4, a / 2, a / 4);
		glEnd();
		glColor3f(0.41, 0.31, 0.61);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(a / 4, -a / 2, -a / 4);
		glVertex3f(a / 4, -a / 2, a / 4);
		glVertex3f(-a / 4, -a / 2, a / 4);
		glVertex3f(-a / 4, -a / 2, -a / 4);
		glEnd();
	}
	glTranslatef(4, -11, -ht1);
	glTranslatef(-4, 8, ht1);
	glRotatef(-kr2z, 0.0f, 0.0f, 1.0f);
	glRotatef(akr2z, 0.0f, 0.0f, 1.0f);
	glTranslatef(0, 3, 0);

	//sol alt kol
	{
		glColor3f(0.41, 0.31, 0.21);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(a / 8, -5 * a / 4, -a / 8);
		glVertex3f(a / 8, -a / 2, -a / 8);
		glVertex3f(-a / 8, -a / 2, -a / 8);
		glVertex3f(-a / 8, -5 * a / 4, -a / 8);
		glEnd();
		glColor3f(0.61, 0.81, 0.21);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(a / 8, -5 * a / 4, a / 8);
		glVertex3f(a / 8, -a / 2, a / 8);
		glVertex3f(-a / 8, -a / 2, a / 8);
		glVertex3f(-a / 8, -5 * a / 4, a / 8);
		glEnd();
		glColor3f(0.121, 0.831, 0.71);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(a / 8, -5 * a / 4, -a / 8);
		glVertex3f(a / 8, -a / 2, -a / 8);
		glVertex3f(a / 8, -a / 2, a / 8);
		glVertex3f(a / 8, -5 * a / 4, a / 8);
		glEnd();
		glColor3f(0.11, 0.31, 0.31);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(-a / 8, -5 * a / 4, a / 8);
		glVertex3f(-a / 8, -a / 2, a / 8);
		glVertex3f(-a / 8, -a / 2, -a / 8);
		glVertex3f(-a / 8, -5 * a / 4, -a / 8);;
		glEnd();
		glColor3f(0.41, 0.51, 0.11);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(a / 8, -a / 2, a / 8);
		glVertex3f(a / 8, -a / 2, -a / 8);
		glVertex3f(-a / 8, -a / 2, -a / 8);
		glVertex3f(-a / 8, -a / 2, a / 8);
		glEnd();
		glColor3f(0.41, 0.31, 0.61);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(a / 8, -5 * a / 4, -a / 8);
		glVertex3f(a / 8, -5 * a / 4, a / 8);
		glVertex3f(-a / 8, -5 * a / 4, a / 8);
		glVertex3f(-a / 8, -5 * a / 4, -a / 8);
		glEnd();
		glPopMatrix();
	}
	glPopMatrix();
	glPushMatrix();
	glTranslatef(1.25, 8, ht1);
	glRotatef(br1, 1.0f, 0.0f, 0.0f);
	glRotatef(donme, 0, 1, 0);
	//sag bacak ust
	{
		glColor3f(0.41, 0.31, 0.21);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(3 * a / 16, -3 * a / 2, -3 * a / 16);
		glVertex3f(3 * a / 16, -a / 2, -3 * a / 16);
		glVertex3f(-3 * a / 16, -a / 2, -3 * a / 16);
		glVertex3f(-3 * a / 16, -3 * a / 2, -3 * a / 16);
		glEnd();
		glColor3f(0.61, 0.81, 0.21);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(3 * a / 16, -3 * a / 2, 3 * a / 16);
		glVertex3f(3 * a / 16, -a / 2, 3 * a / 16);
		glVertex3f(-3 * a / 16, -a / 2, 3 * a / 16);
		glVertex3f(-3 * a / 16, -3 * a / 2, 3 * a / 16);
		glEnd();
		glColor3f(0.121, 0.831, 0.71);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(3 * a / 16, -3 * a / 2, -3 * a / 16);
		glVertex3f(3 * a / 16, -a / 2, -3 * a / 16);
		glVertex3f(3 * a / 16, -a / 2, 3 * a / 16);
		glVertex3f(3 * a / 16, -3 * a / 2, 3 * a / 16);
		glEnd();
		glColor3f(0.11, 0.31, 0.31);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(-3 * a / 16, -3 * a / 2, 3 * a / 16);
		glVertex3f(-3 * a / 16, -a / 2, 3 * a / 16);
		glVertex3f(-3 * a / 16, -a / 2, -3 * a / 16);
		glVertex3f(-3 * a / 16, -3 * a / 2, -3 * a / 16);;
		glEnd();
		glColor3f(0.41, 0.51, 0.11);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(3 * a / 16, -a / 2, 3 * a / 16);
		glVertex3f(3 * a / 16, -a / 2, -3 * a / 16);
		glVertex3f(-3 * a / 16, -a / 2, -3 * a / 16);
		glVertex3f(-3 * a / 16, -a / 2, 3 * a / 16);
		glEnd();
		glColor3f(0.41, 0.31, 0.61);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(3 * a / 16, -3 * a / 2, -3 * a / 16);
		glVertex3f(3 * a / 16, -3 * a / 2, 3 * a / 16);
		glVertex3f(-3 * a / 16, -3 * a / 2, 3 * a / 16);
		glVertex3f(-3 * a / 16, -3 * a / 2, -3 * a / 16);
		glEnd();
	}
	//sag alt bacak
	glTranslatef(-1.25, -8, -ht1);
	glTranslatef(1.25, -2, ht1);
	
	glTranslatef(0, 10, 0);
	{
		glColor3f(0.41, 0.31, 0.21);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(a / 10, -2 * a, -a / 10);
		glVertex3f(a / 10, -3 * a / 2, -a / 10);
		glVertex3f(-a / 10, -3 * a / 2, -a / 10);
		glVertex3f(-a / 10, -2 * a, -a / 10);
		glEnd();
		glColor3f(0.61, 0.81, 0.21);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(a / 10, -2 * a, a / 10);
		glVertex3f(a / 10, -3 * a / 2, a / 10);
		glVertex3f(-a / 10, -3 * a / 2, a / 10);
		glVertex3f(-a / 10, -2 * a, a / 10);
		glEnd();
		glColor3f(0.121, 0.831, 0.71);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(a / 10, -2 * a, -a / 10);
		glVertex3f(a / 10, -3 * a / 2, -a / 10);
		glVertex3f(a / 10, -3 * a / 2, a / 10);
		glVertex3f(a / 10, -2 * a, a / 10);
		glEnd();
		glColor3f(0.11, 0.31, 0.31);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(-a / 10, -2 * a, a / 10);
		glVertex3f(-a / 10, -3 * a / 2, a / 10);
		glVertex3f(-a / 10, -3 * a / 2, -a / 10);
		glVertex3f(-a / 10, -2 * a, -a / 10);;
		glEnd();
		glColor3f(0.41, 0.51, 0.11);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(a / 10, -3 * a / 2, a / 10);
		glVertex3f(a / 10, -3 * a / 2, -a / 10);
		glVertex3f(-a / 10, -3 * a / 2, -a / 10);
		glVertex3f(-a / 10, -3 * a / 2, a / 10);
		glEnd();
		glColor3f(0.41, 0.31, 0.61);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(a / 10, -2 * a, -a / 10);
		glVertex3f(a / 10, -2 * a, a / 10);
		glVertex3f(-a / 10, -2 * a, a / 10);
		glVertex3f(-a / 10, -2 * a, -a / 10);
		glEnd();
	}
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-1.25, 8, ht1);
	glRotatef(br2, 1.0f, 0.0f, 0.0f);
	glRotatef(donme, 0, 1, 0);
	//sol bacak ust
	{
		glColor3f(0.41, 0.31, 0.21);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(3 * a / 16, -3 * a / 2, -3 * a / 16);
		glVertex3f(3 * a / 16, -a / 2, -3 * a / 16);
		glVertex3f(-3 * a / 16, -a / 2, -3 * a / 16);
		glVertex3f(-3 * a / 16, -3 * a / 2, -3 * a / 16);
		glEnd();
		glColor3f(0.61, 0.81, 0.21);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(3 * a / 16, -3 * a / 2, 3 * a / 16);
		glVertex3f(3 * a / 16, -a / 2, 3 * a / 16);
		glVertex3f(-3 * a / 16, -a / 2, 3 * a / 16);
		glVertex3f(-3 * a / 16, -3 * a / 2, 3 * a / 16);
		glEnd();
		glColor3f(0.121, 0.831, 0.71);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(3 * a / 16, -3 * a / 2, -3 * a / 16);
		glVertex3f(3 * a / 16, -a / 2, -3 * a / 16);
		glVertex3f(3 * a / 16, -a / 2, 3 * a / 16);
		glVertex3f(3 * a / 16, -3 * a / 2, 3 * a / 16);
		glEnd();
		glColor3f(0.11, 0.31, 0.31);
		glEnable(GL_LINE_SMOOTH);
		glBegin(GL_POLYGON);
		glVertex3f(-3 * a / 16, -3 * a / 2, 3 * a / 16);
		glVertex3f(-3 * a / 16, -a / 2, 3 * a / 16);
glVertex3f(-3 * a / 16, -a / 2, -3 * a / 16);
glVertex3f(-3 * a / 16, -3 * a / 2, -3 * a / 16);;
glEnd();
glColor3f(0.41, 0.51, 0.11);
glEnable(GL_LINE_SMOOTH);
glBegin(GL_POLYGON);
glVertex3f(3 * a / 16, -a / 2, 3 * a / 16);
glVertex3f(3 * a / 16, -a / 2, -3 * a / 16);
glVertex3f(-3 * a / 16, -a / 2, -3 * a / 16);
glVertex3f(-3 * a / 16, -a / 2, 3 * a / 16);
glEnd();
glColor3f(0.41, 0.31, 0.61);
glEnable(GL_LINE_SMOOTH);
glBegin(GL_POLYGON);
glVertex3f(3 * a / 16, -3 * a / 2, -3 * a / 16);
glVertex3f(3 * a / 16, -3 * a / 2, 3 * a / 16);
glVertex3f(-3 * a / 16, -3 * a / 2, 3 * a / 16);
glVertex3f(-3 * a / 16, -3 * a / 2, -3 * a / 16);
glEnd();
	}
	glTranslatef(1.25, -8, -ht1);
	glTranslatef(-1.25, -2, ht1);
	
	glTranslatef(0, 10, 0);
	
	{
	glColor3f(0.41, 0.31, 0.21);
	glEnable(GL_LINE_SMOOTH);
	glBegin(GL_POLYGON);
	glVertex3f(a / 10, -2 * a, -a / 10);
	glVertex3f(a / 10, -3 * a / 2, -a / 10);
	glVertex3f(-a / 10, -3 * a / 2, -a / 10);
	glVertex3f(-a / 10, -2 * a, -a / 10);
	glEnd();
	glColor3f(0.61, 0.81, .21);
	glEnable(GL_LINE_SMOOTH);
	glBegin(GL_POLYGON);
	glVertex3f(a / 10, -2 * a, a / 10);
	glVertex3f(a / 10, -3 * a / 2, a / 10);
	glVertex3f(-a / 10, -3 * a / 2, a / 10);
	glVertex3f(-a / 10, -2 * a, a / 10);
	glEnd();
	glColor3f(0.121, 0.831, .71);
	glEnable(GL_LINE_SMOOTH);
	glBegin(GL_POLYGON);
	glVertex3f(a / 10, -2 * a, -a / 10);
	glVertex3f(a / 10, -3 * a / 2, -a / 10);
	glVertex3f(a / 10, -3 * a / 2, a / 10);
	glVertex3f(a / 10, -2 * a, a / 10);
	glEnd();
	glColor3f(0.11, 0.31, 0.31);
	glEnable(GL_LINE_SMOOTH);
	glBegin(GL_POLYGON);
	glVertex3f(-a / 10, -2 * a, a / 10);
	glVertex3f(-a / 10, -3 * a / 2, a / 10);
	glVertex3f(-a / 10, -3 * a / 2, -a / 10);
	glVertex3f(-a / 10, -2 * a, -a / 10);;
	glEnd();
	glColor3f(0.41, 0.51, 0.11);
	glEnable(GL_LINE_SMOOTH);
	glBegin(GL_POLYGON);
	glVertex3f(a / 10, -3 * a / 2, a / 10);
	glVertex3f(a / 10, -3 * a / 2, -a / 10);
	glVertex3f(-a / 10, -3 * a / 2, -a / 10);
	glVertex3f(-a / 10, -3 * a / 2, a / 10);
	glEnd();
	glColor3f(0.41, 0.31, 0.61);
	glEnable(GL_LINE_SMOOTH);
	glBegin(GL_POLYGON);
	glVertex3f(a / 10, -2 * a, -a / 10);
	glVertex3f(a / 10, -2 * a, a / 10);
	glVertex3f(-a / 10, -2 * a, a / 10);
	glVertex3f(-a / 10, -2 * a, -a / 10);
	glEnd();
	}
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-1.25, (tt1/4)+1.5, tt1+10);
	glutSolidSphere(1.5, 500, 500);
	glPopMatrix();
	glPushMatrix();
	glColor3f(0.41, 0.61, 0.61);
	glEnable(GL_LINE_SMOOTH);
	glBegin(GL_POLYGON);
	glVertex3f(50, 0, -50);
	glVertex3f(50, 0, 50);
	glVertex3f(-50, 0, 50);
	glVertex3f(-50, 0, -50);
	glEnd();
	glPopMatrix();






}
void animation() {
		if (bsry < j ) {
		bsry = bsry + ekle;
		}
		else if (bsry > j) {
			bsry = bsry - ekle;
		}

		if (br1 < x ) {
			br1 = br1 + ekle;
		}
		else if (br1 > x ) {
			br1 = br1 - ekle;
		}

		if (br2 < b ) {
			br2 = br2 + ekle;
		}
		else if (br2 > b) {
			br2 = br2 - ekle;
		}

		if (kr1x < c ) {
			kr1x = kr1x + ekle;
		}
		else if (kr1x > c ) {
			kr1x = kr1x - ekle;
		}

		if (kr2x < f ) {
			kr2x = kr2x + ekle;
		}
		else if (kr2x > f ) {
			kr2x = kr2x - ekle;
		}

		if (kr1z < d ) {
			kr1z = kr1z + ekle;
		}
		else if (kr1z > d ) {
			kr1z = kr1z - ekle;
		}

		if (kr2z < g ) {
			kr2z = kr2z + ekle;
		}
		else if (kr2z > g ) {
			kr2z = kr2z - ekle;
		}

		if (akr1z < e ) {
			akr1z = akr1z + ekle;
		}
		else if (akr1z > e ) {
			akr1z = akr1z - ekle;
		}

		if (akr2z < h ) {
			akr2z = akr2z + ekle;
		}
		else if (akr2z > h ) {
			akr2z = akr2z - ekle;
		}
	
		


}


void elsallama() {
	
		if (kr1x != -180) {
			kr1x=kr1x-3;
			
		}
		else if (kr1z != 12) {
			kr1z = kr1z + 1;
		}
		else if (akr1z == 0) {
			ekle = -1;
		}
		else if (akr1z == -30) {
			ekle = 1;
		}
		
		akr1z = akr1z + ekle;
		
	
}

void yurume() {
	
	
	if (ht1 > 46) {
		mesafe = -0.1;
		donme = 180;
		
	}
	else if (ht1 < -46) {
		mesafe = 0.1;
		donme = 0;
	}
	else if (kr1x == -45) {
		ekle = 1.5;
		}
	else if (kr1x == 45) {
		ekle = -1.5;
	}
	
	kr1x = kr1x + ekle;
	kr2x = -kr1x;
	br1 = br1 - ekle;
	ab1x = br1;
	ab2x = -br1;
	br2 = -br1;
	ht1 = ht1 + mesafe;
	
		


}

void topvurma() {
	 

	if (ht1 > 5) {
		
		mesafe = 0;
		if (kr1x == 0) {
			ekle = 0;
		}
		if (tt1 < 36) {
			tt1 = tt1 + 0.5;
		}

	}
	
	
	if (kr1x == 45) {
		ekle = -1.5;
	}
	else if (kr1x ==-45) {
		ekle = 1.5;
	}

	kr1x = kr1x + ekle;
	kr2x = -kr1x;
	br1 = br1 - ekle;
	br2 = -br1;
	ht1 = ht1 + mesafe;


}






void reshape(int width, int height) {
	if (height > 0) {
		asp = (double)width / height;
	}
	else {
		asp = 1;
	}
	glViewport(0, 0, width, height);

}


void Movekeys(unsigned char key, int x, int y) {

	if (key == 'e') {
		br1 = 0.0;
		br2 = 0.0;
		kr1x = 0.0;
		kr1z = 0.0;
		akr1z = 0.0;
		kr2x = 0.0;
		kr2z = 0.0;
		akr2z = 0.0;
		bsry = 0.0;
		ab1x = 0.0;
		ab2x = 0.0;
		ht1 = 0.0;
		ekle = 0;
		mode = 1;
		
	}
	if (key == 'y') {
		mode = 2;
		br1 = 0.0;
		br2 = 0.0;
		kr1x = 0.0;
		kr1z = 0.0;
		akr1z = 0.0;
		kr2x = 0.0;
		kr2z = 0.0;
		akr2z = 0.0;
		bsry = 0.0;
		ab1x = 0.0;
		ab2x = 0.0;
		ht1 = 0.0;
		ekle = 1.5;
		mesafe = 0.1;
	}
	if (key == 'a') {
		mode = 3;
		tt1 = 0.0;
		br1 = 0.0;
		br2 = 0.0;
		kr1x = 0.0;
		kr1z = 0.0;
		akr1z = 0.0;
		kr2x = 0.0;
		kr2z = 0.0;
		akr2z = 0.0;
		bsry = 0.0;
		ab1x = 0.0;
		ab2x = 0.0;
		ht1 = 0.0;
		ekle = 1.5;
		mesafe = 0.05;
	}
	if (key == 'r') {
		mode = 0;
		br1 = 0.0;
		br2 = 0.0;
		kr1x = 0.0;
		kr1z = 0.0;
		akr1z = 0.0;
		kr2x = 0.0;
		kr2z = 0.0;
		akr2z = 0.0;
		bsry = 0.0;
		ab1x = 0.0;
		ab2x = 0.0;

	}
	
	if (key == 'q') {
		mode = 4;
		ekle=0.5;
	}
	if (key == 'o') {
		writeFile();
		exit(1);
	}

	glutPostRedisplay();

}








void Display(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();



	gluPerspective(50.0, asp, 0.1, 1000);
	gluLookAt(50,20,50, 0, 0., ht1, 0, 1.0, 0.);


	glMatrixMode(GL_MODELVIEW);
	insan();
	if (mode == 1) {
		elsallama();
	}
	if (mode == 2) {
		yurume();
	}
	if (mode == 3) {
		topvurma();
	}
	if (mode == 4) {
		animation();
	}
	
	
	
	glutPostRedisplay();


	glFlush();
	glutSwapBuffers();
}


int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

	glutInitWindowSize(width, height);
	glutCreateWindow("Cube");

	glEnable(GL_DEPTH_TEST);

	readFile();

	glutDisplayFunc(Display);
	glutReshapeFunc(reshape);
	glutKeyboardFunc(Movekeys);

	glutMainLoop();
	return 0;
}
