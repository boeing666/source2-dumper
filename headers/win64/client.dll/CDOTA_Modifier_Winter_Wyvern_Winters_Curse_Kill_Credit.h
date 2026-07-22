#pragma once

class CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Kill_Credit : public CDOTA_Buff /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1A58, size 0x18, align 8
    bool transfer_on_death; // offset 0x1A70, size 0x1, align 1
    char _pad_1A71[0x7]; // offset 0x1A71
};
