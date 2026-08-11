#pragma once

class CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 charges; // offset 0x1A78, size 0x4, align 4
    int32 bonus_damage; // offset 0x1A7C, size 0x4, align 4
    int32 lifesteal; // offset 0x1A80, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1A84, size 0x4, align 255
    int32 m_nIgnoreStrikeIndex; // offset 0x1A88, size 0x4, align 4
    bool m_bIsAttackAnim; // offset 0x1A8C, size 0x1, align 1
    bool buff_is_undispellable; // offset 0x1A8D, size 0x1, align 1
    char _pad_1A8E[0x2]; // offset 0x1A8E
};
