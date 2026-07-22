#pragma once

class CRelativeTransform  // sizeof 0x30, align 0x10 [trivial_dtor] (server) {MGetKV3ClassDefaults}
{
public:
    CTransform m_transform; // offset 0x0, size 0x20, align 16
    CHandle< CBaseEntity > m_hEntity; // offset 0x20, size 0x4, align 4
    char _pad_0024[0xC]; // offset 0x24
};
