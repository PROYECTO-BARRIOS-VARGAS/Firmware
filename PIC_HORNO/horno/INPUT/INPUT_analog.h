#ifndef INPUT_ANALOG
#define INPUT_ANALOG

typedef int temperature_t;
typedef int voltage_t;

temperature_t INPUT_get_temperature();
voltage_t INPUT_get_supply_voltage();

#endif // guard
