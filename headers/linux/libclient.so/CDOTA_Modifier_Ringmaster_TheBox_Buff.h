#pragma once

class CDOTA_Modifier_Ringmaster_TheBox_Buff : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 leash_radius; // offset 0x1A58, size 0x4, align 4
    VectorWS m_vLeashLocation; // offset 0x1A5C, size 0xC, align 4
    float32 transform_time; // offset 0x1A68, size 0x4, align 4
    float32 invis_duration; // offset 0x1A6C, size 0x4, align 4
    int32 radius; // offset 0x1A70, size 0x4, align 4
    int32 move_speed; // offset 0x1A74, size 0x4, align 4
    int32 magic_resist; // offset 0x1A78, size 0x4, align 4
    int32 grant_flying; // offset 0x1A7C, size 0x4, align 4
    int32 grant_debuff_immunity; // offset 0x1A80, size 0x4, align 4
    float32 slow_resist; // offset 0x1A84, size 0x4, align 4
    float32 m_flDamageTaken; // offset 0x1A88, size 0x4, align 4
    GameTime_t m_flCancelTime; // offset 0x1A8C, size 0x4, align 255
    ParticleIndex_t m_nCircleFXIndex; // offset 0x1A90, size 0x4, align 255
    char _pad_1A94[0x4]; // offset 0x1A94
};
