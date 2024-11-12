/****************************************************************************
 ** ui.h extension file, included from the uic-generated form implementation.
 **
 ** If you wish to add, delete or rename functions or slots use
 ** Qt Designer which will update this file, preserving your code. Create an
 ** init() function in place of a constructor, and a destroy() function in
 ** place of a destructor.
 *****************************************************************************/

void MatlEditor::slotChangeModel()
{
    theView->changeModel();
}


void MatlEditor::slotBrass()
{
    //Light Values 
    theView->ambiLight[0] = 0;
    theView->ambiLight[1] = 0;
    theView->ambiLight[2] = 0;
    theView->diffLight[0] = 1;
    theView->diffLight[1] = 1;
    theView->diffLight[2] = 1;
    theView->specLight[0] = 0.5;
    theView->specLight[1] = 0.5;
    theView->specLight[2] = 0.5;

    //Material Values
    theView->ambiMat[0] = 0.329412;
    theView->ambiMat[1] = 0.223529;
    theView->ambiMat[2] = 0.027451;
    theView->diffMat[0] = 0.780392;
    theView->diffMat[1] = 0.568627;
    theView->diffMat[2] = 0.113725;
    theView->specMat[0] = 0.992157;
    theView->specMat[1] = 0.941176;
    theView->specMat[2] = 0.807843;
    theView->shine = (GLint)fabs(128.0*0.21794872);

    theView->updateView();
    updateSliders();   

}


void MatlEditor::slotBronze()
{
    //Light Values 
    theView->ambiLight[0] = 0;
    theView->ambiLight[1] = 0;
    theView->ambiLight[2] = 0;
    theView->diffLight[0] = 1;
    theView->diffLight[1] = 1;
    theView->diffLight[2] = 1;
    theView->specLight[0] = 0.5;
    theView->specLight[1] = 0.5;
    theView->specLight[2] = 0.5;

    //Material Values
    theView->ambiMat[0] = 0.2125;
    theView->ambiMat[1] = 0.1275;
    theView->ambiMat[2] = 0.054;
    theView->diffMat[0] = 0.714;
    theView->diffMat[1] = 0.4284;
    theView->diffMat[2] = 0.18144;
    theView->specMat[0] = 0.393548;
    theView->specMat[1] = 0.271906;
    theView->specMat[2] = 0.166721;
    theView->shine = (GLint)fabs(128.0*0.2);

    theView->updateView();
    updateSliders();
}


void MatlEditor::slotCopper()
{
    //Light Values 
    theView->ambiLight[0] = 0;
    theView->ambiLight[1] = 0;
    theView->ambiLight[2] = 0;
    theView->diffLight[0] = 1;
    theView->diffLight[1] = 1;
    theView->diffLight[2] = 1;
    theView->specLight[0] = 0.5;
    theView->specLight[1] = 0.5;
    theView->specLight[2] = 0.5;

    //Material Values
    theView->ambiMat[0] = 0.19125;
    theView->ambiMat[1] = 0.0735;
    theView->ambiMat[2] = 0.0225;
    theView->diffMat[0] = 0.7038;
    theView->diffMat[1] = 0.27048;
    theView->diffMat[2] = 0.0828;
    theView->specMat[0] = 0.256777;
    theView->specMat[1] = 0.137622;
    theView->specMat[2] = 0.086014;
    theView->shine = (GLint)fabs(128.0*0.1);

    theView->updateView();
    updateSliders();
}


void MatlEditor::slotGold()
{
    //Light Values 
    theView->ambiLight[0] = 0;
    theView->ambiLight[1] = 0;
    theView->ambiLight[2] = 0;
    theView->diffLight[0] = 1;
    theView->diffLight[1] = 1;
    theView->diffLight[2] = 1;
    theView->specLight[0] = 0.5;
    theView->specLight[1] = 0.5;
    theView->specLight[2] = 0.5;

    //Material Values
    theView->ambiMat[0] = 0.24725;
    theView->ambiMat[1] = 0.1995;
    theView->ambiMat[2] = 0.0745;
    theView->diffMat[0] = 0.75164;
    theView->diffMat[1] = 0.60648;
    theView->diffMat[2] = 0.22648;
    theView->specMat[0] = 0.628281;
    theView->specMat[1] = 0.555802;
    theView->specMat[2] = 0.366065;
    theView->shine = (GLint)fabs(128.0*0.4);

    theView->updateView();
    updateSliders();
}


void MatlEditor::slotSilver()
{
    //Light Values 
    theView->ambiLight[0] = 0;
    theView->ambiLight[1] = 0;
    theView->ambiLight[2] = 0;
    theView->diffLight[0] = 1;
    theView->diffLight[1] = 1;
    theView->diffLight[2] = 1;
    theView->specLight[0] = 0.5;
    theView->specLight[1] = 0.5;
    theView->specLight[2] = 0.5;

    //Material Values
    theView->ambiMat[0] = 0.19225;
    theView->ambiMat[1] = 0.19225;
    theView->ambiMat[2] = 0.19225;
    theView->diffMat[0] = 0.50754;
    theView->diffMat[1] = 0.50654;
    theView->diffMat[2] = 0.50754;
    theView->specMat[0] = 0.508273;
    theView->specMat[1] = 0.508273;
    theView->specMat[2] = 0.508273;
    theView->shine = (GLint)fabs(128.0*0.4);

    theView->updateView();
    updateSliders();
}


void MatlEditor::slotRuby()
{
    //Light Values 
    theView->ambiLight[0] = 0;
    theView->ambiLight[1] = 0;
    theView->ambiLight[2] = 0;
    theView->diffLight[0] = 1;
    theView->diffLight[1] = 1;
    theView->diffLight[2] = 1;
    theView->specLight[0] = 0.5;
    theView->specLight[1] = 0.5;
    theView->specLight[2] = 0.5;

    //Material Values
    theView->ambiMat[0] = 0.1745;
    theView->ambiMat[1] = 0.01175;
    theView->ambiMat[2] = 0.01175;
    theView->diffMat[0] = 0.61424;
    theView->diffMat[1] = 0.04136;
    theView->diffMat[2] = 0.04136;
    theView->specMat[0] = 0.727811;
    theView->specMat[1] = 0.626959;
    theView->specMat[2] = 0.626959;
    theView->shine = (GLint)fabs(128.0*0.6);

    theView->updateView();
    updateSliders();
}


void MatlEditor::slotEmerald()
{
    //Light Values 
    theView->ambiLight[0] = 0;
    theView->ambiLight[1] = 0;
    theView->ambiLight[2] = 0;
    theView->diffLight[0] = 1;
    theView->diffLight[1] = 1;
    theView->diffLight[2] = 1;
    theView->specLight[0] = 0.5;
    theView->specLight[1] = 0.5;
    theView->specLight[2] = 0.5;

    //Material Values
    theView->ambiMat[0] = 0.0215;
    theView->ambiMat[1] = 0.1745;
    theView->ambiMat[2] = 0.0215;
    theView->diffMat[0] = 0.07568;
    theView->diffMat[1] = 0.61424;
    theView->diffMat[2] = 0.07568;
    theView->specMat[0] = 0.633;
    theView->specMat[1] = 0.727811;
    theView->specMat[2] = 0.633;
    theView->shine = (GLint)fabs(128.0*0.6);

    theView->updateView();
    updateSliders();
}


void MatlEditor::slotTurquoise()
{
    //Light Values 
    theView->ambiLight[0] = 0;
    theView->ambiLight[1] = 0;
    theView->ambiLight[2] = 0;
    theView->diffLight[0] = 1;
    theView->diffLight[1] = 1;
    theView->diffLight[2] = 1;
    theView->specLight[0] = 0.5;
    theView->specLight[1] = 0.5;
    theView->specLight[2] = 0.5;

    //Material Values
    theView->ambiMat[0] = 0.1;
    theView->ambiMat[1] = 0.18725;
    theView->ambiMat[2] = 0.1745;
    theView->diffMat[0] = 0.396;
    theView->diffMat[1] = 0.74151;
    theView->diffMat[2] = 0.69102;
    theView->specMat[0] = 0.297254;
    theView->specMat[1] = 0.30829;
    theView->specMat[2] = 0.306678;
    theView->shine = (GLint)fabs(128.0*0.1);

    theView->updateView();
    updateSliders();
}


void MatlEditor::slotLightAmbRed()
{
    theView->ambiLight[0] = (GLfloat)sliderLAR->value()/255.0;
    theView->updateView();
}


void MatlEditor::slotLightAmbGreen()
{
    theView->ambiLight[1] = (GLfloat)sliderLAG->value()/255.0;
    theView->updateView();
}


void MatlEditor::slotLightAmbBlue()
{
    theView->ambiLight[2] = (GLfloat)sliderLAB->value()/255.0;
    theView->updateView();
}


void MatlEditor::slotLightDiffRed()
{
    theView->diffLight[0] = (GLfloat)sliderLDR->value()/255.0;
    theView->updateView();
}


void MatlEditor::slotLightDiffGreen()
{
    theView->diffLight[1] = (GLfloat)sliderLDG->value()/255.0;
    theView->updateView();
}


void MatlEditor::slotLightDiffBlue()
{
    theView->diffLight[2] = (GLfloat)sliderLDB->value()/255.0;
    theView->updateView();
}


void MatlEditor::slotLightSpecRed()
{
    theView->specLight[0] = (GLfloat)sliderLSR->value()/255.0;
    theView->updateView();
}


void MatlEditor::slotLightSpecGreen()
{
    theView->specLight[1] = (GLfloat)sliderLSG->value()/255.0;
    theView->updateView();
}


void MatlEditor::slotLightSpecBlue()
{
    theView->specLight[2] = (GLfloat)sliderLSB->value()/255.0;
    theView->updateView();
}


void MatlEditor::slotMatlAmbRed()
{
    theView->ambiMat[0] = (GLfloat)sliderMAR->value()/255.0;
    theView->updateView();
}


void MatlEditor::slotMatlAmbGreen()
{
    theView->ambiMat[1] = (GLfloat)sliderMAG->value()/255.0;
    theView->updateView();
}


void MatlEditor::slotMatlAmbBlue()
{
    theView->ambiMat[2] = (GLfloat)sliderMAB->value()/255.0;
    theView->updateView();
}


void MatlEditor::slotMatlDiffRed()
{
    theView->diffMat[0] = (GLfloat)sliderMDR->value()/255.0;
    theView->updateView();
}


void MatlEditor::slotMatlDiffGreen()
{
    theView->diffMat[1] = (GLfloat)sliderMDG->value()/255.0;
    theView->updateView();
}


void MatlEditor::slotMatlDiffBlue()
{
    theView->diffMat[2] = (GLfloat)sliderMDB->value()/255.0;
    theView->updateView();
}


void MatlEditor::slotMatlSpecRed()
{
    theView->specMat[0] = (GLfloat)sliderMSR->value()/255.0;
    theView->updateView();
}


void MatlEditor::slotMatlSpecGreen()
{
    theView->specMat[1] = (GLfloat)sliderMSG->value()/255.0;
    theView->updateView();
}


void MatlEditor::slotMatlSpecBlue()
{
    theView->specMat[2] = (GLfloat)sliderMSB->value()/255.0;
    theView->updateView();
}


void MatlEditor::slotMatlShine()
{
    theView->shine = (GLint)sliderShine->value();
    theView->updateView();
}


void MatlEditor::init()
{
    theView = new GLView(frame3, "glview");
    // Put the GL widget inside the frame
    QHBoxLayout* flayout = new QHBoxLayout( frame3, 2, 2, "flayout");
    flayout->addWidget( theView, 1 );
    QObject::connect(sliderXRot, SIGNAL(valueChanged(int)),theView,SLOT(slotXRotation(int)) );
    QObject::connect(sliderYRot, SIGNAL(valueChanged(int)),theView,SLOT(slotYRotation(int)) );

    updateSliders();
}


void MatlEditor::destroy()
{
    if(theView)
	delete theView;
}


void MatlEditor::updateSliders()
{
    //Light Values
    sliderLAR->setValue((int)(255*theView->ambiLight[0]));
    sliderLAG->setValue((int)(255*theView->ambiLight[1]));
    sliderLAB->setValue((int)(255*theView->ambiLight[2]));

    sliderLDR->setValue((int)(255*theView->diffLight[0]));
    sliderLDG->setValue((int)(255*theView->diffLight[1]));
    sliderLDB->setValue((int)(255*theView->diffLight[2]));

    sliderLSR->setValue((int)(255*theView->specLight[0]));
    sliderLSG->setValue((int)(255*theView->specLight[1]));
    sliderLSB->setValue((int)(255*theView->specLight[2]));

    //Material Values
    sliderMAR->setValue((int)(255*theView->ambiMat[0]));
    sliderMAG->setValue((int)(255*theView->ambiMat[1]));
    sliderMAB->setValue((int)(255*theView->ambiMat[2]));

    sliderMDR->setValue((int)(255*theView->diffMat[0]));
    sliderMDG->setValue((int)(255*theView->diffMat[1]));
    sliderMDB->setValue((int)(255*theView->diffMat[2]));

    sliderMSR->setValue((int)(255*theView->specMat[0]));
    sliderMSG->setValue((int)(255*theView->specMat[1]));
    sliderMSB->setValue((int)(255*theView->specMat[2]));

    sliderShine->setValue((int)theView->shine);

    sliderTransparency->setValue((int)(255*theView->opacity));

}

void MatlEditor::slotToggleTexture( bool )
{
    theView->hasTexture = !theView->hasTexture;
    theView->updateView();
}

#include <qfiledialog.h>
#include <qimage.h>
void MatlEditor::slotSelectTexture()
{
    QImage buf;
    QString str =  QFileDialog::getOpenFileName(0,"Image Files (*.png *.bmp *.xpm *.jpg);;All Files (*.*)",this,0,"Load Image Texture File");
    if ( !buf.load( str ) )
    {	// Load first image from file
	qWarning( "Could not read image file, using single-color instead." );
	QImage dummy( 128, 128, 32 );
	dummy.fill( Qt::white.rgb() );
	buf = dummy;
    }

    theView->setTexture(buf);
    theView->updateView();
}

void MatlEditor::slotTransparency()
{
    theView->opacity = (GLfloat)sliderTransparency->value()/100.0;
    theView->ambiMat[3] = theView->opacity;
    theView->diffMat[3] = theView->opacity;
    theView->specMat[3] = theView->opacity;
    theView->updateView();
}


void MatlEditor::slotDefault()
{
    theView->opacity = 1.0;
    theView->ambiLight[0] = 0.3;
    theView->ambiLight[1] = 0.3;
    theView->ambiLight[2] = 0.3;
    theView->ambiLight[3] = 1.0;    
    theView->diffLight[0] = 0.7f;
    theView->diffLight[1] = 0.7f;
    theView->diffLight[2] = 0.7f;
    theView->diffLight[3] = 1.0f;    
    theView->specLight[0] = 1.0f;
    theView->specLight[1] = 1.0f;
    theView->specLight[2] = 1.0f;
    theView->specLight[3] = 1.0f;    
    theView->ambiMat[0] = 0.2;
    theView->ambiMat[1] = 0.5;
    theView->ambiMat[2] = 0.7;
    theView->ambiMat[3] = theView->opacity;    
    theView->diffMat[0] = 0.7f;
    theView->diffMat[1] = 0.7f;
    theView->diffMat[2] = 0.7f;
    theView->diffMat[3] = theView->opacity;    
    theView->specMat[0] = 1.0f;
    theView->specMat[1] = 1.0f;
    theView->specMat[2] = 1.0f;
    theView->specMat[3] = theView->opacity;  
    theView->shine = 128;
    updateSliders();
}



void MatlEditor::slotJade()
{
    //Light Values 
    theView->ambiLight[0] = 0;
    theView->ambiLight[1] = 0;
    theView->ambiLight[2] = 0;
    theView->diffLight[0] = 1;
    theView->diffLight[1] = 1;
    theView->diffLight[2] = 1;
    theView->specLight[0] = 0.5;
    theView->specLight[1] = 0.5;
    theView->specLight[2] = 0.5;

    //Material Values
    theView->ambiMat[0] = 0.135;
    theView->ambiMat[1] = 0.2225;
    theView->ambiMat[2] = 0.1575;
    theView->diffMat[0] = 0.54;
    theView->diffMat[1] = 0.89;
    theView->diffMat[2] = 0.63;
    theView->specMat[0] = 0.316228;
    theView->specMat[1] = 0.316228;
    theView->specMat[2] = 0.316228;
    theView->shine = (GLint)fabs(128.0*0.1);

    theView->updateView();
    updateSliders();
}


void MatlEditor::slotObsidian()
{
    //Light Values 
    theView->ambiLight[0] = 0;
    theView->ambiLight[1] = 0;
    theView->ambiLight[2] = 0;
    theView->diffLight[0] = 1;
    theView->diffLight[1] = 1;
    theView->diffLight[2] = 1;
    theView->specLight[0] = 0.5;
    theView->specLight[1] = 0.5;
    theView->specLight[2] = 0.5;

    //Material Values
    theView->ambiMat[0] = 0.05375;
    theView->ambiMat[1] = 0.05;
    theView->ambiMat[2] = 0.06625;
    theView->diffMat[0] = 0.18275;
    theView->diffMat[1] = 0.17;
    theView->diffMat[2] = 0.22525;
    theView->specMat[0] = 0.332741;
    theView->specMat[1] = 0.328634;
    theView->specMat[2] = 0.346435;
    theView->shine = (GLint)fabs(128.0*0.3);

    theView->updateView();
    updateSliders();
}


void MatlEditor::slotPearl()
{
    //Light Values 
    theView->ambiLight[0] = 0;
    theView->ambiLight[1] = 0;
    theView->ambiLight[2] = 0;
    theView->diffLight[0] = 1;
    theView->diffLight[1] = 1;
    theView->diffLight[2] = 1;
    theView->specLight[0] = 0.5;
    theView->specLight[1] = 0.5;
    theView->specLight[2] = 0.5;

    //Material Values
    theView->ambiMat[0] = 0.25;
    theView->ambiMat[1] = 0.20725;
    theView->ambiMat[2] = 0.20725;
    theView->diffMat[0] = 1.0;
    theView->diffMat[1] = 0.829;
    theView->diffMat[2] = 0.829;
    theView->specMat[0] = 0.299948;
    theView->specMat[1] = 0.296648;
    theView->specMat[2] = 0.296648;
    theView->shine = (GLint)fabs(128.0*0.088);

    theView->updateView();
    updateSliders();
}


void MatlEditor::slotChrome()
{
    //Light Values 
    theView->ambiLight[0] = 0;
    theView->ambiLight[1] = 0;
    theView->ambiLight[2] = 0;
    theView->diffLight[0] = 1;
    theView->diffLight[1] = 1;
    theView->diffLight[2] = 1;
    theView->specLight[0] = 0.5;
    theView->specLight[1] = 0.5;
    theView->specLight[2] = 0.5;

    //Material Values
    theView->ambiMat[0] = 0.25;
    theView->ambiMat[1] = 0.25;
    theView->ambiMat[2] = 0.25;
    theView->diffMat[0] = 0.4;
    theView->diffMat[1] = 0.4;
    theView->diffMat[2] = 0.4;
    theView->specMat[0] = 0.774597;
    theView->specMat[1] = 0.774597;
    theView->specMat[2] = 0.774597;
    theView->shine = (GLint)fabs(128.0*0.6);

    theView->updateView();
    updateSliders();
}



void MatlEditor::slotBlackPl()
{
    //Light Values 
    theView->ambiLight[0] = 0;
    theView->ambiLight[1] = 0;
    theView->ambiLight[2] = 0;
    theView->diffLight[0] = 1;
    theView->diffLight[1] = 1;
    theView->diffLight[2] = 1;
    theView->specLight[0] = 0.5;
    theView->specLight[1] = 0.5;
    theView->specLight[2] = 0.5;

    //Material Values
    theView->ambiMat[0] = 0.0;
    theView->ambiMat[1] = 0.0;
    theView->ambiMat[2] = 0.0;
    theView->diffMat[0] = 0.01;
    theView->diffMat[1] = 0.01;
    theView->diffMat[2] = 0.01;
    theView->specMat[0] = 0.5;
    theView->specMat[1] = 0.5;
    theView->specMat[2] = 0.5;
    theView->shine = (GLint)fabs(128.0*0.25);

    theView->updateView();
    updateSliders();
}


void MatlEditor::slotCyanPl()
{
    //Light Values 
    theView->ambiLight[0] = 0;
    theView->ambiLight[1] = 0;
    theView->ambiLight[2] = 0;
    theView->diffLight[0] = 1;
    theView->diffLight[1] = 1;
    theView->diffLight[2] = 1;
    theView->specLight[0] = 0.5;
    theView->specLight[1] = 0.5;
    theView->specLight[2] = 0.5;

    //Material Values
    theView->ambiMat[0] = 0.0;
    theView->ambiMat[1] = 0.1;
    theView->ambiMat[2] = 0.06;
    theView->diffMat[0] = 0.0;
    theView->diffMat[1] = 0.50980392;
    theView->diffMat[2] = 0.50980392;
    theView->specMat[0] = 0.50196078;
    theView->specMat[1] = 0.50196078;
    theView->specMat[2] = 0.50196078;
    theView->shine = (GLint)fabs(128.0*0.25);

    theView->updateView();
    updateSliders();
}


void MatlEditor::slotGreenPl()
{
    //Light Values 
    theView->ambiLight[0] = 0;
    theView->ambiLight[1] = 0;
    theView->ambiLight[2] = 0;
    theView->diffLight[0] = 1;
    theView->diffLight[1] = 1;
    theView->diffLight[2] = 1;
    theView->specLight[0] = 0.5;
    theView->specLight[1] = 0.5;
    theView->specLight[2] = 0.5;

    //Material Values
    theView->ambiMat[0] = 0.0;
    theView->ambiMat[1] = 0.0;
    theView->ambiMat[2] = 0.0;
    theView->diffMat[0] = 0.1;
    theView->diffMat[1] = 0.35;
    theView->diffMat[2] = 0.1;
    theView->specMat[0] = 0.45;
    theView->specMat[1] = 0.55;
    theView->specMat[2] = 0.45;
    theView->shine = (GLint)fabs(128.0*0.25);

    theView->updateView();
    updateSliders();
}


void MatlEditor::slotRedPl()
{
    //Light Values 
    theView->ambiLight[0] = 0;
    theView->ambiLight[1] = 0;
    theView->ambiLight[2] = 0;
    theView->diffLight[0] = 1;
    theView->diffLight[1] = 1;
    theView->diffLight[2] = 1;
    theView->specLight[0] = 0.5;
    theView->specLight[1] = 0.5;
    theView->specLight[2] = 0.5;

    //Material Values
    theView->ambiMat[0] = 0.0;
    theView->ambiMat[1] = 0.0;
    theView->ambiMat[2] = 0.0;
    theView->diffMat[0] = 0.5;
    theView->diffMat[1] = 0.0;
    theView->diffMat[2] = 0.0;
    theView->specMat[0] = 0.7;
    theView->specMat[1] = 0.6;
    theView->specMat[2] = 0.6;
    theView->shine = (GLint)fabs(128.0*0.25);

    theView->updateView();
    updateSliders();
}


void MatlEditor::slotWhitePl()
{
    //Light Values 
    theView->ambiLight[0] = 0;
    theView->ambiLight[1] = 0;
    theView->ambiLight[2] = 0;
    theView->diffLight[0] = 1;
    theView->diffLight[1] = 1;
    theView->diffLight[2] = 1;
    theView->specLight[0] = 0.5;
    theView->specLight[1] = 0.5;
    theView->specLight[2] = 0.5;

    //Material Values
    theView->ambiMat[0] = 0.0;
    theView->ambiMat[1] = 0.0;
    theView->ambiMat[2] = 0.0;
    theView->diffMat[0] = 0.55;
    theView->diffMat[1] = 0.55;
    theView->diffMat[2] = 0.55;
    theView->specMat[0] = 0.70;
    theView->specMat[1] = 0.70;
    theView->specMat[2] = 0.70;
    theView->shine = (GLint)fabs(128.0*0.25);

    theView->updateView();
    updateSliders();
}


void MatlEditor::slotYellowPl()
{
    //Light Values 
    theView->ambiLight[0] = 0;
    theView->ambiLight[1] = 0;
    theView->ambiLight[2] = 0;
    theView->diffLight[0] = 1;
    theView->diffLight[1] = 1;
    theView->diffLight[2] = 1;
    theView->specLight[0] = 0.5;
    theView->specLight[1] = 0.5;
    theView->specLight[2] = 0.5;

    //Material Values
    theView->ambiMat[0] = 0.0;
    theView->ambiMat[1] = 0.0;
    theView->ambiMat[2] = 0.0;
    theView->diffMat[0] = 0.5;
    theView->diffMat[1] = 0.5;
    theView->diffMat[2] = 0.0;
    theView->specMat[0] = 0.6;
    theView->specMat[1] = 0.6;
    theView->specMat[2] = 0.5;
    theView->shine = (GLint)fabs(128.0*0.25);

    theView->updateView();
    updateSliders();
}


void MatlEditor::slotBlackRu()
{
    //Light Values 
    theView->ambiLight[0] = 0;
    theView->ambiLight[1] = 0;
    theView->ambiLight[2] = 0;
    theView->diffLight[0] = 1;
    theView->diffLight[1] = 1;
    theView->diffLight[2] = 1;
    theView->specLight[0] = 0.5;
    theView->specLight[1] = 0.5;
    theView->specLight[2] = 0.5;

    //Material Values
    theView->ambiMat[0] = 0.02;
    theView->ambiMat[1] = 0.02;
    theView->ambiMat[2] = 0.02;
    theView->diffMat[0] = 0.01;
    theView->diffMat[1] = 0.01;
    theView->diffMat[2] = 0.01;
    theView->specMat[0] = 0.4;
    theView->specMat[1] = 0.4;
    theView->specMat[2] = 0.4;
    theView->shine = (GLint)fabs(128.0*0.078125);

    theView->updateView();
    updateSliders();
}


void MatlEditor::slotCyanRu()
{
    //Light Values 
    theView->ambiLight[0] = 0;
    theView->ambiLight[1] = 0;
    theView->ambiLight[2] = 0;
    theView->diffLight[0] = 1;
    theView->diffLight[1] = 1;
    theView->diffLight[2] = 1;
    theView->specLight[0] = 0.5;
    theView->specLight[1] = 0.5;
    theView->specLight[2] = 0.5;

    //Material Values
    theView->ambiMat[0] = 0.0;
    theView->ambiMat[1] = 0.05;
    theView->ambiMat[2] = 0.05;
    theView->diffMat[0] = 0.4;
    theView->diffMat[1] = 0.5;
    theView->diffMat[2] = 0.5;
    theView->specMat[0] = 0.04;
    theView->specMat[1] = 0.7;
    theView->specMat[2] = 0.7;
    theView->shine = (GLint)fabs(128.0*0.078125);

    theView->updateView();
    updateSliders();
}


void MatlEditor::slotGreenRu()
{
    //Light Values 
    theView->ambiLight[0] = 0;
    theView->ambiLight[1] = 0;
    theView->ambiLight[2] = 0;
    theView->diffLight[0] = 1;
    theView->diffLight[1] = 1;
    theView->diffLight[2] = 1;
    theView->specLight[0] = 0.5;
    theView->specLight[1] = 0.5;
    theView->specLight[2] = 0.5;

    //Material Values
    theView->ambiMat[0] = 0.0;
    theView->ambiMat[1] = 0.05;
    theView->ambiMat[2] = 0.0;
    theView->diffMat[0] = 0.4;
    theView->diffMat[1] = 0.5;
    theView->diffMat[2] = 0.4;
    theView->specMat[0] = 0.04;
    theView->specMat[1] = 0.7;
    theView->specMat[2] = 0.04;
    theView->shine = (GLint)fabs(128.0*0.078125);

    theView->updateView();
    updateSliders();
}


void MatlEditor::slotRedRu()
{
    //Light Values 
    theView->ambiLight[0] = 0;
    theView->ambiLight[1] = 0;
    theView->ambiLight[2] = 0;
    theView->diffLight[0] = 1;
    theView->diffLight[1] = 1;
    theView->diffLight[2] = 1;
    theView->specLight[0] = 0.5;
    theView->specLight[1] = 0.5;
    theView->specLight[2] = 0.5;

    //Material Values
    theView->ambiMat[0] = 0.05;
    theView->ambiMat[1] = 0.0;
    theView->ambiMat[2] = 0.0;
    theView->diffMat[0] = 0.7;
    theView->diffMat[1] = 0.4;
    theView->diffMat[2] = 0.4;
    theView->specMat[0] = 0.7;
    theView->specMat[1] = 0.04;
    theView->specMat[2] = 0.04;
    theView->shine = (GLint)fabs(128.0*0.078125);

    theView->updateView();
    updateSliders();
}


void MatlEditor::slotWhiteRu()
{
    //Light Values 
    theView->ambiLight[0] = 0;
    theView->ambiLight[1] = 0;
    theView->ambiLight[2] = 0;
    theView->diffLight[0] = 1;
    theView->diffLight[1] = 1;
    theView->diffLight[2] = 1;
    theView->specLight[0] = 0.5;
    theView->specLight[1] = 0.5;
    theView->specLight[2] = 0.5;

    //Material Values
    theView->ambiMat[0] = 0.05;
    theView->ambiMat[1] = 0.05;
    theView->ambiMat[2] = 0.05;
    theView->diffMat[0] = 0.5;
    theView->diffMat[1] = 0.5;
    theView->diffMat[2] = 0.5;
    theView->specMat[0] = 0.7;
    theView->specMat[1] = 0.7;
    theView->specMat[2] = 0.7;
    theView->shine = (GLint)fabs(128.0*0.078125);

    theView->updateView();
    updateSliders();
}


void MatlEditor::slotYellowRu()
{
    //Light Values 
    theView->ambiLight[0] = 0;
    theView->ambiLight[1] = 0;
    theView->ambiLight[2] = 0;
    theView->diffLight[0] = 1;
    theView->diffLight[1] = 1;
    theView->diffLight[2] = 1;
    theView->specLight[0] = 0.5;
    theView->specLight[1] = 0.5;
    theView->specLight[2] = 0.5;

    //Material Values
    theView->ambiMat[0] = 0.05;
    theView->ambiMat[1] = 0.05;
    theView->ambiMat[2] = 0.0;
    theView->diffMat[0] = 0.5;
    theView->diffMat[1] = 0.5;
    theView->diffMat[2] = 0.4;
    theView->specMat[0] = 0.7;
    theView->specMat[1] = 0.7;
    theView->specMat[2] = 0.04;
    theView->shine = (GLint)fabs(128.0*0.078125);

    theView->updateView();
    updateSliders();
}

#include <qapplication.h>
void MatlEditor::slotQuit()
{
    qApp->quit();
}
