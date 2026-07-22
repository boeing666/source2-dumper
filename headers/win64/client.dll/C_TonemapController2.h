#pragma once

class C_TonemapController2 : public C_BaseEntity /*0x0*/  // sizeof 0x618, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x600]; // offset 0x0
    float32 m_flAutoExposureMin; // offset 0x600, size 0x4, align 4
    float32 m_flAutoExposureMax; // offset 0x604, size 0x4, align 4
    float32 m_flExposureAdaptationSpeedUp; // offset 0x608, size 0x4, align 4
    float32 m_flExposureAdaptationSpeedDown; // offset 0x60C, size 0x4, align 4
    float32 m_flTonemapEVSmoothingRange; // offset 0x610, size 0x4, align 4
    char _pad_0614[0x4]; // offset 0x614
};
