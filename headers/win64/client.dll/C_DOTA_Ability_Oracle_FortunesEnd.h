#pragma once

class C_DOTA_Ability_Oracle_FortunesEnd : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6D8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    int32 damage; // offset 0x6A8, size 0x4, align 4
    float32 radius; // offset 0x6AC, size 0x4, align 4
    int32 bolt_speed; // offset 0x6B0, size 0x4, align 4
    float32 maximum_purge_duration; // offset 0x6B4, size 0x4, align 4
    float32 minimum_purge_duration; // offset 0x6B8, size 0x4, align 4
    bool purge_constantly; // offset 0x6BC, size 0x1, align 1
    char _pad_06BD[0x3]; // offset 0x6BD
    GameTime_t m_flStartTime; // offset 0x6C0, size 0x4, align 255
    float32 m_flDuration; // offset 0x6C4, size 0x4, align 4
    float32 m_flDamage; // offset 0x6C8, size 0x4, align 4
    bool m_bAbsorbed; // offset 0x6CC, size 0x1, align 1
    char _pad_06CD[0x3]; // offset 0x6CD
    CHandle< C_BaseEntity > m_hTarget; // offset 0x6D0, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x6D4, size 0x4, align 255
};
