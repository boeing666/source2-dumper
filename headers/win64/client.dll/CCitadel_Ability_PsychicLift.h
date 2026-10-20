#pragma once

class CCitadel_Ability_PsychicLift : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x17D0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1790]; // offset 0x0
    VectorWS m_vLiftPosition; // offset 0x1790, size 0xC, align 4
    VectorWS m_vCrashPosition; // offset 0x179C, size 0xC, align 4
    char _pad_17A8[0x8]; // offset 0x17A8
    CUtlVector< CHandle< C_BaseEntity > > m_vecLiftTargets; // offset 0x17B0, size 0x18, align 8
    char _pad_17C8[0x8]; // offset 0x17C8
};
