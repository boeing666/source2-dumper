#pragma once

class C_DOTA_Ability_KeeperOfTheLight_Illuminate : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6D0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    CHandle< C_BaseEntity > m_hThinker; // offset 0x6A8, size 0x4, align 4
    GameTime_t m_fStartTime; // offset 0x6AC, size 0x4, align 255
    int32 m_iProjectile; // offset 0x6B0, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x6B4, size 0x4, align 255
    ParticleIndex_t m_nFXIndexB; // offset 0x6B8, size 0x4, align 255
    Vector m_vPos; // offset 0x6BC, size 0xC, align 4
    int32 total_damage; // offset 0x6C8, size 0x4, align 4
    bool m_bStarted; // offset 0x6CC, size 0x1, align 1
    char _pad_06CD[0x3]; // offset 0x6CD
};
