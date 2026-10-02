#pragma once

class CCitadelHideoutInteractableProp : public C_DynamicProp /*0x0*/, public IHideoutInteractable /*0x10B0*/  // sizeof 0x11A0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x10B8]; // offset 0x0
    CEntityIOOutput m_OnStartTouch; // offset 0x10B8, size 0x18, align 255
    CEntityIOOutput m_OnStartTouchAll; // offset 0x10D0, size 0x18, align 255
    CEntityIOOutput m_OnEndTouch; // offset 0x10E8, size 0x18, align 255
    CEntityIOOutput m_OnEndTouchAll; // offset 0x1100, size 0x18, align 255
    CEntityIOOutput m_OnInteracted; // offset 0x1118, size 0x18, align 255
    CUtlString m_strInteractLocString; // offset 0x1130, size 0x8, align 8
    EHideoutButtonInteractStyle m_eInteractStyle; // offset 0x1138, size 0x4, align 4
    EHideoutButtonAction m_eHideoutAction; // offset 0x113C, size 0x4, align 4
    float32 m_flInteractDistance; // offset 0x1140, size 0x4, align 4
    char _pad_1144[0x4]; // offset 0x1144
    CUtlString m_strWorldPanelEntity; // offset 0x1148, size 0x8, align 8
    CUtlString m_strOpacityCurveString; // offset 0x1150, size 0x8, align 8
    char _pad_1158[0x48]; // offset 0x1158
};
