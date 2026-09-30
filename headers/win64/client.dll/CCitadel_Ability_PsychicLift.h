#pragma once

class CCitadel_Ability_PsychicLift : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x17C8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1788]; // offset 0x0
    VectorWS m_vLiftPosition; // offset 0x1788, size 0xC, align 4
    VectorWS m_vCrashPosition; // offset 0x1794, size 0xC, align 4
    char _pad_17A0[0x8]; // offset 0x17A0
    CUtlVector< CHandle< C_BaseEntity > > m_vecLiftTargets; // offset 0x17A8, size 0x18, align 8
    char _pad_17C0[0x8]; // offset 0x17C0
};
