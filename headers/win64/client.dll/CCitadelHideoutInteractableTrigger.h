#pragma once

class CCitadelHideoutInteractableTrigger : public C_BaseTrigger /*0x0*/, public IHideoutInteractable /*0xA78*/  // sizeof 0xAA8, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xA80]; // offset 0x0
    CEntityIOOutput m_OnInteracted; // offset 0xA80, size 0x18, align 255
    CUtlString m_strInteractLocString; // offset 0xA98, size 0x8, align 8 | MNetworkEnable
    EHideoutButtonAction m_eHideoutAction; // offset 0xAA0, size 0x4, align 4 | MNetworkEnable
    char _pad_0AA4[0x4]; // offset 0xAA4
};
