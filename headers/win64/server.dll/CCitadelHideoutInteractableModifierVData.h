#pragma once

class CCitadelHideoutInteractableModifierVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x7C0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CUtlString m_strInteractLocString; // offset 0x798, size 0x8, align 8
    EHideoutButtonInteractStyle m_nInteractStyle; // offset 0x7A0, size 0x4, align 4
    float32 m_flInteractDistance; // offset 0x7A4, size 0x4, align 4
    float32 m_flInteractLookRadius; // offset 0x7A8, size 0x4, align 4
    char _pad_07AC[0x4]; // offset 0x7AC
    CEmbeddedSubclass< CCitadelModifier > m_InteractModifier; // offset 0x7B0, size 0x10, align 8
};
