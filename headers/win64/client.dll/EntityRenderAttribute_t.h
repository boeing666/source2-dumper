#pragma once

struct EntityRenderAttribute_t  // sizeof 0x48, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x30]; // offset 0x0
    CUtlStringToken m_ID; // offset 0x30, size 0x4, align 4
    Vector4D m_Values; // offset 0x34, size 0x10, align 4
    char _pad_0044[0x4]; // offset 0x44
};
