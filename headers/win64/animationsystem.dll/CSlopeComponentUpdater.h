#pragma once

class CSlopeComponentUpdater : public CAnimComponentUpdater /*0x0*/  // sizeof 0x48, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x34]; // offset 0x0
    float32 m_flTraceDistance; // offset 0x34, size 0x4, align 4
    CAnimParamHandle m_hSlopeAngle; // offset 0x38, size 0x2, align 1
    CAnimParamHandle m_hSlopeAngleFront; // offset 0x3A, size 0x2, align 1
    CAnimParamHandle m_hSlopeAngleSide; // offset 0x3C, size 0x2, align 1
    CAnimParamHandle m_hSlopeHeading; // offset 0x3E, size 0x2, align 1
    CAnimParamHandle m_hSlopeNormal; // offset 0x40, size 0x2, align 1
    CAnimParamHandle m_hSlopeNormal_WorldSpace; // offset 0x42, size 0x2, align 1
    char _pad_0044[0x4]; // offset 0x44
};
