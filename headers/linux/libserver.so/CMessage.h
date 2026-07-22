#pragma once

class CMessage : public CPointEntity /*0x0*/  // sizeof 0x7B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    CUtlSymbolLarge m_iszMessage; // offset 0x778, size 0x8, align 8
    float32 m_MessageVolume; // offset 0x780, size 0x4, align 4
    int32 m_MessageAttenuation; // offset 0x784, size 0x4, align 4
    float32 m_Radius; // offset 0x788, size 0x4, align 4
    char _pad_078C[0x4]; // offset 0x78C
    CGameSoundEventName m_sNoise; // offset 0x790, size 0x8, align 8
    CEntityIOOutput m_OnShowMessage; // offset 0x798, size 0x18, align 255
};
