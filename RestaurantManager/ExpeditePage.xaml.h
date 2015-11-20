//
// ExpeditePage.xaml.h
// Declaration of the ExpeditePage class
//

#pragma once

#include "ExpeditePage.g.h"
#include "DataManager.h"

namespace RestaurantManager
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class ExpeditePage sealed
	{
	public:
		ExpeditePage();
	private:
		void ClearOrders_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void appBarHomeButton_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
