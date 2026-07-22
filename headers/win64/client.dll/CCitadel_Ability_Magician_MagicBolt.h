#pragma once

class CCitadel_Ability_Magician_MagicBolt : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1780, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x11E0]; // offset 0x0
    CUtlVector< CHandle< C_CitadelProjectile > > m_vecDeployedProjectiles; // offset 0x11E0, size 0x18, align 8
    int32 m_iCurrentRedirects; // offset 0x11F8, size 0x4, align 4
    char _pad_11FC[0x584]; // offset 0x11FC
};
