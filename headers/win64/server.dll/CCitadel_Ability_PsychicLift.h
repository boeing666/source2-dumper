#pragma once

class CCitadel_Ability_PsychicLift : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1588, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1550]; // offset 0x0
    VectorWS m_vLiftPosition; // offset 0x1550, size 0xC, align 4
    VectorWS m_vCrashPosition; // offset 0x155C, size 0xC, align 4
    char _pad_1568[0x8]; // offset 0x1568
    CUtlVector< CHandle< CBaseEntity > > m_vecLiftTargets; // offset 0x1570, size 0x18, align 8
};
