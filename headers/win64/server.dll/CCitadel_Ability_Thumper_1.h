#pragma once

class CCitadel_Ability_Thumper_1 : public CCitadelBaseAbility /*0x0*/  // sizeof 0x19A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecHitEntities; // offset 0x14A0, size 0x18, align 8
    VectorWS m_vecAimPos; // offset 0x14B8, size 0xC, align 4
    Vector m_vecAimNormal; // offset 0x14C4, size 0xC, align 4
    float32 m_flPushForce; // offset 0x14D0, size 0x4, align 4
    char _pad_14D4[0x4D4]; // offset 0x14D4
};
