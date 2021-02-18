#include "CCat.h"
#include <opencv2/core/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <Windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")
#define CATNUM 2

using namespace cv;
const char *CatNameAry[CATNUM] = { "Cat1.jpg", "Cat2.jpg" };
int catCnt = 0;


CCat::CCat() : CPet(), m_nMaintenanceLevel(0)
{
}
CCat::CCat(string strName, string strBreed, string soundFileName, int MaintenanceLevel) 
	: CPet(strName, strBreed, soundFileName), m_nMaintenanceLevel(MaintenanceLevel)
{

}
CCat::~CCat()
{
}
int CCat::getMaintenanceLevel() const
{
	return m_nMaintenanceLevel;
}

void CCat::setMaintenanceLevel(int maintenanceLevel)
{
	m_nMaintenanceLevel = maintenanceLevel;
}

void CCat::print() const
{
	cout << "Cat Name: " << m_strName << endl;
	cout << "Cat Breed: " << m_strBreed << endl;
	cout << "Cat maintenanceLevel: " << m_nMaintenanceLevel << endl;
}

void CCat::MakeSound() const
{
	cout << "야옹" << endl;
	PlaySound(TEXT(m_soundFileName.c_str()), NULL, SND_ASYNC);
}

void CCat::ShowHappyFace() const
{
	cout << "고양이 미소" << endl;

	Mat image;
	image = imread(CatNameAry[catCnt]);
	namedWindow(CatNameAry[catCnt], WINDOW_AUTOSIZE);	//창 만들고
	imshow(CatNameAry[catCnt], image);		// 그 창에 show
	if (catCnt < CATNUM)	catCnt++;
	else catCnt = 0;
	waitKey(4000);
}


