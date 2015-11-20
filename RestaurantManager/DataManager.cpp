#include "pch.h"
#include "DataManager.h"


RestaurantManager::DataManager::DataManager()
{
	_orderItems = ref new Platform::Collections::Vector<Platform::Object^>();
	_orderItems->Clear();
	/*_orderItems->Append("Steak, Chicken Peas");
	_orderItems->Append("Rice, Chicken");
	_orderItems->Append("Hummus, Pita");*/

	_menuItems = ref new Platform::Collections::Vector<Platform::Object^>();
	_menuItems->Append("Steak");
	_menuItems->Append("Chicken");
	_menuItems->Append("Peas");
	_menuItems->Append("Rice");
	_menuItems->Append("Hummus");
	_menuItems->Append("Pita");

	_currentlySelectedMenuItem = ref new Platform::Collections::Vector<Platform::Object^>();
	_currentlySelectedMenuItem->Clear();

	//test set property works
	/*items->Append("PITA");
	items->Append("CHICKEN");
	_currentlySelectedMenuItem = items;*/
}
