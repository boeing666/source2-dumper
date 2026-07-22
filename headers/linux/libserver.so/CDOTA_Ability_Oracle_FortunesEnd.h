#pragma once

class CDOTA_Ability_Oracle_FortunesEnd : public CDOTABaseAbility /*0x0*/  // sizeof 0x890, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    int32 damage; // offset 0x85C, size 0x4, align 4
    float32 radius; // offset 0x860, size 0x4, align 4
    int32 bolt_speed; // offset 0x864, size 0x4, align 4
    float32 maximum_purge_duration; // offset 0x868, size 0x4, align 4
    float32 minimum_purge_duration; // offset 0x86C, size 0x4, align 4
    bool purge_constantly; // offset 0x870, size 0x1, align 1
    char _pad_0871[0x3]; // offset 0x871
    GameTime_t m_flStartTime; // offset 0x874, size 0x4, align 255
    float32 m_flDuration; // offset 0x878, size 0x4, align 4
    float32 m_flDamage; // offset 0x87C, size 0x4, align 4
    bool m_bAbsorbed; // offset 0x880, size 0x1, align 1
    char _pad_0881[0x3]; // offset 0x881
    CHandle< CBaseEntity > m_hTarget; // offset 0x884, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x888, size 0x4, align 255
    char _pad_088C[0x4]; // offset 0x88C
};
