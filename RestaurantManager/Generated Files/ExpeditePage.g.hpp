﻿//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------
#include "pch.h"

#if defined _DEBUG && !defined DISABLE_XAML_GENERATED_BINDING_DEBUG_OUTPUT
extern "C" __declspec(dllimport) int __stdcall IsDebuggerPresent();
#endif

#include "ExpeditePage.xaml.h"

void ::RestaurantManager::ExpeditePage::InitializeComponent()
{
    if (_contentLoaded)
    {
        return;
    }
    _contentLoaded = true;
    ::Windows::Foundation::Uri^ resourceLocator = ref new ::Windows::Foundation::Uri(L"ms-appx:///ExpeditePage.xaml");
    ::Windows::UI::Xaml::Application::LoadComponent(this, resourceLocator, ::Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation::Application);
}

void ::RestaurantManager::ExpeditePage::Connect(int __connectionId, ::Platform::Object^ __target)
{
    switch (__connectionId)
    {
        case 1:
            {
                this->ClearOrders = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->ClearOrders))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::RestaurantManager::ExpeditePage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&ExpeditePage::ClearOrders_Click);
            }
            break;
        case 2:
            {
                this->gridView = safe_cast<::Windows::UI::Xaml::Controls::GridView^>(__target);
            }
            break;
        case 3:
            {
                this->appBar = safe_cast<::Windows::UI::Xaml::Controls::AppBar^>(__target);
            }
            break;
        case 4:
            {
                this->appBarHomeButton = safe_cast<::Windows::UI::Xaml::Controls::AppBarButton^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::AppBarButton^>(this->appBarHomeButton))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::RestaurantManager::ExpeditePage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&ExpeditePage::appBarHomeButton_Click);
            }
            break;
    }
    _contentLoaded = true;
}

::Windows::UI::Xaml::Markup::IComponentConnector^ ::RestaurantManager::ExpeditePage::GetBindingConnector(int __connectionId, ::Platform::Object^ __target)
{
    __connectionId;         // unreferenced
    __target;               // unreferenced
    return nullptr;
}

