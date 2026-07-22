#pragma once

class CDOTA_Ability_Shadow_Demon_Disruption : public C_DOTABaseAbility /*0x0*/  // sizeof 0x828, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    CHandle< C_BaseEntity > m_hDisruptedUnit; // offset 0x824, size 0x4, align 4
};
