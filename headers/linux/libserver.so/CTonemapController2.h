#pragma once

class CTonemapController2 : public CBaseEntity /*0x0*/  // sizeof 0x7A0, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x788]; // offset 0x0
    float32 m_flAutoExposureMin; // offset 0x788, size 0x4, align 4
    float32 m_flAutoExposureMax; // offset 0x78C, size 0x4, align 4
    float32 m_flExposureAdaptationSpeedUp; // offset 0x790, size 0x4, align 4
    float32 m_flExposureAdaptationSpeedDown; // offset 0x794, size 0x4, align 4
    float32 m_flTonemapEVSmoothingRange; // offset 0x798, size 0x4, align 4
    char _pad_079C[0x4]; // offset 0x79C
};
