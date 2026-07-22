#pragma once

class CBlend2DUpdateNode : public CAnimUpdateNodeBase /*0x0*/  // sizeof 0xF8, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x60]; // offset 0x0
    CUtlVector< BlendItem_t > m_items; // offset 0x60, size 0x18, align 8
    CUtlVector< TagSpan_t > m_tags; // offset 0x78, size 0x18, align 8
    CParamSpanUpdater m_paramSpans; // offset 0x90, size 0x18, align 8
    CUtlVector< int32 > m_nodeItemIndices; // offset 0xA8, size 0x18, align 8
    CAnimInputDamping m_damping; // offset 0xC0, size 0x18, align 8
    AnimValueSource m_blendSourceX; // offset 0xD8, size 0x4, align 4
    CAnimParamHandle m_paramX; // offset 0xDC, size 0x2, align 1
    char _pad_00DE[0x2]; // offset 0xDE
    AnimValueSource m_blendSourceY; // offset 0xE0, size 0x4, align 4
    CAnimParamHandle m_paramY; // offset 0xE4, size 0x2, align 1
    char _pad_00E6[0x2]; // offset 0xE6
    Blend2DMode m_eBlendMode; // offset 0xE8, size 0x4, align 4
    float32 m_playbackSpeed; // offset 0xEC, size 0x4, align 4
    bool m_bLoop; // offset 0xF0, size 0x1, align 1
    bool m_bLockBlendOnReset; // offset 0xF1, size 0x1, align 1
    bool m_bLockWhenWaning; // offset 0xF2, size 0x1, align 1
    bool m_bAnimEventsAndTagsOnMostWeightedOnly; // offset 0xF3, size 0x1, align 1
    char _pad_00F4[0x4]; // offset 0xF4
};
