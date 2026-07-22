#pragma once

class CDOTA_Ability_Hoodwink_AcornShot : public CDOTABaseAbility /*0x0*/  // sizeof 0x8B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x888]; // offset 0x0
    uint32 m_nAcornTree; // offset 0x888, size 0x4, align 4
    float32 projectile_speed; // offset 0x88C, size 0x4, align 4
    float32 bounce_delay; // offset 0x890, size 0x4, align 4
    float32 bounce_range; // offset 0x894, size 0x4, align 4
    int32 bounce_count; // offset 0x898, size 0x4, align 4
    bool m_bIsAltCastState; // offset 0x89C, size 0x1, align 1
    char _pad_089D[0x3]; // offset 0x89D
    int32 can_bounce_off_of_trees; // offset 0x8A0, size 0x4, align 4
    int32 bounces_after_tree_bounce; // offset 0x8A4, size 0x4, align 4
    bool bBouncedOffTree; // offset 0x8A8, size 0x1, align 1
    char _pad_08A9[0x7]; // offset 0x8A9
};
