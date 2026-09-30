#pragma once

class CCitadel_Ability_Magician_MagicBolt : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1E88, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    CUtlVector< CHandle< C_CitadelProjectile > > m_vecDeployedProjectiles; // offset 0x16D8, size 0x18, align 8
    int32 m_iCurrentRedirects; // offset 0x16F0, size 0x4, align 4
    char _pad_16F4[0x794]; // offset 0x16F4
};
