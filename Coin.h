#pragma once

using namespace System;

ref class Coin
{
public:
    String^ title;
    double  value;
    Coin(String^ _title, double _value)
    {
        this->title = _title;
        this->value = _value;
    }

};
