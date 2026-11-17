#pragma once

struct PermModelInfo_t  // sizeof 0x58, align 0x8 (modellib) {MGetKV3ClassDefaults}
{
    uint32 m_nFlags; // offset 0x0, size 0x4, align 4
    Vector m_vHullMin; // offset 0x4, size 0xC, align 4
    Vector m_vHullMax; // offset 0x10, size 0xC, align 4
    Vector m_vViewMin; // offset 0x1C, size 0xC, align 4
    Vector m_vViewMax; // offset 0x28, size 0xC, align 4
    float32 m_flMass; // offset 0x34, size 0x4, align 4
    Vector m_vEyePosition; // offset 0x38, size 0xC, align 4
    float32 m_flMaxEyeDeflection; // offset 0x44, size 0x4, align 4
    CUtlString m_sSurfaceProperty; // offset 0x48, size 0x8, align 8
    CUtlString m_keyValueText; // offset 0x50, size 0x8, align 8
};
