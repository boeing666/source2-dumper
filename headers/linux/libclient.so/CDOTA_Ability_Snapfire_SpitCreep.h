#pragma once

class CDOTA_Ability_Snapfire_SpitCreep : public C_DOTABaseAbility /*0x0*/  // sizeof 0x830, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    int32 m_nDamagePerProjectile; // offset 0x824, size 0x4, align 4
    CHandle< C_BaseEntity > m_hGobbledUnit; // offset 0x828, size 0x4, align 4
    char _pad_082C[0x4]; // offset 0x82C
};
