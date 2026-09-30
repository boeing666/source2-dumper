#pragma once

class CCitadelHideoutInteractableTrigger : public CBaseTrigger /*0x0*/, public IHideoutInteractable /*0x9F0*/  // sizeof 0xA20, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9F8]; // offset 0x0
    CEntityIOOutput m_OnInteracted; // offset 0x9F8, size 0x18, align 255
    CUtlString m_strInteractLocString; // offset 0xA10, size 0x8, align 8
    EHideoutButtonAction m_eHideoutAction; // offset 0xA18, size 0x4, align 4
    char _pad_0A1C[0x4]; // offset 0xA1C
};
