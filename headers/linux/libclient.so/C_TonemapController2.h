#pragma once

class C_TonemapController2 : public C_BaseEntity /*0x0*/  // sizeof 0x798, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x77C]; // offset 0x0
    float32 m_flAutoExposureMin; // offset 0x77C, size 0x4, align 4
    float32 m_flAutoExposureMax; // offset 0x780, size 0x4, align 4
    float32 m_flExposureAdaptationSpeedUp; // offset 0x784, size 0x4, align 4
    float32 m_flExposureAdaptationSpeedDown; // offset 0x788, size 0x4, align 4
    float32 m_flTonemapEVSmoothingRange; // offset 0x78C, size 0x4, align 4
    char _pad_0790[0x8]; // offset 0x790
};
