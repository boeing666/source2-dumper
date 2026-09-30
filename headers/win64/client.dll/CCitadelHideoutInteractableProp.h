#pragma once

class CCitadelHideoutInteractableProp : public C_DynamicProp /*0x0*/, public IHideoutInteractable /*0x1050*/  // sizeof 0x1140, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x1058]; // offset 0x0
    CEntityIOOutput m_OnStartTouch; // offset 0x1058, size 0x18, align 255
    CEntityIOOutput m_OnStartTouchAll; // offset 0x1070, size 0x18, align 255
    CEntityIOOutput m_OnEndTouch; // offset 0x1088, size 0x18, align 255
    CEntityIOOutput m_OnEndTouchAll; // offset 0x10A0, size 0x18, align 255
    CEntityIOOutput m_OnInteracted; // offset 0x10B8, size 0x18, align 255
    CUtlString m_strInteractLocString; // offset 0x10D0, size 0x8, align 8
    EHideoutButtonInteractStyle m_eInteractStyle; // offset 0x10D8, size 0x4, align 4
    EHideoutButtonAction m_eHideoutAction; // offset 0x10DC, size 0x4, align 4
    float32 m_flInteractDistance; // offset 0x10E0, size 0x4, align 4
    char _pad_10E4[0x4]; // offset 0x10E4
    CUtlString m_strWorldPanelEntity; // offset 0x10E8, size 0x8, align 8
    CUtlString m_strOpacityCurveString; // offset 0x10F0, size 0x8, align 8
    char _pad_10F8[0x48]; // offset 0x10F8
};
