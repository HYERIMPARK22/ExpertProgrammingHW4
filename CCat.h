#pragma once
#include "CPet.h"
#include <string>
#include <iostream>
using namespace std;

class CCat : public CPet
{
public:
	CCat();
	CCat(string strName, string strBreed, string soundFileName, int MaintenanceLevel);
	~CCat();
	int getMaintenanceLevel() const;
	void setMaintenanceLevel(int maintenanceLevel);

	virtual void print() const;
	virtual void MakeSound() const;
	virtual void ShowHappyFace() const;
private:
	int m_nMaintenanceLevel;
};



