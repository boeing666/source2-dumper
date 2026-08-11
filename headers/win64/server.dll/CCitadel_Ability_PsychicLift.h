#pragma once

class CCitadel_Ability_PsychicLift : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1028, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xFF0]; // offset 0x0
    Vector m_vLiftPosition; // offset 0xFF0, size 0xC, align 4 | MNetworkEnable
    Vector m_vCrashPosition; // offset 0xFFC, size 0xC, align 4 | MNetworkEnable
    char _pad_1008[0x8]; // offset 0x1008
    CUtlVector< CHandle< CBaseEntity > > m_vecLiftTargets; // offset 0x1010, size 0x18, align 8
};
