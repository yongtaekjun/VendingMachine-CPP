#pragma once

#include "Item.h"

using namespace System;

ref class Order
{
public:
    String^ time;
    Item^ item;
    Order(String^ _time, Item^ _item)
    {
        this->time = _time;
        this->item = _item;
    }

};

