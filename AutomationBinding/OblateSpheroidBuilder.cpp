#include "OblateSpheroidBuilder.h"
#include "AutomationAPI_CADObject.h"
#include "..\AppLibrary\Journaling_BlockBuilder.h"
#include <exception>

namespace AutomationAPI
{
	class OblateSpheroidBuilderImpl
	{
	public:

		virtual ~OblateSpheroidBuilderImpl();
		OblateSpheroidBuilderImpl() = delete;

		OblateSpheroidBuilderImpl(int guid);
		int m_guid;

	};
}

// ShpereBuiler constructor which can create 

AutomationAPI::OblateSpheroidBuilder::OblateSpheroidBuilder(int guid)
{
	m_oblateSpheroidBuilderImpl = new AutomationAPI::OblateSpheroidBuilderImpl(guid);
}

AutomationAPI::OblateSpheroidBuilder::~OblateSpheroidBuilder()
{
	delete m_oblateSpheroidBuilderImpl;
}

AutomationAPI::OblateSpheroidBuilderImpl::OblateSpheroidBuilderImpl(int guid)
{
	m_guid = guid;
}

AutomationAPI::OblateSpheroidBuilderImpl::~OblateSpheroidBuilderImpl()
{

}


AutomationAPI::OblateSpheroidBuilder* AutomationAPI::OblateSpheroidBuilder::CreateOblateSpheroidBuilder(int guid)
{
	// We should check the guid being passed in, as this is public
	// but that is for another day

	return new AutomationAPI::OblateSpheroidBuilder(guid);
}

AutomationAPI::CADObject* AutomationAPI::OblateSpheroidBuilder::Commit()
{
	return nullptr;
}

void AutomationAPI::OblateSpheroidBuilder::SetType(AutomationAPI::OblateSpheroidBuilder::OblateSpheroidBuilderTypes type)
{
	

}

AutomationAPI::OblateSpheroidBuilder::OblateSpheroidBuilderTypes AutomationAPI::OblateSpheroidBuilder::GetType()
{
	
}

void AutomationAPI::OblateSpheroidBuilder::SetRadius(int h)
{
}

int AutomationAPI::OblateSpheroidBuilder::GetRadius()
{
	return 0;
}


void AutomationAPI::OblateSpheroidBuilder::SetCentre(int x, int y, int z)
{
}

void AutomationAPI::OblateSpheroidBuilder::GetCentre()
{
}
