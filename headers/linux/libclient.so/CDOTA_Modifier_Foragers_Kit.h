#pragma once

class CDOTA_Modifier_Foragers_Kit : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 tree_radius; // offset 0x1A58, size 0x4, align 4
    int32 max_trees; // offset 0x1A5C, size 0x4, align 4
    int32 old_destroy_radius; // offset 0x1A60, size 0x4, align 4
    float32 tree_creation_interval; // offset 0x1A64, size 0x4, align 4
    char _pad_1A68[0x18]; // offset 0x1A68
    ParticleIndex_t m_nStartFXIndex; // offset 0x1A80, size 0x4, align 255
    char _pad_1A84[0x4]; // offset 0x1A84
    C_DotaTree* m_pForagingTree; // offset 0x1A88, size 0x8, align 8
    GameTime_t m_ForageTimer; // offset 0x1A90, size 0x4, align 255
    GameTime_t m_NextForageTreeTime; // offset 0x1A94, size 0x4, align 255
};
