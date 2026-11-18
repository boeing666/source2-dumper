#pragma once

class CDOTA_Modifier_Mars_Bulwark_Active : public CDOTA_Buff /*0x0*/  // sizeof 0x1B28, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 redirect_chance; // offset 0x1AF8, size 0x4, align 4
    float32 redirect_range; // offset 0x1AFC, size 0x4, align 4
    float32 forward_angle; // offset 0x1B00, size 0x4, align 4
    float32 side_angle; // offset 0x1B04, size 0x4, align 4
    float32 redirect_speed_penatly; // offset 0x1B08, size 0x4, align 4
    float32 redirect_close_range; // offset 0x1B0C, size 0x4, align 4
    int32 attack_redirection_grace_distance; // offset 0x1B10, size 0x4, align 4
    bool forced_movement_immunity; // offset 0x1B14, size 0x1, align 1
    char _pad_1B15[0x3]; // offset 0x1B15
    Vector m_vFacing; // offset 0x1B18, size 0xC, align 4
    char _pad_1B24[0x4]; // offset 0x1B24
};
