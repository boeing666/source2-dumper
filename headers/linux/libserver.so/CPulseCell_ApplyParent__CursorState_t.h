#pragma once

struct CPulseCell_ApplyParent::CursorState_t  // sizeof 0x8, align 0x4 [trivial_dtor] (server) {MGetKV3ClassDefaults}
{
    CHandle< CBaseEntity > m_hParentEntity; // offset 0x0, size 0x4, align 4
    CHandle< CBaseEntity > m_hChildEntity; // offset 0x4, size 0x4, align 4
};
