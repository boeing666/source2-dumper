#pragma once

class CDOTA_Ability_MonkeyKing_Spring : public CDOTABaseAbility /*0x0*/  // sizeof 0x5A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    VectorWS m_vPos; // offset 0x580, size 0xC, align 4
    GameTime_t m_fStartChannelTime; // offset 0x58C, size 0x4, align 255
    CHandle< CBaseEntity > m_hThinker; // offset 0x590, size 0x4, align 4
    ParticleIndex_t m_nFxIndex; // offset 0x594, size 0x4, align 255
    int32 m_nRefCount; // offset 0x598, size 0x4, align 4
    char _pad_059C[0x4]; // offset 0x59C
};
