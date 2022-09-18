#include "serial_app.h"
#include "Arduino.h"


const uart_drv_interface_t RS485 = {
    .Initialize = &RS485_Initialize,
    .Deinitialize = &RS485_Deinitialize,
    .Read = &RS485_Read,
    .Write = &RS485_Write,
    .IsRxReady = &RS485_IsRxReady,
    .IsTxReady = &RS485_IsTxReady,
    .IsTxDone = &RS485_IsTxDone,
    .TransmitEnable = &RS485_TransmitEnable,
    .TransmitDisable = &RS485_TransmitDisable,
    .AutoBaudSet = NULL,
    .AutoBaudQuery = NULL,
    .BRGCountSet = NULL,
    .BRGCountGet = NULL,
    .BaudRateSet = NULL,
    .BaudRateGet = NULL,
    .AutoBaudEventEnableGet = NULL,
    .ErrorGet = &RS485_ErrorGet,
    .TxCompleteCallbackRegister = NULL,
    .RxCompleteCallbackRegister = NULL,
    .TxCollisionCallbackRegister = NULL,
    .FramingErrorCallbackRegister = &RS485_FramingErrorCallbackRegister,
    .OverrunErrorCallbackRegister = &RS485_OverrunErrorCallbackRegister,
    .ParityErrorCallbackRegister = &RS485_ParityErrorCallbackRegister,
    .EventCallbackRegister = NULL,
};

Serial485(int bdrt): baudrate(bdrt) {}

void Begin()
{
  Serial.begin(115200);
}

void Write(char buffer[], int size)
{
  for ( int byte_num = 0; byte_num < size; byte_num++)
  {
    Serial.write(buffer[byte_num]);
    delay(BYTE_SEND_DELAY);
  }
  FlushInternalReadBuffer();
}

void WritePacket(char * buffer)
{
  Write(buffer, PACKET_SIZE);
}
void WriteACK()
{
  Write(ACK, ACK_NACK_LEN);
}
void WriteNACK()
{
  Write(NACK, ACK_NACK_LEN);
}

void Read(char * buffer, int size)
{
  Serial.readBytes(buffer, size);
  delay(IO_SWITCH_DELAY);
  FlushInternalReadBuffer();
}

void ReadBlocking(char * buffer, int size)
{
  while(Serial.available()< size);
  Read(buffer, size);
}

void ReadPacket(char * buffer)
{
  Read(buffer, PACKET_SIZE);
}

void ReadPacketBlocking(char * buffer)
{
  ReadBlocking(buffer, PACKET_SIZE);
}

/////////////////////////////////////////////
// PRIVATE
void FlushInternalReadBuffer()
{
  while(Serial.read() != -1);
}
