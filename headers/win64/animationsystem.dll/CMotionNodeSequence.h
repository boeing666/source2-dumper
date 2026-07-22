#pragma once

class CMotionNodeSequence : public CMotionNode /*0x0*/  // sizeof 0x48, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    CUtlVector< TagSpan_t > m_tags; // offset 0x28, size 0x18, align 8
    HSequence m_hSequence; // offset 0x40, size 0x4, align 255
    float32 m_flPlaybackSpeed; // offset 0x44, size 0x4, align 4
};
