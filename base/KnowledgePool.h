#ifndef _KNOWLEDGE_POOL_H_
#define _KNOWLEDGE_POOL_H_

#include "Role.h"
#include <map>
#include <vector>

struct RoleInfo
{
	Role * role;		//角色
	int roleType;		//角色类型
// 	int scope;			//范围
// 	int power;			//力量
// 	int health;			//生命
};


//存储
class KnowledgePool
{
public:
	KnowledgePool(){}
	virtual ~KnowledgePool(){}

	static KnowledgePool* GetInstance()
	{
		if (!s_KnowledgePool)
			s_KnowledgePool = new KnowledgePool;
		return s_KnowledgePool;
	}

	static KnowledgePool* s_KnowledgePool;

	std::vector<RoleInfo*> m_RoleInfoVec;
	std::map<Role*, std::vector<Role*>> m_RoleInScope;
};


#endif // !_KNOWLEDGE_POOL_H_
