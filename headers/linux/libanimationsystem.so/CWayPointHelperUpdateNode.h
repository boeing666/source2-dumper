#pragma once

class CWayPointHelperUpdateNode : public CUnaryUpdateNode /*0x0*/  // sizeof 0x80, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x74]; // offset 0x0
    float32 m_flStartCycle; // offset 0x74, size 0x4, align 4
    float32 m_flEndCycle; // offset 0x78, size 0x4, align 4
    bool m_bOnlyGoals; // offset 0x7C, size 0x1, align 1
    bool m_bPreventOvershoot; // offset 0x7D, size 0x1, align 1
    bool m_bPreventUndershoot; // offset 0x7E, size 0x1, align 1
    char _pad_007F[0x1]; // offset 0x7F
};
