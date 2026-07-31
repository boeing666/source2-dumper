#pragma once

class CDOTA_Modifier_Juggernaut_Vaulted_Strike_Slashes : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 start_offset_distance; // offset 0x1A78, size 0x4, align 4
    float32 slash_start_radius; // offset 0x1A7C, size 0x4, align 4
    float32 slash_end_radius; // offset 0x1A80, size 0x4, align 4
    float32 slash_projectile_speed; // offset 0x1A84, size 0x4, align 4
    float32 end_distance; // offset 0x1A88, size 0x4, align 4
    int32 m_nCurrentSlashes; // offset 0x1A8C, size 0x4, align 4
    int32 max_slashes; // offset 0x1A90, size 0x4, align 4
    char _pad_1A94[0x4]; // offset 0x1A94
};
