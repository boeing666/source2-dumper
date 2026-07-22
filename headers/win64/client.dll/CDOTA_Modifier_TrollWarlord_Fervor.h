#pragma once

class CDOTA_Modifier_TrollWarlord_Fervor : public CDOTA_Buff /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 max_stacks; // offset 0x1A58, size 0x4, align 4
    int32 stack_limit_during_battle_trance; // offset 0x1A5C, size 0x4, align 4
    int32 extra_attack_chance_per_stack; // offset 0x1A60, size 0x4, align 4
    int32 base_chance; // offset 0x1A64, size 0x4, align 4
    CHandle< C_BaseEntity > m_hUnit; // offset 0x1A68, size 0x4, align 4
    char _pad_1A6C[0x4]; // offset 0x1A6C
};
