#pragma once

class CTurnHelperUpdateNode : public CUnaryUpdateNode /*0x0*/  // sizeof 0x90, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x74]; // offset 0x0
    AnimValueSource m_facingTarget; // offset 0x74, size 0x4, align 4
    float32 m_turnStartTimeOffset; // offset 0x78, size 0x4, align 4
    float32 m_turnDuration; // offset 0x7C, size 0x4, align 4
    bool m_bMatchChildDuration; // offset 0x80, size 0x1, align 1
    char _pad_0081[0x3]; // offset 0x81
    float32 m_manualTurnOffset; // offset 0x84, size 0x4, align 4
    bool m_bUseManualTurnOffset; // offset 0x88, size 0x1, align 1
    char _pad_0089[0x7]; // offset 0x89
};
