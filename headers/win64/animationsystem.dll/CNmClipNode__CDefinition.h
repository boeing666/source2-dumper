#pragma once

class CNmClipNode::CDefinition : public CNmClipReferenceNode::CDefinition /*0x0*/  // sizeof 0x48, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    int16 m_nPlayInReverseValueNodeIdx; // offset 0x10, size 0x2, align 2
    int16 m_nResetTimeValueNodeIdx; // offset 0x12, size 0x2, align 2
    bool m_bSampleRootMotion; // offset 0x14, size 0x1, align 1
    bool m_bAllowLooping; // offset 0x15, size 0x1, align 1
    int16 m_nDataSlotIdx; // offset 0x16, size 0x2, align 2
    CUtlVectorFixedGrowable< CGlobalSymbol, 2 > m_graphEvents; // offset 0x18, size 0x28, align 8
    float32 m_flSpeedMultiplier; // offset 0x40, size 0x4, align 4
    int32 m_nStartSyncEventOffset; // offset 0x44, size 0x4, align 4
};
