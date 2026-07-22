#pragma once

class C_DOTA_Ability_MonkeyKing_Spring : public C_DOTABaseAbility /*0x0*/  // sizeof 0x840, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    VectorWS m_vPos; // offset 0x824, size 0xC, align 4
    GameTime_t m_fStartChannelTime; // offset 0x830, size 0x4, align 255
    CHandle< C_BaseEntity > m_hThinker; // offset 0x834, size 0x4, align 4
    ParticleIndex_t m_nFxIndex; // offset 0x838, size 0x4, align 255
    int32 m_nRefCount; // offset 0x83C, size 0x4, align 4
};
