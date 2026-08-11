#pragma once

class CDOTA_Modifier_Foragers_Kit : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 tree_radius; // offset 0x1A78, size 0x4, align 4
    int32 max_trees; // offset 0x1A7C, size 0x4, align 4
    int32 old_destroy_radius; // offset 0x1A80, size 0x4, align 4
    float32 tree_creation_interval; // offset 0x1A84, size 0x4, align 4
    char _pad_1A88[0x18]; // offset 0x1A88
    ParticleIndex_t m_nStartFXIndex; // offset 0x1AA0, size 0x4, align 255
    char _pad_1AA4[0x4]; // offset 0x1AA4
    CDOTA_Tree* m_pForagingTree; // offset 0x1AA8, size 0x8, align 8
    GameTime_t m_ForageTimer; // offset 0x1AB0, size 0x4, align 255
    GameTime_t m_NextForageTreeTime; // offset 0x1AB4, size 0x4, align 255
};
