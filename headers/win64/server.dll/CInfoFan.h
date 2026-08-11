#pragma once

class CInfoFan : public CPointEntity /*0x0*/  // sizeof 0x4F0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4D8]; // offset 0x0
    float32 m_fFanForceMaxRadius; // offset 0x4D8, size 0x4, align 4
    float32 m_fFanForceMinRadius; // offset 0x4DC, size 0x4, align 4
    float32 m_flCurveDistRange; // offset 0x4E0, size 0x4, align 4
    char _pad_04E4[0x4]; // offset 0x4E4
    CUtlSymbolLarge m_FanForceCurveString; // offset 0x4E8, size 0x8, align 8
};
