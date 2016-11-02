#ifndef _SENSER_H_
#define _SENSER_H_

#include "KnowledgePool.h"

class Senser
{
public:
	Senser(){}
	virtual ~Senser(){}

	virtual void execute(){}

	void SetSenserMode(int interval, int count)
	{
		m_interval = interval;
		m_count = count;
	}

	int m_interval;	//ʱ����
	int m_count;	//ִ�д���
};

class SenserWorld:public Senser
{
public:
	SenserWorld(){}
	virtual ~SenserWorld(){}

	virtual void execute()
	{
		return ;
	}

	void GetNearestRole(Role* role)
	{

	}


};

class SenserManager
{
public:
	SenserManager(){}
	virtual ~SenserManager(){}

	void RegisteSenser(Senser*)
	{}

	void UnRegistSenser(Senser*)
	{}

	void Update()
	{}

	std::vector<Senser*> m_SManager;
};

#endif