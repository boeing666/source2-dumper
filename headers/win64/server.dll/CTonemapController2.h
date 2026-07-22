#pragma once

class CTonemapController2 : public CBaseEntity /*0x0*/  // sizeof 0x4B0, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x498]; // offset 0x0
    float32 m_flAutoExposureMin; // offset 0x498, size 0x4, align 4
    float32 m_flAutoExposureMax; // offset 0x49C, size 0x4, align 4
    float32 m_flExposureAdaptationSpeedUp; // offset 0x4A0, size 0x4, align 4
    float32 m_flExposureAdaptationSpeedDown; // offset 0x4A4, size 0x4, align 4
    float32 m_flTonemapEVSmoothingRange; // offset 0x4A8, size 0x4, align 4
    char _pad_04AC[0x4]; // offset 0x4AC
};
