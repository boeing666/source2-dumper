#pragma once

class CExpressionActionUpdater : public CAnimActionUpdater /*0x0*/  // sizeof 0x20, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18]; // offset 0x0
    CAnimParamHandle m_hParam; // offset 0x18, size 0x2, align 1
    AnimParamType_t m_eParamType; // offset 0x1A, size 0x1, align 1
    char _pad_001B[0x1]; // offset 0x1B
    AnimScriptHandle m_hScript; // offset 0x1C, size 0x4, align 4
};
