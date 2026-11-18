#pragma once

class CDOTA_Modifier_Foragers_Kit : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1B38, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 tree_radius; // offset 0x1AF8, size 0x4, align 4
    int32 max_trees; // offset 0x1AFC, size 0x4, align 4
    int32 old_destroy_radius; // offset 0x1B00, size 0x4, align 4
    float32 tree_creation_interval; // offset 0x1B04, size 0x4, align 4
    char _pad_1B08[0x18]; // offset 0x1B08
    ParticleIndex_t m_nStartFXIndex; // offset 0x1B20, size 0x4, align 255
    char _pad_1B24[0x4]; // offset 0x1B24
    CDOTA_Tree* m_pForagingTree; // offset 0x1B28, size 0x8, align 8
    GameTime_t m_ForageTimer; // offset 0x1B30, size 0x4, align 255
    GameTime_t m_NextForageTreeTime; // offset 0x1B34, size 0x4, align 255
};
