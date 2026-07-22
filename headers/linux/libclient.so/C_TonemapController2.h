#pragma once

class C_TonemapController2 : public C_BaseEntity /*0x0*/  // sizeof 0x788, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x76C]; // offset 0x0
    float32 m_flAutoExposureMin; // offset 0x76C, size 0x4, align 4
    float32 m_flAutoExposureMax; // offset 0x770, size 0x4, align 4
    float32 m_flExposureAdaptationSpeedUp; // offset 0x774, size 0x4, align 4
    float32 m_flExposureAdaptationSpeedDown; // offset 0x778, size 0x4, align 4
    float32 m_flTonemapEVSmoothingRange; // offset 0x77C, size 0x4, align 4
    char _pad_0780[0x8]; // offset 0x780
};
