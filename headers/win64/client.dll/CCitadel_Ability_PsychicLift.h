#pragma once

class CCitadel_Ability_PsychicLift : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1298, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1258]; // offset 0x0
    Vector m_vLiftPosition; // offset 0x1258, size 0xC, align 4 | MNetworkEnable
    Vector m_vCrashPosition; // offset 0x1264, size 0xC, align 4 | MNetworkEnable
    char _pad_1270[0x8]; // offset 0x1270
    CUtlVector< CHandle< C_BaseEntity > > m_vecLiftTargets; // offset 0x1278, size 0x18, align 8
    char _pad_1290[0x8]; // offset 0x1290
};
