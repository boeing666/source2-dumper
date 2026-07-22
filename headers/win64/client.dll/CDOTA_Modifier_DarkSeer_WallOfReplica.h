#pragma once

class CDOTA_Modifier_DarkSeer_WallOfReplica : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    Vector m_vWallDirection; // offset 0x1A58, size 0xC, align 4
    Vector m_vWallRight; // offset 0x1A64, size 0xC, align 4
    char _pad_1A70[0x18]; // offset 0x1A70
    CUtlOrderedMap< int32, GameTime_t > m_PreventReplicateTime; // offset 0x1A88, size 0x28, align 8
    float32 width; // offset 0x1AB0, size 0x4, align 4
    int32 wall_damage; // offset 0x1AB4, size 0x4, align 4
    float32 slow_duration; // offset 0x1AB8, size 0x4, align 4
    int32 replica_damage_incoming; // offset 0x1ABC, size 0x4, align 4
    int32 replica_damage_outgoing; // offset 0x1AC0, size 0x4, align 4
    char _pad_1AC4[0x14]; // offset 0x1AC4
};
