#pragma once

class C_DOTA_Ability_Hoodwink_AcornShot : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6D0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    uint32 m_nAcornTree; // offset 0x6A8, size 0x4, align 4
    float32 projectile_speed; // offset 0x6AC, size 0x4, align 4
    float32 bounce_delay; // offset 0x6B0, size 0x4, align 4
    float32 bounce_range; // offset 0x6B4, size 0x4, align 4
    int32 bounce_count; // offset 0x6B8, size 0x4, align 4
    bool m_bIsAltCastState; // offset 0x6BC, size 0x1, align 1
    char _pad_06BD[0x3]; // offset 0x6BD
    int32 can_bounce_off_of_trees; // offset 0x6C0, size 0x4, align 4
    int32 bounces_after_tree_bounce; // offset 0x6C4, size 0x4, align 4
    bool bBouncedOffTree; // offset 0x6C8, size 0x1, align 1
    char _pad_06C9[0x7]; // offset 0x6C9
};
