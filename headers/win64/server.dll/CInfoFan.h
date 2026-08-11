#pragma once

class CInfoFan : public CPointEntity /*0x0*/  // sizeof 0x4F8, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x4E0]; // offset 0x0
    float32 m_fFanForceMaxRadius; // offset 0x4E0, size 0x4, align 4 | MNetworkEnable
    float32 m_fFanForceMinRadius; // offset 0x4E4, size 0x4, align 4 | MNetworkEnable
    float32 m_flCurveDistRange; // offset 0x4E8, size 0x4, align 4 | MNetworkEnable
    char _pad_04EC[0x4]; // offset 0x4EC
    CUtlSymbolLarge m_FanForceCurveString; // offset 0x4F0, size 0x8, align 8 | MNetworkEnable
};
