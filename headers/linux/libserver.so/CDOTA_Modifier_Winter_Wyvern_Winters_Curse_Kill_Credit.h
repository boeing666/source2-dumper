#pragma once

class CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Kill_Credit : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1AA8, size 0x18, align 8
    bool transfer_on_death; // offset 0x1AC0, size 0x1, align 1
    char _pad_1AC1[0x7]; // offset 0x1AC1
};
