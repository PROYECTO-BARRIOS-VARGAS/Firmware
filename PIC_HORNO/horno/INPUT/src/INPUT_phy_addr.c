#include "INPUT_phy_addr.h"

// PRIVATE VAR

phy_addr_t device_phy_addr;

// PRIVATE DECLARATIONS
static phy_addr_t get_phy_addr_input();
static void set_phy_addr_value(phy_addr_t addr);
static phy_addr_t get_phy_addr_value();

// PUBLIC
phy_addr_t INPUT_get_phy_addr()
{
    static bool first_time = true;
    phy_addr_t addr;
    if(first_time)
    {
        addr = get_phy_addr_input();
        set_phy_addr_value(addr);
        first_time = false;
    }
    else
    {
        addr = get_phy_addr_value();
    }
    return addr;
}

// PRIVATE DEFINITIONS
static phy_addr_t get_phy_addr_input()
{
    phy_addr_t addr = 0;
    addr = addr | (PHY_ADDR_0_GetValue() << 0)
                | (PHY_ADDR_1_GetValue() << 1)
                | (PHY_ADDR_2_GetValue() << 2)
                | (PHY_ADDR_3_GetValue() << 3)
                | (PHY_ADDR_4_GetValue() << 4);
    return addr;
}

static void set_phy_addr_value(phy_addr_t addr)
{
    device_phy_addr = addr;
}

static phy_addr_t get_phy_addr_value()
{
    return device_phy_addr;
}
