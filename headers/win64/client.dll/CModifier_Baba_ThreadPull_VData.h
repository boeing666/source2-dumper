#pragma once

class CModifier_Baba_ThreadPull_VData : public CCitadelModifierVData /*0x0*/  // sizeof 0x7E0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CPiecewiseCurve m_PullProgressCurve; // offset 0x798, size 0x40, align 8 | MPropertyStartGroup MPropertyDescription
    bool m_bCompensatePredictionDelay; // offset 0x7D8, size 0x1, align 1 | MPropertyDescription
    char _pad_07D9[0x3]; // offset 0x7D9
    float32 m_flExitVelocityScale; // offset 0x7DC, size 0x4, align 4 | MPropertyDescription
};
