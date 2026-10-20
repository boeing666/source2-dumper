#pragma once

class CCitadelBaseLockonAbility : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1938, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x18C8]; // offset 0x0
    CUtlVectorEmbeddedNetworkVar< LockonTarget_t > m_vecLockonTargets; // offset 0x18C8, size 0x68, align 8
    GameTime_t m_LockOnStartTime; // offset 0x1930, size 0x4, align 255
    char _pad_1934[0x4]; // offset 0x1934
};
