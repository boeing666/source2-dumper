#pragma once

class CCitadelHideoutInteractableProp : public CDynamicProp /*0x0*/, public IHideoutInteractable /*0xD50*/  // sizeof 0xE60, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xD70]; // offset 0x0
    CEntityIOOutput m_OnStartTouch; // offset 0xD70, size 0x18, align 255
    CEntityIOOutput m_OnStartTouchAll; // offset 0xD88, size 0x18, align 255
    CEntityIOOutput m_OnEndTouch; // offset 0xDA0, size 0x18, align 255
    CEntityIOOutput m_OnEndTouchAll; // offset 0xDB8, size 0x18, align 255
    CEntityIOOutput m_OnInteracted; // offset 0xDD0, size 0x18, align 255
    CUtlString m_strInteractLocString; // offset 0xDE8, size 0x8, align 8
    EHideoutButtonInteractStyle m_eInteractStyle; // offset 0xDF0, size 0x4, align 4
    EHideoutButtonAction m_eHideoutAction; // offset 0xDF4, size 0x4, align 4
    float32 m_flInteractDistance; // offset 0xDF8, size 0x4, align 4
    char _pad_0DFC[0x4]; // offset 0xDFC
    CUtlString m_strWorldPanelEntity; // offset 0xE00, size 0x8, align 8
    CUtlString m_strOpacityCurveString; // offset 0xE08, size 0x8, align 8
    char _pad_0E10[0x50]; // offset 0xE10
};
