#pragma once

class CDOTA_Ability_Oracle_FortunesEnd : public CDOTABaseAbility /*0x0*/  // sizeof 0x5B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    int32 damage; // offset 0x580, size 0x4, align 4
    float32 radius; // offset 0x584, size 0x4, align 4
    int32 bolt_speed; // offset 0x588, size 0x4, align 4
    float32 maximum_purge_duration; // offset 0x58C, size 0x4, align 4
    float32 minimum_purge_duration; // offset 0x590, size 0x4, align 4
    bool purge_constantly; // offset 0x594, size 0x1, align 1
    char _pad_0595[0x3]; // offset 0x595
    GameTime_t m_flStartTime; // offset 0x598, size 0x4, align 255
    float32 m_flDuration; // offset 0x59C, size 0x4, align 4
    float32 m_flDamage; // offset 0x5A0, size 0x4, align 4
    bool m_bAbsorbed; // offset 0x5A4, size 0x1, align 1
    char _pad_05A5[0x3]; // offset 0x5A5
    CHandle< CBaseEntity > m_hTarget; // offset 0x5A8, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x5AC, size 0x4, align 255
};
