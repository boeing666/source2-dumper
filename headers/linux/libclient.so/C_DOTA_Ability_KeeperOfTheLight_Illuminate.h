#pragma once

class C_DOTA_Ability_KeeperOfTheLight_Illuminate : public C_DOTABaseAbility /*0x0*/  // sizeof 0x850, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    CHandle< C_BaseEntity > m_hThinker; // offset 0x824, size 0x4, align 4
    GameTime_t m_fStartTime; // offset 0x828, size 0x4, align 255
    int32 m_iProjectile; // offset 0x82C, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x830, size 0x4, align 255
    ParticleIndex_t m_nFXIndexB; // offset 0x834, size 0x4, align 255
    Vector m_vPos; // offset 0x838, size 0xC, align 4
    int32 total_damage; // offset 0x844, size 0x4, align 4
    bool m_bStarted; // offset 0x848, size 0x1, align 1
    char _pad_0849[0x7]; // offset 0x849
};
