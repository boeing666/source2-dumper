#pragma once

class CNmStateNode::CDefinition : public CNmPoseNode::CDefinition /*0x0*/  // sizeof 0xB0, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    int16 m_nChildNodeIdx; // offset 0x10, size 0x2, align 2
    char _pad_0012[0x6]; // offset 0x12
    CUtlLeanVectorFixedGrowable< CGlobalSymbol, 3 > m_entryEvents; // offset 0x18, size 0x20, align 8
    CUtlLeanVectorFixedGrowable< CGlobalSymbol, 3 > m_executeEvents; // offset 0x38, size 0x20, align 8
    CUtlLeanVectorFixedGrowable< CGlobalSymbol, 3 > m_exitEvents; // offset 0x58, size 0x20, align 8
    CUtlLeanVectorFixedGrowable< CNmStateNode::TimedEvent_t, 1 > m_timedRemainingEvents; // offset 0x78, size 0x18, align 8
    CUtlLeanVectorFixedGrowable< CNmStateNode::TimedEvent_t, 1 > m_timedElapsedEvents; // offset 0x90, size 0x18, align 8
    int16 m_nLayerWeightNodeIdx; // offset 0xA8, size 0x2, align 2
    int16 m_nLayerRootMotionWeightNodeIdx; // offset 0xAA, size 0x2, align 2
    int16 m_nLayerBoneMaskNodeIdx; // offset 0xAC, size 0x2, align 2
    bool m_bIsOffState; // offset 0xAE, size 0x1, align 1
    bool m_bUseActualElapsedTimeInStateForTimedEvents; // offset 0xAF, size 0x1, align 1
};
