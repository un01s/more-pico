#pragma once

#include <cstdint>

namespace LedOps {

uint8_t ledNum = 0;

uint8_t ledType = ws2812;

void initialize();

void setLedColor(uint16_t index);

void setAllLedColor();
}
