#pragma once

class CMotionGraph  // sizeof 0x58, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CParamSpanUpdater m_paramSpans; // offset 0x10, size 0x18, align 8
    CUtlVector< TagSpan_t > m_tags; // offset 0x28, size 0x18, align 8
    CSmartPtr< CMotionNode > m_pRootNode; // offset 0x40, size 0x8, align 8
    int32 m_nParameterCount; // offset 0x48, size 0x4, align 4
    int32 m_nConfigStartIndex; // offset 0x4C, size 0x4, align 4
    int32 m_nConfigCount; // offset 0x50, size 0x4, align 4
    bool m_bLoop; // offset 0x54, size 0x1, align 1
    char _pad_0055[0x3]; // offset 0x55
};
