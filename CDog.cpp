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
	cout << "멍멍" << endl;
	PlaySound(TEXT(m_soundFileName.c_str()), NULL, SND_ASYNC);
}

void CDog::ShowHappyFace() const
{
	cout << "강아지 스마일" << endl;

	Mat image;
	image = imread(DogNameAry[dogCnt]);
	namedWindow(DogNameAry[dogCnt], WINDOW_AUTOSIZE);	//창 만들고
	imshow(DogNameAry[dogCnt], image);		// 그 창에 show
	if(dogCnt<DOGNUM)	dogCnt++;
	else dogCnt = 0;
	waitKey(3000);
}



