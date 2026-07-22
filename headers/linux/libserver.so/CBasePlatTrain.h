#pragma once

class CBasePlatTrain : public CBaseToggle /*0x0*/  // sizeof 0xAF8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xAD0]; // offset 0x0
    CGameSoundEventName m_NoiseMoving; // offset 0xAD0, size 0x8, align 8
    CGameSoundEventName m_NoiseArrived; // offset 0xAD8, size 0x8, align 8
    char _pad_0AE0[0x8]; // offset 0xAE0
    float32 m_volume; // offset 0xAE8, size 0x4, align 4
    float32 m_flTWidth; // offset 0xAEC, size 0x4, align 4
    float32 m_flTLength; // offset 0xAF0, size 0x4, align 4
    char _pad_0AF4[0x4]; // offset 0xAF4
};
