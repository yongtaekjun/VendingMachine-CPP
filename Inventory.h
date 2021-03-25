#pragma once

using namespace System;


ref class Inventory
{
public:
    String^ code;
    Int16 amount = 0;
    Inventory(String^ _code, Int16 _amount)
    {
        this->code = _code;
        this->amount = _amount;
    }

};

