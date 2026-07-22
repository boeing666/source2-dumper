#pragma once

class C_DOTA_Ability_Oracle_FortunesEnd : public C_DOTABaseAbility /*0x0*/  // sizeof 0x858, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    int32 damage; // offset 0x824, size 0x4, align 4
    float32 radius; // offset 0x828, size 0x4, align 4
    int32 bolt_speed; // offset 0x82C, size 0x4, align 4
    float32 maximum_purge_duration; // offset 0x830, size 0x4, align 4
    float32 minimum_purge_duration; // offset 0x834, size 0x4, align 4
    bool purge_constantly; // offset 0x838, size 0x1, align 1
    char _pad_0839[0x3]; // offset 0x839
    GameTime_t m_flStartTime; // offset 0x83C, size 0x4, align 255
    float32 m_flDuration; // offset 0x840, size 0x4, align 4
    float32 m_flDamage; // offset 0x844, size 0x4, align 4
    bool m_bAbsorbed; // offset 0x848, size 0x1, align 1
    char _pad_0849[0x3]; // offset 0x849
    CHandle< C_BaseEntity > m_hTarget; // offset 0x84C, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x850, size 0x4, align 255
    char _pad_0854[0x4]; // offset 0x854
};
