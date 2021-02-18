#include <opencv2/core/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>
#include <Windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")
#include "CPet.h"
#include "CDog.h"
#include "CCat.h"
#define NUM 5
using namespace cv;
using namespace std;

void initAry();
void printAry();
CDog *myDog1, *myDog2, *myDog3;
CCat *myCat1, *myCat2;
CPet *myPet1, *myPet2, *myPet3, *myPet4, *myPet5;
CPet 	*myPetAry[NUM];


int main()
{
	initAry();
	printAry();

	return 0;
}

void initAry()
{
	myDog1 = new CDog("First Dog", "Bichon Frise","Dog1.wav", 7);
	myDog2 = new CDog("Second Dog","Poodle", "Dog2.wav",10);
	myDog3 = new CDog("Third Dog", "Pomeranian", "Dog3.wav",8);
	myCat1 = new CCat("First Cat", "Persian","Cat1.wav", 5);
	myCat2 = new CCat("Second Cat","Scottish Fold", "Cat2.wav", 3);
	myPet1 = myDog1;
	myPet2 = myDog2;
	myPet3 = myDog3;
	myPet4 = myCat1;
	myPet5 = myCat2;
	myPetAry[0] = myPet1;
	myPetAry[1] = myPet2;
	myPetAry[2] = myPet3;
	myPetAry[3] = myPet4;
	myPetAry[4] = myPet5;

}

void printAry()
{
	for (int i = 0; i < NUM; i++)
	{
		myPetAry[i]->ShowHappiness();
	}
}

