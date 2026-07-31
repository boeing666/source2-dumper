#pragma once

class CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 scepter_move_speed_pct; // offset 0x1A78, size 0x4, align 4
    int32 scepter_attack_speed; // offset 0x1A7C, size 0x4, align 4
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1A80, size 0x4, align 4
    bool m_bPassive; // offset 0x1A84, size 0x1, align 1
    bool m_bKillAtEnd; // offset 0x1A85, size 0x1, align 1
    char _pad_1A86[0x2]; // offset 0x1A86
};
