#pragma once

class CSetParameterActionUpdater : public CAnimActionUpdater /*0x0*/  // sizeof 0x30, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18]; // offset 0x0
    CAnimParamHandle m_hParam; // offset 0x18, size 0x2, align 1
    CAnimVariant m_value; // offset 0x1A, size 0x11, align 1
    char _pad_002B[0x5]; // offset 0x2B
};
