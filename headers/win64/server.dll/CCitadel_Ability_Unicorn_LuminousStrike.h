#pragma once

class CCitadel_Ability_Unicorn_LuminousStrike : public CCitadelBaseAbility /*0x0*/  // sizeof 0x19D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    GameTime_t m_flLastStackChangeTime; // offset 0x14A8, size 0x4, align 255
    int32 m_nLastStackCount; // offset 0x14AC, size 0x4, align 4
    char _pad_14B0[0x18]; // offset 0x14B0
    CNetworkUtlVectorBase< GameTime_t > m_vecNextExplosionTime; // offset 0x14C8, size 0x18, align 8
    CNetworkUtlVectorBase< VectorWS > m_vecNextExplosionLocation; // offset 0x14E0, size 0x18, align 8
    int32 m_nStackCount; // offset 0x14F8, size 0x4, align 4
    bool m_bPendingStackUpdate; // offset 0x14FC, size 0x1, align 1
    char _pad_14FD[0x4D3]; // offset 0x14FD
};
