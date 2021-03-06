﻿//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"
#include "ExpeditePage.xaml.h"
#include "OrderPage.xaml.h"

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

// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409
	
MainPage::MainPage()
{
	InitializeComponent();
}


void RestaurantManager::MainPage::ViewOrders_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	Windows::UI::Xaml::Interop::TypeName page = RestaurantManager::ExpeditePage::typeid;
	this->Frame->Navigate(page);
}


void RestaurantManager::MainPage::SubmitOrder_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	Windows::UI::Xaml::Interop::TypeName page = RestaurantManager::OrderPage::typeid;
	this->Frame->Navigate(page);
}
