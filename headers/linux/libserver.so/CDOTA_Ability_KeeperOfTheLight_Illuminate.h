#pragma once

class CDOTA_Ability_KeeperOfTheLight_Illuminate : public CDOTABaseAbility /*0x0*/  // sizeof 0x888, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    CHandle< CBaseEntity > m_hThinker; // offset 0x85C, size 0x4, align 4
    GameTime_t m_fStartTime; // offset 0x860, size 0x4, align 255
    int32 m_iProjectile; // offset 0x864, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x868, size 0x4, align 255
    ParticleIndex_t m_nFXIndexB; // offset 0x86C, size 0x4, align 255
    Vector m_vPos; // offset 0x870, size 0xC, align 4
    int32 total_damage; // offset 0x87C, size 0x4, align 4
    bool m_bStarted; // offset 0x880, size 0x1, align 1
    char _pad_0881[0x7]; // offset 0x881
};
