#pragma once

class CTonemapController2 : public CBaseEntity /*0x0*/  // sizeof 0x4C8, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    float32 m_flAutoExposureMin; // offset 0x4B0, size 0x4, align 4
    float32 m_flAutoExposureMax; // offset 0x4B4, size 0x4, align 4
    float32 m_flExposureAdaptationSpeedUp; // offset 0x4B8, size 0x4, align 4
    float32 m_flExposureAdaptationSpeedDown; // offset 0x4BC, size 0x4, align 4
    float32 m_flTonemapEVSmoothingRange; // offset 0x4C0, size 0x4, align 4
    char _pad_04C4[0x4]; // offset 0x4C4
};
