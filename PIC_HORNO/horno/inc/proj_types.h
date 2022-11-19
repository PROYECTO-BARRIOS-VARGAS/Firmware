#ifndef PROJ_TYPES
#define PROJ_TYPES

#include <stdbool.h>
#include <stdint.h>

#define BIT(bit_num) (1UL << bit_num);

typedef uint8_t IPG_num;
typedef uint8_t phy_addr_t;
typedef uint8_t command_t;

typedef enum
{
    NO_SIGNAL,
    OK_SIGNAL
}signal_status;

typedef enum 
{
    SUCCESS,
    FAILED
} operation_status;

typedef enum 
{
    BURN_IN_OFF,
    BURN_IN_ON
} burn_in_status;

typedef struct 
{
    uint8_t ipg_num             : 4;
    uint8_t stimulation_ok      : 1;
    uint8_t communication_ok    : 1;
    uint8_t burn_in_status      : 2;
} IPG_status;

#endif // guard