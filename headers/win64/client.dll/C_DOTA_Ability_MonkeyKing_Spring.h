#pragma once

class C_DOTA_Ability_MonkeyKing_Spring : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6C8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    VectorWS m_vPos; // offset 0x6A8, size 0xC, align 4
    GameTime_t m_fStartChannelTime; // offset 0x6B4, size 0x4, align 255
    CHandle< C_BaseEntity > m_hThinker; // offset 0x6B8, size 0x4, align 4
    ParticleIndex_t m_nFxIndex; // offset 0x6BC, size 0x4, align 255
    int32 m_nRefCount; // offset 0x6C0, size 0x4, align 4
    char _pad_06C4[0x4]; // offset 0x6C4
};
