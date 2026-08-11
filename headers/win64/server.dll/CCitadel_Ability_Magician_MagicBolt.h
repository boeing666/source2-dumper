#pragma once

class CCitadel_Ability_Magician_MagicBolt : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1518, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xF78]; // offset 0x0
    CUtlVector< CHandle< CCitadelProjectile > > m_vecDeployedProjectiles; // offset 0xF78, size 0x18, align 8
    int32 m_iCurrentRedirects; // offset 0xF90, size 0x4, align 4
    char _pad_0F94[0x584]; // offset 0xF94
};
