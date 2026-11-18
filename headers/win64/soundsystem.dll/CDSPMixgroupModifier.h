#pragma once

class CDSPMixgroupModifier  // sizeof 0x20, align 0x8 (soundsystem) {MGetKV3ClassDefaults}
{
public:
    CUtlString m_mixgroup; // offset 0x0, size 0x8, align 8 | MPropertyDescription MPropertyFriendlyName
    float32 m_flListenerReverbFar; // offset 0x8, size 0x4, align 4 | MPropertyDescription MPropertyFriendlyName
    float32 m_flListenerReverbNear; // offset 0xC, size 0x4, align 4 | MPropertyDescription MPropertyFriendlyName
    float32 m_flSourceReverbFar; // offset 0x10, size 0x4, align 4 | MPropertyDescription MPropertyFriendlyName
    float32 m_flSourceReverbNear; // offset 0x14, size 0x4, align 4 | MPropertyDescription MPropertyFriendlyName
    float32 m_flListenerReverbModifierWhenSourceReverbIsActive; // offset 0x18, size 0x4, align 4 | MPropertyDescription MPropertyFriendlyName
    float32 m_flTailVolume; // offset 0x1C, size 0x4, align 4 | MPropertyDescription MPropertyFriendlyName
};
