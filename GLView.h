#ifndef GLVIEW_H
#define GLVIEW_H

#include <qwidget.h>
#include <qgl.h>
#include <qimage.h>
#include <qcolor.h>

#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14285714285714285714 
#endif
/* Custom OpenGL Viewer Widget */

class GLView : public QGLWidget
{
   Q_OBJECT
public: 
	GLView(QWidget *parent=0, const char *name=0);
	~GLView();	
	void changeModel();
	void updateView();
	void setTexture(QImage img);
public:
	GLfloat ambiLight[4];
	GLfloat diffLight[4];
	GLfloat specLight[4];
	
	GLfloat ambiMat[4];
	GLfloat diffMat[4];
	GLfloat specMat[4];
	
	GLfloat specRef[4];
	GLfloat opacity;
	GLint shine;
	
	GLfloat xRot;
	GLfloat yRot;
	
	bool hasTexture;
	
public slots:
	void slotXRotation(int rotX);
	void slotYRotation(int rotY);
protected:
	void initializeGL();
	void resizeGL( int width, int height );
	void paintGL();
	
private:
	int modelNum;
	QImage tex1, buf;
	GLUquadricObj *sphere, *cone, *cylinder, *base;
	void drawTorus(int numMajor, int numMinor, float majorRadius, float minorRadius);
	void drawCube(float size);
};

#endif
