#pragma once

class CCitadelHideoutInteractableProp : public C_DynamicProp /*0x0*/, public IHideoutInteractable /*0xEF0*/  // sizeof 0xFE0, align 0x10 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xEF8]; // offset 0x0
    CEntityIOOutput m_OnStartTouch; // offset 0xEF8, size 0x18, align 255
    CEntityIOOutput m_OnStartTouchAll; // offset 0xF10, size 0x18, align 255
    CEntityIOOutput m_OnEndTouch; // offset 0xF28, size 0x18, align 255
    CEntityIOOutput m_OnEndTouchAll; // offset 0xF40, size 0x18, align 255
    CEntityIOOutput m_OnInteracted; // offset 0xF58, size 0x18, align 255
    CUtlString m_strInteractLocString; // offset 0xF70, size 0x8, align 8 | MNetworkEnable
    EHideoutButtonInteractStyle m_eInteractStyle; // offset 0xF78, size 0x4, align 4 | MNetworkEnable
    EHideoutButtonAction m_eHideoutAction; // offset 0xF7C, size 0x4, align 4 | MNetworkEnable
    float32 m_flInteractDistance; // offset 0xF80, size 0x4, align 4 | MNetworkEnable
    char _pad_0F84[0x4]; // offset 0xF84
    CUtlString m_strWorldPanelEntity; // offset 0xF88, size 0x8, align 8 | MNetworkEnable
    CUtlString m_strOpacityCurveString; // offset 0xF90, size 0x8, align 8 | MNetworkEnable
    char _pad_0F98[0x48]; // offset 0xF98
};
