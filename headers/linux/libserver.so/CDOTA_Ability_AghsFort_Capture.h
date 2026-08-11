#pragma once

class CDOTA_Ability_AghsFort_Capture : public CDOTABaseAbility /*0x0*/  // sizeof 0x868, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    CHandle< CDOTA_BaseNPC > m_hTarget; // offset 0x85C, size 0x4, align 4
    CDOTA_Buff* m_pMyBuff; // offset 0x860, size 0x8, align 8
};
