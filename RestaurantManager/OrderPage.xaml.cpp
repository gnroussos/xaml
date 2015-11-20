//
// OrderPage.xaml.cpp
// Implementation of the OrderPage class
//

#include "pch.h"
#include "OrderPage.xaml.h"
#include "MainPage.xaml.h"

using namespace RestaurantManager;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=234238
//DataManager^ OrderPage::Orders = nullptr;

OrderPage::OrderPage()
{
	InitializeComponent();
//	Orders = ref new DataManager();
	listView1->DataContext = App::Orders;
	listView2->DataContext = App::Orders;
}


void RestaurantManager::OrderPage::appBarHomeButton_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	Windows::UI::Xaml::Interop::TypeName page = RestaurantManager::MainPage::typeid;
	this->Frame->Navigate(page);
}


void RestaurantManager::OrderPage::textAddOrder_Tapped(Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
{
	auto selected = listView1->SelectedItem;

	App::Orders->CurrentlySelectedMenuItem->Append(selected);
}


void RestaurantManager::OrderPage::textSubmitOrder_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	App::Orders->OrderItems = App::Orders->CurrentlySelectedMenuItem;
	
}
