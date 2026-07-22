#pragma once

struct MoodAnimation_t  // sizeof 0x10, align 0x8 (animationsystem) {MGetKV3ClassDefaults MPropertyArrayElementNameKey}
{
    CModelAnimNameWithDeltas m_sName; // offset 0x0, size 0x8, align 8 | MPropertyDescription
    float32 m_flWeight; // offset 0x8, size 0x4, align 4 | MPropertyDescription
    char _pad_000C[0x4]; // offset 0xC
};
