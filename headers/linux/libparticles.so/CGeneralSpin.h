#pragma once

class CGeneralSpin : public CParticleFunctionOperator /*0x0*/  // sizeof 0x1E8, align 0xFF [vtable abstract] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    int32 m_nSpinRateDegrees; // offset 0x1D0, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nSpinRateMinDegrees; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01D8[0x4]; // offset 0x1D8
    float32 m_fSpinRateStopTime; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01E0[0x8]; // offset 0x1E0
};
