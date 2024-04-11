// entity.cpp

#include "entity.h"

int Entity::_nextGuid = 0;

Entity::Entity()
{
    _guid = _nextGuid;
	_nextGuid++;

    _parent = nullptr;

    //std::cout << _parent->GetUid() << std::endl;

    position = Vector3{0.0f, 0.0f, 0.0f};
    scale = Vector3{1.0f, 1.0f, 1.0f};
}

Entity::~Entity()
{
    
}

void Entity::addChild(Entity* child)
{
	if(child->_parent != nullptr) 
    {
        std::cout << "ID: "<< child->GetUid() << " already has parent"  << std::endl;
		//child->_parent->removeChild(child);
	}
	child->_parent = this;
	this->_children.push_back(child);
}

void Entity::removeChild(Entity* child)
{
	std::vector< Entity* >::iterator it = _children.begin();
	while (it != _children.end()) 
    {
		if ((*it)->_guid == child->_guid) 
        {
			child->_parent = nullptr;
			it = _children.erase(it);
		} 
        else 
            {
			    ++it;
		    }
	}
}
