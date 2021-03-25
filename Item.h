#pragma once

using namespace System;

ref class Item
{
public:
    String^ code;
    String^ title = "";
    double price = 0.0;
    Item(String^ code, String^ title, double price)
    {
        this->code = code;
        this->title = title;
        this->price = price;
    }
    Item(Item^ _item)
    {
        Item( _item->code, _item->title, _item->price );
    }

};

