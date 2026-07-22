#pragma once

struct CollisionDetailLayerInfo_t::Name_t  // sizeof 0x10, align 0x8 (physicslib) {MGetKV3ClassDefaults MVDataRoot}
{
    CUtlStringToken m_nNameToken; // offset 0x0, size 0x4, align 4
    char _pad_0004[0x4]; // offset 0x4
    CUtlString m_sNameString; // offset 0x8, size 0x8, align 8
};
