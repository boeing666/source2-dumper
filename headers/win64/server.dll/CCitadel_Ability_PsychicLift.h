#pragma once

class CCitadel_Ability_PsychicLift : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1590, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1558]; // offset 0x0
    VectorWS m_vLiftPosition; // offset 0x1558, size 0xC, align 4
    VectorWS m_vCrashPosition; // offset 0x1564, size 0xC, align 4
    char _pad_1570[0x8]; // offset 0x1570
    CUtlVector< CHandle< CBaseEntity > > m_vecLiftTargets; // offset 0x1578, size 0x18, align 8
};
