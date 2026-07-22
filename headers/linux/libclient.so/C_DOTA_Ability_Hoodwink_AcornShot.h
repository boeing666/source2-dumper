#pragma once

class C_DOTA_Ability_Hoodwink_AcornShot : public C_DOTABaseAbility /*0x0*/  // sizeof 0x848, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    uint32 m_nAcornTree; // offset 0x824, size 0x4, align 4
    float32 projectile_speed; // offset 0x828, size 0x4, align 4
    float32 bounce_delay; // offset 0x82C, size 0x4, align 4
    float32 bounce_range; // offset 0x830, size 0x4, align 4
    int32 bounce_count; // offset 0x834, size 0x4, align 4
    bool m_bIsAltCastState; // offset 0x838, size 0x1, align 1
    char _pad_0839[0x3]; // offset 0x839
    int32 can_bounce_off_of_trees; // offset 0x83C, size 0x4, align 4
    int32 bounces_after_tree_bounce; // offset 0x840, size 0x4, align 4
    bool bBouncedOffTree; // offset 0x844, size 0x1, align 1
    char _pad_0845[0x3]; // offset 0x845
};
