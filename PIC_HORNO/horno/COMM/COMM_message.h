#ifndef COMM_MSG
#define COMM_MSG

#include "proj_types.h"

typedef struct
{
    phy_addr_t phy_addr;
    command_t  command;
} CMD_message_data;

typedef union
{
    CMD_message_data    bits;
    uint8_t             raw[2];
}CMD_message;

typedef struct 
{
    IPG_status status[IPG_QUANTITY];
} STATUS_message_data;

typedef union
{
    STATUS_message_data bits;
    uint8_t             raw[IPG_QUANTITY];
}STATUS_message;

#endif // guard