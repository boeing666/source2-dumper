#pragma once

class CDOTA_Modifier_Sand_King_Scorpion_Strike : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    bool m_bStrikeAttack; // offset 0x1AA8, size 0x1, align 1
    char _pad_1AA9[0x3]; // offset 0x1AA9
    int32 bonus_attack_range; // offset 0x1AAC, size 0x4, align 4
    int32 damage_percentage; // offset 0x1AB0, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1AB4, size 0x4, align 255
    char _pad_1AB8[0x18]; // offset 0x1AB8
};
