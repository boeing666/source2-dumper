#pragma once

class CDOTA_Ability_MonkeyKing_Spring : public CDOTABaseAbility /*0x0*/  // sizeof 0x878, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    VectorWS m_vPos; // offset 0x85C, size 0xC, align 4
    GameTime_t m_fStartChannelTime; // offset 0x868, size 0x4, align 255
    CHandle< CBaseEntity > m_hThinker; // offset 0x86C, size 0x4, align 4
    ParticleIndex_t m_nFxIndex; // offset 0x870, size 0x4, align 255
    int32 m_nRefCount; // offset 0x874, size 0x4, align 4
};
