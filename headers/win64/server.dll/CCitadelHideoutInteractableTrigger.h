#pragma once

class CCitadelHideoutInteractableTrigger : public CBaseTrigger /*0x0*/, public IHideoutInteractable /*0x8E0*/  // sizeof 0x910, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x8E8]; // offset 0x0
    CEntityIOOutput m_OnInteracted; // offset 0x8E8, size 0x18, align 255
    CUtlString m_strInteractLocString; // offset 0x900, size 0x8, align 8 | MNetworkEnable
    EHideoutButtonAction m_eHideoutAction; // offset 0x908, size 0x4, align 4 | MNetworkEnable
    char _pad_090C[0x4]; // offset 0x90C
};
