#pragma once

class CCitadelHideoutInteractableModifierVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x788, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CUtlString m_strInteractLocString; // offset 0x760, size 0x8, align 8
    EHideoutButtonInteractStyle m_nInteractStyle; // offset 0x768, size 0x4, align 4
    float32 m_flInteractDistance; // offset 0x76C, size 0x4, align 4
    float32 m_flInteractLookRadius; // offset 0x770, size 0x4, align 4
    char _pad_0774[0x4]; // offset 0x774
    CEmbeddedSubclass< CCitadelModifier > m_InteractModifier; // offset 0x778, size 0x10, align 8
};
