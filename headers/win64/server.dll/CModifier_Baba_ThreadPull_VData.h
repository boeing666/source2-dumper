#pragma once

class CModifier_Baba_ThreadPull_VData : public CCitadelModifierVData /*0x0*/  // sizeof 0x7D8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CPiecewiseCurve m_PullProgressCurve; // offset 0x790, size 0x40, align 8 | MPropertyStartGroup MPropertyDescription
    bool m_bCompensatePredictionDelay; // offset 0x7D0, size 0x1, align 1 | MPropertyDescription
    char _pad_07D1[0x3]; // offset 0x7D1
    float32 m_flExitVelocityScale; // offset 0x7D4, size 0x4, align 4 | MPropertyDescription
};
