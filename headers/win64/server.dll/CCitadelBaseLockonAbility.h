#pragma once

class CCitadelBaseLockonAbility : public CCitadelBaseAbility /*0x0*/  // sizeof 0x12E0, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1270]; // offset 0x0
    CUtlVectorEmbeddedNetworkVar< LockonTarget_t > m_vecLockonTargets; // offset 0x1270, size 0x68, align 8 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_LockOnStartTime; // offset 0x12D8, size 0x4, align 255 | MNetworkEnable
    char _pad_12DC[0x4]; // offset 0x12DC
};
