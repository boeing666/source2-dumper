#pragma once

struct HUDPanelHasClass_t  // sizeof 0x8, align 0x4 [trivial_ctor trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    uint16 m_nPanelIdIndex; // offset 0x0, size 0x2, align 2
    uint16 m_nClassNameIndex; // offset 0x2, size 0x2, align 2
    EHudPanelClassStatus_t m_eClassStatus; // offset 0x4, size 0x4, align 4
};
