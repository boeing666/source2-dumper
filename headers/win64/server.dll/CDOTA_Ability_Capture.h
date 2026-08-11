#pragma once

class CDOTA_Ability_Capture : public CDOTABaseAbility /*0x0*/  // sizeof 0x590, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    CHandle< CDOTA_BaseNPC > m_hTarget; // offset 0x580, size 0x4, align 4
    char _pad_0584[0x4]; // offset 0x584
    CDOTA_Buff* m_pMyBuff; // offset 0x588, size 0x8, align 8
};
