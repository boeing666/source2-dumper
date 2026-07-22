#pragma once

class CInfoFan : public C_PointEntity /*0x0*/  // sizeof 0x648, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x630]; // offset 0x0
    float32 m_fFanForceMaxRadius; // offset 0x630, size 0x4, align 4
    float32 m_fFanForceMinRadius; // offset 0x634, size 0x4, align 4
    float32 m_flCurveDistRange; // offset 0x638, size 0x4, align 4
    char _pad_063C[0x4]; // offset 0x63C
    CUtlSymbolLarge m_FanForceCurveString; // offset 0x640, size 0x8, align 8
};
