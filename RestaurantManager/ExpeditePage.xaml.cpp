//
// ExpeditePage.xaml.cpp
// Implementation of the ExpeditePage class
//

#include "pch.h"
#include "ExpeditePage.xaml.h"
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

ExpeditePage::ExpeditePage()
{
	InitializeComponent();
	gridView->DataContext = App::Orders;
}


void RestaurantManager::ExpeditePage::ClearOrders_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	App::Orders->OrderItems->Clear();
}


void RestaurantManager::ExpeditePage::appBarHomeButton_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	Windows::UI::Xaml::Interop::TypeName page = RestaurantManager::MainPage::typeid;
	this->Frame->Navigate(page);
}
