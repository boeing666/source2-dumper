#pragma once

struct FeEffectDesc_t  // sizeof 0x20, align 0x8 (physicslib) {MGetKV3ClassDefaults}
{
    CUtlString sName; // offset 0x0, size 0x8, align 8
    uint32 nNameHash; // offset 0x8, size 0x4, align 4
    int32 nType; // offset 0xC, size 0x4, align 4
    KeyValues3 m_Params; // offset 0x10, size 0x10, align 8
};
