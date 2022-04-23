#pragma once


#pragma once
#include "AutomationBindingExports.h"
#include "AutomationAPI_IBuilder.h"

namespace AutomationAPI
{
	class CADObject;
	class OblateSpheroidBuilder;
	class OblateSpheroidBuilderImpl;
	/// <summary>
	/// OblateSpheroidBuilder comment
	/// </summary>
	class AUTOMATIONBINDING_API OblateSpheroidBuilder : public IBuilder
	{
	public:
		enum OblateSpheroidBuilderTypes
		{
			TypesCentreAndRadiusLength, /** Represents the Oblate Spheroid created by providing Centre and Radius Length. */
			TypesDiameterOrigins,  /** Represents the Oblate Spheroid created by providing Diameter Coordinates. */
		};

		/** set type of builder class
		Input: ShpereBuilderTypes 
		**/ 
		void SetType(OblateSpheroidBuilderTypes type);
		OblateSpheroidBuilderTypes GetType();


		/*
		* set radius of Oblate Spheroid *
		* Input: takes h as input *
		*/ 
		void SetRadius(int h);

		/*
		* get radius of Oblate Spheroid *
		* returns integer output *
		*/ 
		int GetRadius();

		/*
		*  set the coordinates of centre *
		* Input: x, y and z. 3d coordinates *
		*/ 
		void SetCentre(int x, int y, int z);

		/*
		* get centre of Oblate Spheroid *
		* Input: takes centre as input 
		*/
		void GetCentre();

		/**  commit changes **/
		CADObject* Commit() override;

		/*
		* Internal Usage only.
		*/
		static OblateSpheroidBuilder* CreateOblateSpheroidBuilder(int guid);
		virtual ~OblateSpheroidBuilder();
		OblateSpheroidBuilder() = delete;

	private:

		OblateSpheroidBuilder(int guid);
		OblateSpheroidBuilderImpl* m_oblateSpheroidBuilderImpl;

	};
}


