#ifndef SER_APP
#define SER_APP

// Characteristics
// Packets 
#define PACKET_HEADER_SIZE  2
#define PACKET_DATA_SIZE   6
#define PACKET_SIZE PACKET_HEADER_SIZE + PACKET_DATA_SIZE
#define ACK_NACK_LEN  1
#define ACK_VALUE     "Y"
#define NACK_VALUE    "N"

// Timing
#define BYTE_SEND_DELAY 10 // ms
#define IO_SWITCH_DELAY 5 // ms

void Begin();

void Write(char * buffer, int size);
void WritePacket(char * buffer);
void WriteACK();
void WriteNACK();

void Read(char * buffer, int size);
void ReadBlocking(char * buffer, int size);  
void ReadPacket(char * buffer);
void ReadPacketBlocking(char * buffer);

void FlushInternalReadBuffer();

int baudrate;
const char ACK[ACK_NACK_LEN] = ACK_VALUE;
const char NACK[ACK_NACK_LEN] = NACK_VALUE;


#endif
