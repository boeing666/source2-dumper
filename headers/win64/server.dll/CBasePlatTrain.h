#pragma once

class CBasePlatTrain : public CBaseToggle /*0x0*/  // sizeof 0x920, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8F8]; // offset 0x0
    CGameSoundEventName m_NoiseMoving; // offset 0x8F8, size 0x8, align 8
    CGameSoundEventName m_NoiseArrived; // offset 0x900, size 0x8, align 8
    char _pad_0908[0x8]; // offset 0x908
    float32 m_volume; // offset 0x910, size 0x4, align 4
    float32 m_flTWidth; // offset 0x914, size 0x4, align 4
    float32 m_flTLength; // offset 0x918, size 0x4, align 4
    char _pad_091C[0x4]; // offset 0x91C
};
