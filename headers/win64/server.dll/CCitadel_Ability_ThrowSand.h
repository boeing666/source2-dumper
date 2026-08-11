#pragma once

class CCitadel_Ability_ThrowSand : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1088, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vHitEnts; // offset 0x1070, size 0x18, align 8
};
