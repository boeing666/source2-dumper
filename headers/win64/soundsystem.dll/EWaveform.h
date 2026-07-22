#pragma once

enum EWaveform : uint8_t  // sizeof 0x1
{
    Sine = 0,
    Square = 1,
    Saw = 2,
    Triangle = 3,
    Noise = 4,
};
