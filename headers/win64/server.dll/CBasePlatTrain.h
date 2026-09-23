#pragma once

class CBasePlatTrain : public CBaseToggle /*0x0*/  // sizeof 0x8F8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8D0]; // offset 0x0
    CGameSoundEventName m_NoiseMoving; // offset 0x8D0, size 0x8, align 8
    CGameSoundEventName m_NoiseArrived; // offset 0x8D8, size 0x8, align 8
    char _pad_08E0[0x8]; // offset 0x8E0
    float32 m_volume; // offset 0x8E8, size 0x4, align 4
    float32 m_flTWidth; // offset 0x8EC, size 0x4, align 4
    float32 m_flTLength; // offset 0x8F0, size 0x4, align 4
    char _pad_08F4[0x4]; // offset 0x8F4
};
