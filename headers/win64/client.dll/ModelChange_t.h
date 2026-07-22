#pragma once

struct ModelChange_t  // sizeof 0xE8, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_ModelName; // offset 0x0, size 0xE0, align 8
    int32 m_nPriority; // offset 0xE0, size 0x4, align 4
    char _pad_00E4[0x4]; // offset 0xE4
};
