#pragma once

class CBasePlatTrain : public CBaseToggle /*0x0*/  // sizeof 0xC40, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xC18]; // offset 0x0
    CGameSoundEventName m_NoiseMoving; // offset 0xC18, size 0x8, align 8
    CGameSoundEventName m_NoiseArrived; // offset 0xC20, size 0x8, align 8
    char _pad_0C28[0x8]; // offset 0xC28
    float32 m_volume; // offset 0xC30, size 0x4, align 4
    float32 m_flTWidth; // offset 0xC34, size 0x4, align 4
    float32 m_flTLength; // offset 0xC38, size 0x4, align 4
    char _pad_0C3C[0x4]; // offset 0xC3C
};
