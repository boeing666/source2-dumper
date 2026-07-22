#pragma once

class CDOTA_Modifier_Juggernaut_Healing_Ward_Heal : public CDOTA_Buff /*0x0*/  // sizeof 0x1A60, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 healing_ward_heal_amount; // offset 0x1A58, size 0x4, align 4
    int32 m_nStartingHealthThisInterval; // offset 0x1A5C, size 0x4, align 4
};
