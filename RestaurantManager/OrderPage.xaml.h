//
// OrderPage.xaml.h
// Declaration of the OrderPage class
//

#pragma once

#include "OrderPage.g.h"

namespace RestaurantManager
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class OrderPage sealed
	{
	public:
		OrderPage();
	
	private:
		void appBarHomeButton_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void textAddOrder_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e);
//		static DataManager^ Orders;
		void textSubmitOrder_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
