#pragma once

class CAnimAttachment  // sizeof 0x80, align 0x10 [trivial_dtor] (modellib) {MGetKV3ClassDefaults}
{
public:
    Quaternion[3] m_influenceRotations; // offset 0x0, size 0x30, align 16
    VectorAligned[3] m_influenceOffsets; // offset 0x30, size 0x30, align 16
    int32[3] m_influenceIndices; // offset 0x60, size 0xC, align 4
    float32[3] m_influenceWeights; // offset 0x6C, size 0xC, align 4
    uint8 m_numInfluences; // offset 0x78, size 0x1, align 1
    char _pad_0079[0x7]; // offset 0x79
};
