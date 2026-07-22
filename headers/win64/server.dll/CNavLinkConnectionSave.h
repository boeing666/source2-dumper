#pragma once

class CNavLinkConnectionSave  // sizeof 0x2C, align 0xFF [trivial_dtor] (server)
{
public:
    CHandle< CBaseEntity > m_hLinkEntity; // offset 0x0, size 0x4, align 4 | MNotSaved
    uint32 m_nLinkArea; // offset 0x4, size 0x4, align 4
    NavAreaSave_t m_otherArea; // offset 0x8, size 0x8, align 255
    Vector m_vPortalALocal; // offset 0x10, size 0xC, align 4
    Vector m_vPortalBLocal; // offset 0x1C, size 0xC, align 4
    bool m_bIsEntry; // offset 0x28, size 0x1, align 1
    char _pad_0029[0x3]; // offset 0x29
};
