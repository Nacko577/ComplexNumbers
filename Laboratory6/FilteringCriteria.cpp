#include "FilteringCriteria.h"
class FilterPrice:public FilteringCriteria {
	float price;

	public:
		DynamicArray filter(DynamicArray& arr) {
			DynamicArray result;
			for (int i = 0; i < arr.getLength(); i++)
			{
				Offer a = arr.get(i);
				if (a.getPrice() <= price)
					result.append(a);
			}
			return result;
		}
};

class FilterType:public FilteringCriteria {
	OfferType type;

public:
	DynamicArray filter(DynamicArray& arr) {
		DynamicArray result;
		for (int i = 0; i < arr.getLength(); i++)
		{
			Offer a = arr.get(i);
			if (a.getType() == type)
				result.append(a);
		}
		return result;
	}
};

class FilterTypePrice :public FilteringCriteria {
	FilterPrice fp;
	FilterType ft;
		DynamicArray filter(DynamicArray& arr) {
			DynamicArray result = fp.filter(arr);
			result = ft.filter(result);
			return result;
	}
};