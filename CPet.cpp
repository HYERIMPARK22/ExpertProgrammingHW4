#include "CPet.h"
#include <cstdlib>		//for exit


CPet::CPet() 
	: m_strName("default name"), m_strBreed("default breed"), m_soundFileName("default sound file name")
{
}

CPet::CPet(string strName, string strBreed, string soundFileName) 
	: m_strName(strName), m_strBreed(strBreed), m_soundFileName(soundFileName)
{

}

CPet::~CPet()
{
}

string CPet::getName() const
{
	return m_strName;
}
string CPet::getBreed() const
{
	return m_strBreed;
}
string CPet::getSoundFileName() const
{
	return m_soundFileName;
}
void CPet::setName(string name)
{
	m_strName = name;
}
void CPet::setBreed(string breed)
{
	m_strBreed = breed;
}

void CPet::setSoundFileName(string SoundFileName)
{
	m_soundFileName = SoundFileName;

}

void CPet::print() const
{
	cout << "\nERROR: Can't call CPet::print() function" << endl;
	exit(1);
}

void CPet::MakeSound() const
{
	cout << "\nERROR: Can't call CPet::MakeSound() function" << endl;
	exit(1);
}

void CPet::ShowHappyFace() const
{
	cout << "\nERROR: Can't call CPet::ShowHappyFace() function" << endl;
	exit(1);
}

void CPet::ShowHappiness() const
{
	MakeSound();
	ShowHappyFace();
}