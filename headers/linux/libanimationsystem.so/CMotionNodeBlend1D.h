#pragma once

class CMotionNodeBlend1D : public CMotionNode /*0x0*/  // sizeof 0x48, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    CUtlVector< MotionBlendItem > m_blendItems; // offset 0x28, size 0x18, align 8
    int32 m_nParamIndex; // offset 0x40, size 0x4, align 4
    char _pad_0044[0x4]; // offset 0x44
};
