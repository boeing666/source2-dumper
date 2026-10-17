#pragma once

class CDOTA_Modifier_Item_Orb_of_Venom : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 poison_duration; // offset 0x1AA8, size 0x4, align 4
    char _pad_1AAC[0x4]; // offset 0x1AAC
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1AB0, size 0x18, align 8
};
