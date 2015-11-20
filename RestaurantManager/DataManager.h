#pragma once

namespace RestaurantManager
{
	[Windows::UI::Xaml::Data::Bindable]
	public ref class DataManager sealed
	{
	private:
		Platform::Collections::Vector<Platform::Object^> ^_orderItems;
		Platform::Collections::Vector<Platform::Object^> ^_menuItems;
		Platform::Collections::Vector<Platform::Object^> ^_currentlySelectedMenuItem;
	public:
		DataManager();
	
		property Windows::Foundation::Collections::IObservableVector<Platform::Object^> ^OrderItems
		{
			Windows::Foundation::Collections::IObservableVector<Platform::Object^> ^get()
			{
				return _orderItems;
			}
			void set(Windows::Foundation::Collections::IObservableVector<Platform::Object^> ^arg)
			{
				for (Platform::Object ^i : arg)
					_orderItems->Append(i);
			}
		}
		
		property Windows::Foundation::Collections::IObservableVector<Platform::Object^> ^MenuItems
		{
			Windows::Foundation::Collections::IObservableVector<Platform::Object^> ^get()
			{
				return _menuItems;
			}
			void set(Windows::Foundation::Collections::IObservableVector<Platform::Object^> ^arg)
			{
				for (Platform::Object ^i : arg)
					_menuItems->Append(i);
			}
		}

		property Windows::Foundation::Collections::IObservableVector<Platform::Object^> ^CurrentlySelectedMenuItem
		{
			Windows::Foundation::Collections::IObservableVector<Platform::Object^> ^get()
			{
				return _currentlySelectedMenuItem;
			}
			void set(Windows::Foundation::Collections::IObservableVector<Platform::Object^> ^arg)
			{
				for (Platform::Object ^i : arg)
					_currentlySelectedMenuItem->Append(i);
			}
		}
	};
}

