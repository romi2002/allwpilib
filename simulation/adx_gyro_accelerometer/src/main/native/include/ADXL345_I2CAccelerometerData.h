/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include "ThreeAxisAccelerometerData.h"

namespace hal {
class ADXL345_I2CData : public ThreeAxisAccelerometerData {
 public:
  explicit ADXL345_I2CData(int port);
  virtual ~ADXL345_I2CData();

  void HandleWrite(const uint8_t* buffer, uint32_t count);
  void HandleRead(uint8_t* buffer, uint32_t count);

 private:
  int m_lastWriteAddress;

  static const double LSB;
};
}  // namespace hal
