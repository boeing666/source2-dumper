#pragma once

class CDSPMixgroupModifier  // sizeof 0x20, align 0x8 (soundsystem) {MGetKV3ClassDefaults}
{
public:
    CUtlString m_mixgroup; // offset 0x0, size 0x8, align 8 | MPropertyDescription MPropertyFriendlyName
    float32 m_flModifier; // offset 0x8, size 0x4, align 4 | MPropertyDescription MPropertyFriendlyName
    float32 m_flModifierMin; // offset 0xC, size 0x4, align 4 | MPropertyDescription MPropertyFriendlyName
    float32 m_flSourceModifier; // offset 0x10, size 0x4, align 4 | MPropertyDescription MPropertyFriendlyName
    float32 m_flSourceModifierMin; // offset 0x14, size 0x4, align 4 | MPropertyDescription MPropertyFriendlyName
    float32 m_flListenerReverbModifierWhenSourceReverbIsActive; // offset 0x18, size 0x4, align 4 | MPropertyDescription MPropertyFriendlyName
    char _pad_001C[0x4]; // offset 0x1C
};
