#include "CDog.h"
#include <opencv2/core/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <Windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")
#define DOGNUM 3
using namespace cv;
const char *DogNameAry[DOGNUM] = { "Dog1.jpg", "Dog2.jpg", "Dog3.jpg" };
int dogCnt = 0;

CDog::CDog() : CPet(), m_nActive(0)
{
}

CDog::CDog(string strName, string strBreed, string soundFileName, int Active) 
	: CPet(strName, strBreed, soundFileName), m_nActive(Active)
{

}
CDog::~CDog()
{
}
int CDog::getActive() const
{
	return m_nActive;
}

void CDog::setActive(int Active)
{
	m_nActive = Active;
}

void CDog::print() const
{
	cout << "Dog Name: " << m_strName << endl;
	cout << "Dog Breed: " << m_strBreed << endl;
	cout << "Dog Active: " << m_nActive << endl;
}

void CDog::MakeSound() const
{
	cout << "�۸�" << endl;
	PlaySound(TEXT(m_soundFileName.c_str()), NULL, SND_ASYNC);
}

void CDog::ShowHappyFace() const
{
	cout << "������ ������" << endl;

	Mat image;
	image = imread(DogNameAry[dogCnt]);
	namedWindow(DogNameAry[dogCnt], WINDOW_AUTOSIZE);	//â �����
	imshow(DogNameAry[dogCnt], image);		// �� â�� show
	if(dogCnt<DOGNUM)	dogCnt++;
	else dogCnt = 0;
	waitKey(3000);
}



