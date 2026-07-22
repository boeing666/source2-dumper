#pragma once

class CDOTA_Ability_Capture : public C_DOTABaseAbility /*0x0*/  // sizeof 0x830, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    CHandle< C_DOTA_BaseNPC > m_hTarget; // offset 0x824, size 0x4, align 4
    CDOTA_Buff* m_pMyBuff; // offset 0x828, size 0x8, align 8
};
