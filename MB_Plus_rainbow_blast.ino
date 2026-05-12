#include <BLEDevice.h>
#include <BLEUtils.h>
#include <BLEAdvertising.h>

// Data String 1: E100E90C000F0F5D465BF005323748B0 (16 bytes)
uint8_t data1[] = {
  0xE1, 0x00, 0xE9, 0x0C, 0x00, 0x0F, 0x0F, 0x5D, 
  0x46, 0x5B, 0xF0, 0x05, 0x32, 0x37, 0x48, 0xB0
};

// Data String 2: cc03000000 (5 bytes)
uint8_t data2[] = {0xCC, 0x03, 0x00, 0x00, 0x00};

void setup() {
  Serial.begin(115200);

  BLEDevice::init("ESP32_Combined");
  BLEAdvertising *pAdvertising = BLEDevice::getAdvertising();

  // Total size: 2 (ID) + 16 (Data1) + 5 (Data2) = 23 bytes
  uint8_t mfgPayload[23];
  
  // Company ID: 0x0183 (Little Endian: 0x83 0x01)
  mfgPayload[0] = 0x83;
  mfgPayload[1] = 0x01;
  
  // Copy Data 1 starting at index 2
  memcpy(&mfgPayload[2], data1, sizeof(data1));
  
  // Copy Data 2 starting at index 18 (2 + 16)
  memcpy(&mfgPayload[18], data2, sizeof(data2));

  BLEAdvertisementData oAdvertisementData;
  oAdvertisementData.setFlags(0x06); 
  
  // Convert full 23-byte buffer to Arduino String
  oAdvertisementData.setManufacturerData(String((char*)mfgPayload, 23));
  
  pAdvertising->setAdvertisementData(oAdvertisementData);
  pAdvertising->start();
  
  Serial.println("Advertising Combined Data...");
}

void loop() {
  delay(2000);
}