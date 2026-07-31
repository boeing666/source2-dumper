#pragma once

class CDOTA_Modifier_DarkSeer_WallOfReplica : public CDOTA_Buff /*0x0*/  // sizeof 0x1AF8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    Vector m_vWallDirection; // offset 0x1A78, size 0xC, align 4
    Vector m_vWallRight; // offset 0x1A84, size 0xC, align 4
    char _pad_1A90[0x18]; // offset 0x1A90
    CUtlOrderedMap< int32, GameTime_t > m_PreventReplicateTime; // offset 0x1AA8, size 0x28, align 8
    float32 width; // offset 0x1AD0, size 0x4, align 4
    int32 wall_damage; // offset 0x1AD4, size 0x4, align 4
    float32 slow_duration; // offset 0x1AD8, size 0x4, align 4
    int32 replica_damage_incoming; // offset 0x1ADC, size 0x4, align 4
    int32 replica_damage_outgoing; // offset 0x1AE0, size 0x4, align 4
    char _pad_1AE4[0x14]; // offset 0x1AE4
};
