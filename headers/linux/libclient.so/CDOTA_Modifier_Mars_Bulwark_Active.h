#pragma once

class CDOTA_Modifier_Mars_Bulwark_Active : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 redirect_chance; // offset 0x1A58, size 0x4, align 4
    float32 redirect_range; // offset 0x1A5C, size 0x4, align 4
    float32 forward_angle; // offset 0x1A60, size 0x4, align 4
    float32 side_angle; // offset 0x1A64, size 0x4, align 4
    float32 redirect_speed_penatly; // offset 0x1A68, size 0x4, align 4
    float32 redirect_close_range; // offset 0x1A6C, size 0x4, align 4
    int32 attack_redirection_grace_distance; // offset 0x1A70, size 0x4, align 4
    bool forced_movement_immunity; // offset 0x1A74, size 0x1, align 1
    char _pad_1A75[0x3]; // offset 0x1A75
    int32 m_nPoseParameterWE; // offset 0x1A78, size 0x4, align 4
    int32 m_nPoseParameterNS; // offset 0x1A7C, size 0x4, align 4
    float32 m_flLastPoseX; // offset 0x1A80, size 0x4, align 4
    float32 m_flLastPoseY; // offset 0x1A84, size 0x4, align 4
    int32 m_nLastMaxDirection; // offset 0x1A88, size 0x4, align 4
    VectorWS m_vLastOrigin; // offset 0x1A8C, size 0xC, align 4
    GameTime_t m_flLastGameTime; // offset 0x1A98, size 0x4, align 255
    Vector m_vFacing; // offset 0x1A9C, size 0xC, align 4
};
