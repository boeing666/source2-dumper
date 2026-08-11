#pragma once

class CCitadelHideoutInteractableProp : public CDynamicProp /*0x0*/, public IHideoutInteractable /*0xCD0*/  // sizeof 0xDE0, align 0x10 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xCF0]; // offset 0x0
    CEntityIOOutput m_OnStartTouch; // offset 0xCF0, size 0x18, align 255
    CEntityIOOutput m_OnStartTouchAll; // offset 0xD08, size 0x18, align 255
    CEntityIOOutput m_OnEndTouch; // offset 0xD20, size 0x18, align 255
    CEntityIOOutput m_OnEndTouchAll; // offset 0xD38, size 0x18, align 255
    CEntityIOOutput m_OnInteracted; // offset 0xD50, size 0x18, align 255
    CUtlString m_strInteractLocString; // offset 0xD68, size 0x8, align 8 | MNetworkEnable
    EHideoutButtonInteractStyle m_eInteractStyle; // offset 0xD70, size 0x4, align 4 | MNetworkEnable
    EHideoutButtonAction m_eHideoutAction; // offset 0xD74, size 0x4, align 4 | MNetworkEnable
    float32 m_flInteractDistance; // offset 0xD78, size 0x4, align 4 | MNetworkEnable
    char _pad_0D7C[0x4]; // offset 0xD7C
    CUtlString m_strWorldPanelEntity; // offset 0xD80, size 0x8, align 8 | MNetworkEnable
    CUtlString m_strOpacityCurveString; // offset 0xD88, size 0x8, align 8 | MNetworkEnable
    char _pad_0D90[0x50]; // offset 0xD90
};
