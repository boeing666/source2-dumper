#pragma once

class CRelativeTransform  // sizeof 0x60, align 0x10 [trivial_dtor] (server) {MGetKV3ClassDefaults}
{
public:
    bool m_bTransformIsWorldSpace; // offset 0x0, size 0x1, align 1
    char _pad_0001[0xF]; // offset 0x1
    CTransform m_transform; // offset 0x10, size 0x20, align 16
    CTransformWS m_transformWS; // offset 0x30, size 0x20, align 16
    CHandle< CBaseEntity > m_hEntity; // offset 0x50, size 0x4, align 4
    char _pad_0054[0xC]; // offset 0x54
};
