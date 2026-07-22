#pragma once

class CDOTA_Ability_KeeperOfTheLight_Illuminate : public CDOTABaseAbility /*0x0*/  // sizeof 0x5A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    CHandle< CBaseEntity > m_hThinker; // offset 0x580, size 0x4, align 4
    GameTime_t m_fStartTime; // offset 0x584, size 0x4, align 255
    int32 m_iProjectile; // offset 0x588, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x58C, size 0x4, align 255
    ParticleIndex_t m_nFXIndexB; // offset 0x590, size 0x4, align 255
    Vector m_vPos; // offset 0x594, size 0xC, align 4
    int32 total_damage; // offset 0x5A0, size 0x4, align 4
    bool m_bStarted; // offset 0x5A4, size 0x1, align 1
    char _pad_05A5[0x3]; // offset 0x5A5
};
