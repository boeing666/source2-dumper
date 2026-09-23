#pragma once

struct AnimationDecodeDebugDump_t  // sizeof 0x20, align 0x8 (animationsystem) {MGetKV3ClassDefaults}
{
    AnimationProcessingType_t m_processingType; // offset 0x0, size 0x4, align 4
    char _pad_0004[0x4]; // offset 0x4
    CUtlVector< AnimationDecodeDebugDumpElement_t > m_elems; // offset 0x8, size 0x18, align 8
};
