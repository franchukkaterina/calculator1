#pragma once
#include "C_Calculate.h"
namespace stv
{
    namespace consumption
    {
        class C_Count : public C_Calculate
        {
        public:
            C_Count() : distance(0.0), quantity_fuel(0.0) {};
            C_Count(float distance, float quantity_fuel) : distance(distance), quantity_fuel(quantity_fuel) {};
            virtual float calculate() override
            {
                return (quantity_fuel / distance) * 100;
            }

        private:
            float distance;
            float quantity_fuel;
        };
    }
}