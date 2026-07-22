#pragma once

class CDOTA_Ability_Hoodwink_AcornShot : public CDOTABaseAbility /*0x0*/  // sizeof 0x5D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x5A8]; // offset 0x0
    uint32 m_nAcornTree; // offset 0x5A8, size 0x4, align 4
    float32 projectile_speed; // offset 0x5AC, size 0x4, align 4
    float32 bounce_delay; // offset 0x5B0, size 0x4, align 4
    float32 bounce_range; // offset 0x5B4, size 0x4, align 4
    int32 bounce_count; // offset 0x5B8, size 0x4, align 4
    bool m_bIsAltCastState; // offset 0x5BC, size 0x1, align 1
    char _pad_05BD[0x3]; // offset 0x5BD
    int32 can_bounce_off_of_trees; // offset 0x5C0, size 0x4, align 4
    int32 bounces_after_tree_bounce; // offset 0x5C4, size 0x4, align 4
    bool bBouncedOffTree; // offset 0x5C8, size 0x1, align 1
    char _pad_05C9[0x7]; // offset 0x5C9
};
