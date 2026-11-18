#pragma once

struct PhysBlockHeader_t  // sizeof 0x28, align 0x8 (client) {MGetKV3ClassDefaults}
{
    int32 nSaved; // offset 0x0, size 0x4, align 4
    char _pad_0004[0x4]; // offset 0x4
    uint64 pWorldObject; // offset 0x8, size 0x8, align 8
    CUtlVector< PhysWorldBody_t > m_WorldBodies; // offset 0x10, size 0x18, align 8
};
