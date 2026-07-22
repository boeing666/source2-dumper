#pragma once

struct NavAreaSave_t  // sizeof 0x8, align 0xFF [trivial_dtor] (server)
{
    CHandle< CBaseEntity > m_hDeformable; // offset 0x0, size 0x4, align 4
    uint32 m_nOtherAreaIdGlobalOrLocal; // offset 0x4, size 0x4, align 4
};
