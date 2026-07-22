#pragma once

class CLookComponentUpdater : public CAnimComponentUpdater /*0x0*/  // sizeof 0x48, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x34]; // offset 0x0
    CAnimParamHandle m_hLookHeading; // offset 0x34, size 0x2, align 1
    CAnimParamHandle m_hLookHeadingNormalized; // offset 0x36, size 0x2, align 1
    CAnimParamHandle m_hLookHeadingVelocity; // offset 0x38, size 0x2, align 1
    CAnimParamHandle m_hLookPitch; // offset 0x3A, size 0x2, align 1
    CAnimParamHandle m_hLookDistance; // offset 0x3C, size 0x2, align 1
    CAnimParamHandle m_hLookDirection; // offset 0x3E, size 0x2, align 1
    CAnimParamHandle m_hLookTarget; // offset 0x40, size 0x2, align 1
    CAnimParamHandle m_hLookTargetWorldSpace; // offset 0x42, size 0x2, align 1
    bool m_bNetworkLookTarget; // offset 0x44, size 0x1, align 1
    char _pad_0045[0x3]; // offset 0x45
};
