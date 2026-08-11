#pragma once

class CCitadel_Ability_Thumper_1 : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1328, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecHitEntities; // offset 0xF70, size 0x18, align 8
    Vector m_vecAimPos; // offset 0xF88, size 0xC, align 4
    Vector m_vecAimNormal; // offset 0xF94, size 0xC, align 4
    float32 m_flPushForce; // offset 0xFA0, size 0x4, align 4
    char _pad_0FA4[0x384]; // offset 0xFA4
};
