#pragma once

class CDOTA_Modifier_Earthshaker_Slugger_Intrinsic : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    CUtlVector< AttackRecord_t > m_EnchantTotemAttackRecords; // offset 0x1AA8, size 0x18, align 8
};
