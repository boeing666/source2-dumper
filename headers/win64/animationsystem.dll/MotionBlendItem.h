#pragma once

class MotionBlendItem  // sizeof 0x10, align 0x8 (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    CSmartPtr< CMotionNode > m_pChild; // offset 0x0, size 0x8, align 8
    float32 m_flKeyValue; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x4]; // offset 0xC
};
