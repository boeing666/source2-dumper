#pragma once

class CMessage : public CPointEntity /*0x0*/  // sizeof 0x4E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    CUtlSymbolLarge m_iszMessage; // offset 0x4B0, size 0x8, align 8
    float32 m_MessageVolume; // offset 0x4B8, size 0x4, align 4
    int32 m_MessageAttenuation; // offset 0x4BC, size 0x4, align 4
    float32 m_Radius; // offset 0x4C0, size 0x4, align 4
    char _pad_04C4[0x4]; // offset 0x4C4
    CGameSoundEventName m_sNoise; // offset 0x4C8, size 0x8, align 8
    CEntityIOOutput m_OnShowMessage; // offset 0x4D0, size 0x18, align 255
};
