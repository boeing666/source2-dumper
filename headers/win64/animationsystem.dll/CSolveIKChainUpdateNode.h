#pragma once

class CSolveIKChainUpdateNode : public CUnaryUpdateNode /*0x0*/  // sizeof 0xA8, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x70]; // offset 0x0
    CUtlVector< CSolveIKTargetHandle_t > m_targetHandles; // offset 0x70, size 0x18, align 8
    SolveIKChainPoseOpFixedSettings_t m_opFixedData; // offset 0x88, size 0x18, align 8
    char _pad_00A0[0x8]; // offset 0xA0
};
