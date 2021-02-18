#pragma once
#include "CPet.h"
#include <string>
#include <iostream>
using namespace std;

class CDog : public CPet
{
public:
	CDog();
	CDog(string strName, string strBreed, string soundFileName, int Active);
	~CDog();
	int getActive() const;
	void setActive(int Active);

	virtual void print() const;
	virtual void MakeSound() const;
	virtual void ShowHappyFace() const;
private:
	int m_nActive;
};

