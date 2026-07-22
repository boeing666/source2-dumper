#pragma once

class CNmStateNode::CDefinition : public CNmPoseNode::CDefinition /*0x0*/  // sizeof 0xA8, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xA]; // offset 0x0
    int16 m_nChildNodeIdx; // offset 0xA, size 0x2, align 2
    char _pad_000C[0x4]; // offset 0xC
    CUtlLeanVectorFixedGrowable< CGlobalSymbol, 3 > m_entryEvents; // offset 0x10, size 0x20, align 8
    CUtlLeanVectorFixedGrowable< CGlobalSymbol, 3 > m_executeEvents; // offset 0x30, size 0x20, align 8
    CUtlLeanVectorFixedGrowable< CGlobalSymbol, 3 > m_exitEvents; // offset 0x50, size 0x20, align 8
    CUtlLeanVectorFixedGrowable< CNmStateNode::TimedEvent_t, 1 > m_timedRemainingEvents; // offset 0x70, size 0x18, align 8
    CUtlLeanVectorFixedGrowable< CNmStateNode::TimedEvent_t, 1 > m_timedElapsedEvents; // offset 0x88, size 0x18, align 8
    int16 m_nLayerWeightNodeIdx; // offset 0xA0, size 0x2, align 2
    int16 m_nLayerRootMotionWeightNodeIdx; // offset 0xA2, size 0x2, align 2
    int16 m_nLayerBoneMaskNodeIdx; // offset 0xA4, size 0x2, align 2
    bool m_bIsOffState; // offset 0xA6, size 0x1, align 1
    bool m_bUseActualElapsedTimeInStateForTimedEvents; // offset 0xA7, size 0x1, align 1
};
