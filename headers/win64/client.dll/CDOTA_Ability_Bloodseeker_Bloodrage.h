#pragma once

class CDOTA_Ability_Bloodseeker_Bloodrage : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6B0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    CHandle< C_BaseEntity > m_hTarget; // offset 0x6A8, size 0x4, align 4
    char _pad_06AC[0x4]; // offset 0x6AC
};
