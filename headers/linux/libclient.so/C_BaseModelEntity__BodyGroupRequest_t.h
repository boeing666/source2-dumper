#pragma once

struct C_BaseModelEntity::BodyGroupRequest_t  // sizeof 0x18, align 0x8 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    uint32 m_uRequestID; // offset 0x0, size 0x4, align 4
    CUtlStringToken m_nGroupName; // offset 0x4, size 0x4, align 4
    CGlobalSymbol m_sChoiceName; // offset 0x8, size 0x8, align 8
    int32 m_nGroup; // offset 0x10, size 0x4, align 4
    uint16 m_uChoice; // offset 0x14, size 0x2, align 2
    uint16 m_uRefCount; // offset 0x16, size 0x2, align 2
};
