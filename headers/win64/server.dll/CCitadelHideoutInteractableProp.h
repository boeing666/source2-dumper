#pragma once

class CCitadelHideoutInteractableProp : public CDynamicProp /*0x0*/, public IHideoutInteractable /*0xDA0*/  // sizeof 0xEB0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xDC0]; // offset 0x0
    CEntityIOOutput m_OnStartTouch; // offset 0xDC0, size 0x18, align 255
    CEntityIOOutput m_OnStartTouchAll; // offset 0xDD8, size 0x18, align 255
    CEntityIOOutput m_OnEndTouch; // offset 0xDF0, size 0x18, align 255
    CEntityIOOutput m_OnEndTouchAll; // offset 0xE08, size 0x18, align 255
    CEntityIOOutput m_OnInteracted; // offset 0xE20, size 0x18, align 255
    CUtlString m_strInteractLocString; // offset 0xE38, size 0x8, align 8
    EHideoutButtonInteractStyle m_eInteractStyle; // offset 0xE40, size 0x4, align 4
    EHideoutButtonAction m_eHideoutAction; // offset 0xE44, size 0x4, align 4
    float32 m_flInteractDistance; // offset 0xE48, size 0x4, align 4
    char _pad_0E4C[0x4]; // offset 0xE4C
    CUtlString m_strWorldPanelEntity; // offset 0xE50, size 0x8, align 8
    CUtlString m_strOpacityCurveString; // offset 0xE58, size 0x8, align 8
    char _pad_0E60[0x50]; // offset 0xE60
};
