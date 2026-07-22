#pragma once

struct IntroCamera_t  // sizeof 0x10, align 0x8 (client) {MGetKV3ClassDefaults MPropertyArrayElementNameKey}
{
    CUtlString m_sCameraEntityName; // offset 0x0, size 0x8, align 8
    float32 m_flDuration; // offset 0x8, size 0x4, align 4
    float32 m_flTransitionTime; // offset 0xC, size 0x4, align 4
};
