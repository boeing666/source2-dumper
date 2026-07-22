#pragma once

struct DynamicVolumeDef_t  // sizeof 0x30, align 0x4 [trivial_dtor] (server) {MGetKV3ClassDefaults}
{
    CHandle< CBaseEntity > m_source; // offset 0x0, size 0x4, align 4
    CHandle< CBaseEntity > m_target; // offset 0x4, size 0x4, align 4
    int32 m_nHullIdx; // offset 0x8, size 0x4, align 4
    VectorWS m_vSourceAnchorPos; // offset 0xC, size 0xC, align 4
    VectorWS m_vTargetAnchorPos; // offset 0x18, size 0xC, align 4
    uint32 m_nAreaSrc; // offset 0x24, size 0x4, align 4
    uint32 m_nAreaDst; // offset 0x28, size 0x4, align 4
    bool m_bAttached; // offset 0x2C, size 0x1, align 1
    char _pad_002D[0x3]; // offset 0x2D
};
