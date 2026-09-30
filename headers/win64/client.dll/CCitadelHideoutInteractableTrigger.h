#pragma once

class CCitadelHideoutInteractableTrigger : public C_BaseTrigger /*0x0*/, public IHideoutInteractable /*0xC98*/  // sizeof 0xCC8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xCA0]; // offset 0x0
    CEntityIOOutput m_OnInteracted; // offset 0xCA0, size 0x18, align 255
    CUtlString m_strInteractLocString; // offset 0xCB8, size 0x8, align 8
    EHideoutButtonAction m_eHideoutAction; // offset 0xCC0, size 0x4, align 4
    char _pad_0CC4[0x4]; // offset 0xCC4
};
