#pragma once

struct AnimationSnapshot_t : public AnimationSnapshotBase_t /*0x0*/  // sizeof 0x120, align 0x10 (animationsystem) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x108]; // offset 0x0
    int32 m_nEntIndex; // offset 0x108, size 0x4, align 4
    char _pad_010C[0x4]; // offset 0x10C
    CUtlString m_modelName; // offset 0x110, size 0x8, align 8
    char _pad_0118[0x8]; // offset 0x118
};
