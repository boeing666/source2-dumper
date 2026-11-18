#pragma once

class CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 scepter_move_speed_pct; // offset 0x1AF8, size 0x4, align 4
    int32 scepter_attack_speed; // offset 0x1AFC, size 0x4, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x1B00, size 0x4, align 4
    bool m_bPassive; // offset 0x1B04, size 0x1, align 1
    bool m_bKillAtEnd; // offset 0x1B05, size 0x1, align 1
    char _pad_1B06[0x2]; // offset 0x1B06
};
