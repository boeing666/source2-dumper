#pragma once

class CAnimDesc  // sizeof 0x1D0, align 0x10 (animationsystem) {MGetKV3ClassDefaults}
{
public:
    CBufferString m_name; // offset 0x0, size 0x10, align 8
    CAnimDesc_Flag m_flags; // offset 0x10, size 0x8, align 1
    float32 fps; // offset 0x18, size 0x4, align 4
    char _pad_001C[0x4]; // offset 0x1C
    CAnimEncodedFrames m_Data; // offset 0x20, size 0xD8, align 8 | MKV3TransferName
    CUtlVector< CAnimMovement > m_movementArray; // offset 0xF8, size 0x18, align 8
    CTransform m_xInitialOffset; // offset 0x110, size 0x20, align 16
    CUtlVector< CAnimEventDefinition > m_eventArray; // offset 0x130, size 0x18, align 8
    CUtlVector< CAnimActivity > m_activityArray; // offset 0x148, size 0x18, align 8
    CUtlVector< CAnimLocalHierarchy > m_hierarchyArray; // offset 0x160, size 0x18, align 8
    float32 framestalltime; // offset 0x178, size 0x4, align 4
    Vector m_vecRootMin; // offset 0x17C, size 0xC, align 4
    Vector m_vecRootMax; // offset 0x188, size 0xC, align 4
    char _pad_0194[0x4]; // offset 0x194
    CUtlVector< Vector > m_vecBoneWorldMin; // offset 0x198, size 0x18, align 8
    CUtlVector< Vector > m_vecBoneWorldMax; // offset 0x1B0, size 0x18, align 8
    CAnimSequenceParams m_sequenceParams; // offset 0x1C8, size 0x8, align 4
};
