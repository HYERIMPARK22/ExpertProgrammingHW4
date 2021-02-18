#pragma once
#include <iostream>
#include <string>
using namespace std;

class CPet
{
public:
	CPet();
	CPet(string strName, string strBreed,	string soundFileName);
	~CPet();
	string getName() const;
	string getBreed() const;
	string getSoundFileName() const;
	void setName(string name);
	void setBreed(string breed);
	void setSoundFileName(string SoundFileName);

	virtual void print() const;
	virtual void MakeSound() const;
	virtual void ShowHappyFace() const;
	void ShowHappiness() const;
protected:
	string m_strName;
	string m_strBreed;
	string m_soundFileName;
};


