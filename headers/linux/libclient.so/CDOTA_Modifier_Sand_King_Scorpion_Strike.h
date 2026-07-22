#pragma once

class CDOTA_Modifier_Sand_King_Scorpion_Strike : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    bool m_bStrikeAttack; // offset 0x1A58, size 0x1, align 1
    char _pad_1A59[0x3]; // offset 0x1A59
    int32 bonus_attack_range; // offset 0x1A5C, size 0x4, align 4
    int32 damage_percentage; // offset 0x1A60, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1A64, size 0x4, align 255
    char _pad_1A68[0x18]; // offset 0x1A68
};
