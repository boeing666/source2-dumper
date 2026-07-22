#pragma once

class CDOTA_Ability_Snapfire_SpitCreep : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6B0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    int32 m_nDamagePerProjectile; // offset 0x6A8, size 0x4, align 4
    CHandle< C_BaseEntity > m_hGobbledUnit; // offset 0x6AC, size 0x4, align 4
};
