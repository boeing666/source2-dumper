#pragma once

class CMixEnvelopeTrigger : public CMixPropertyBase /*0x0*/  // sizeof 0x38, align 0x8 [vtable] (sounddoc_lib) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    float32 m_flBaseValue; // offset 0x20, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flDestinationValue; // offset 0x24, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flAttackTime; // offset 0x28, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flHoldTime; // offset 0x2C, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flReleaseTime; // offset 0x30, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0034[0x4]; // offset 0x34
};
