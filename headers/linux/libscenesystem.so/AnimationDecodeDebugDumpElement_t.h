#pragma once

struct AnimationDecodeDebugDumpElement_t  // sizeof 0x70, align 0x8 (scenesystem) {MGetKV3ClassDefaults}
{
    int32 m_nEntityIndex; // offset 0x0, size 0x4, align 4
    char _pad_0004[0x4]; // offset 0x4
    CUtlString m_modelName; // offset 0x8, size 0x8, align 8
    CUtlVector< CUtlString > m_poseParams; // offset 0x10, size 0x18, align 8
    CUtlVector< CUtlString > m_decodeOps; // offset 0x28, size 0x18, align 8
    CUtlVector< CUtlString > m_internalOps; // offset 0x40, size 0x18, align 8
    CUtlVector< CUtlString > m_decodedAnims; // offset 0x58, size 0x18, align 8
};
