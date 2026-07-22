#pragma once

class CAttachment  // sizeof 0x90, align 0x10 (modellib) {MGetKV3ClassDefaults}
{
public:
    CUtlString m_name; // offset 0x0, size 0x8, align 8
    CUtlString[3] m_influenceNames; // offset 0x8, size 0x18, align 8
    Quaternion[3] m_vInfluenceRotations; // offset 0x20, size 0x30, align 16
    Vector[3] m_vInfluenceOffsets; // offset 0x50, size 0x24, align 4
    float32[3] m_influenceWeights; // offset 0x74, size 0xC, align 4
    bool[3] m_bInfluenceRootTransform; // offset 0x80, size 0x3, align 1
    uint8 m_nInfluences; // offset 0x83, size 0x1, align 1
    bool m_bIgnoreRotation; // offset 0x84, size 0x1, align 1
    char _pad_0085[0xB]; // offset 0x85
};
