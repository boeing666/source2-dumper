#pragma once

class CNPC_BaseDefenseSentry : public CNPC_SimpleAnimatingAI /*0x0*/  // sizeof 0xC70, align 0x10 [vtable] (server) {MNetworkIncludeByName MNetworkIncludeByName MNetworkVarNames}
{
public:
    char _pad_0000[0xC18]; // offset 0x0
    Vector m_vecUnitStatusOffset; // offset 0xC18, size 0xC, align 4 | MNetworkEnable
    char _pad_0C24[0x28]; // offset 0xC24
    float32 m_flAttackCone; // offset 0xC4C, size 0x4, align 4
    float32 m_flAttackDelay; // offset 0xC50, size 0x4, align 4 | MNotSaved
    GameTime_t m_flLastAlertSound; // offset 0xC54, size 0x4, align 255 | MNotSaved
    char _pad_0C58[0x4]; // offset 0xC58
    int16 m_nSentryLevel; // offset 0xC5C, size 0x2, align 2
    char _pad_0C5E[0x2]; // offset 0xC5E
    Vector m_vecForward; // offset 0xC60, size 0xC, align 4
    char _pad_0C6C[0x4]; // offset 0xC6C
};
