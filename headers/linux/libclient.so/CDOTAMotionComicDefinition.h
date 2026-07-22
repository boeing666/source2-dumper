#pragma once

class CDOTAMotionComicDefinition  // sizeof 0x28, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    float32 m_flDefaultMinimumTimePerFrame; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x4]; // offset 0xC
    CUtlVector< CDOTAMotionComicFrame* > m_vecFrames; // offset 0x10, size 0x18, align 8
};
