#pragma once

class CBasePlatTrain : public CBaseToggle /*0x0*/  // sizeof 0x818, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x7F0]; // offset 0x0
    CGameSoundEventName m_NoiseMoving; // offset 0x7F0, size 0x8, align 8
    CGameSoundEventName m_NoiseArrived; // offset 0x7F8, size 0x8, align 8
    char _pad_0800[0x8]; // offset 0x800
    float32 m_volume; // offset 0x808, size 0x4, align 4
    float32 m_flTWidth; // offset 0x80C, size 0x4, align 4
    float32 m_flTLength; // offset 0x810, size 0x4, align 4
    char _pad_0814[0x4]; // offset 0x814
};
