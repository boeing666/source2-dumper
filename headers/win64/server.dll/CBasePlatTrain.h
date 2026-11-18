#pragma once

class CBasePlatTrain : public CBaseToggle /*0x0*/  // sizeof 0x960, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x938]; // offset 0x0
    CGameSoundEventName m_NoiseMoving; // offset 0x938, size 0x8, align 8
    CGameSoundEventName m_NoiseArrived; // offset 0x940, size 0x8, align 8
    char _pad_0948[0x8]; // offset 0x948
    float32 m_volume; // offset 0x950, size 0x4, align 4
    float32 m_flTWidth; // offset 0x954, size 0x4, align 4
    float32 m_flTLength; // offset 0x958, size 0x4, align 4
    char _pad_095C[0x4]; // offset 0x95C
};
