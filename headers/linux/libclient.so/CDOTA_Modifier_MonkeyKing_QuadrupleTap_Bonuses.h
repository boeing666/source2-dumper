#pragma once

class CDOTA_Modifier_MonkeyKing_QuadrupleTap_Bonuses : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 charges; // offset 0x1AA8, size 0x4, align 4
    int32 bonus_damage; // offset 0x1AAC, size 0x4, align 4
    int32 lifesteal; // offset 0x1AB0, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1AB4, size 0x4, align 255
    int32 m_nIgnoreStrikeIndex; // offset 0x1AB8, size 0x4, align 4
    bool m_bIsAttackAnim; // offset 0x1ABC, size 0x1, align 1
    bool buff_is_undispellable; // offset 0x1ABD, size 0x1, align 1
    char _pad_1ABE[0x2]; // offset 0x1ABE
};
