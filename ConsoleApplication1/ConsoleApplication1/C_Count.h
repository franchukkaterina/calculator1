#pragma once
#include "C_Calculate.h"
namespace stv
{
    namespace cost
    {
        class C_Count : public C_Calculate
        {
        public:
            C_Count() : distance(0.0), fuel_consumption(0.0), fuel_cost(0.0) {};
            C_Count(float distance, float fuel_consumption, float fuel_cost) : distance(distance), fuel_consumption(fuel_consumption), fuel_cost(fuel_cost) {};
            virtual float calculate() override
            {
                return (distance * fuel_consumption * fuel_cost) / 100;
            }

        private:
            float distance;
            float fuel_consumption;
            float fuel_cost;
        };
    }
}