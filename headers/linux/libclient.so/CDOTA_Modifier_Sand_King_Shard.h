#pragma once

class CDOTA_Modifier_Sand_King_Shard : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 shard_move_distance; // offset 0x1A78, size 0x4, align 4
    float32 shard_interval; // offset 0x1A7C, size 0x4, align 4
    VectorWS vLastPos; // offset 0x1A80, size 0xC, align 4
    float32 m_fAccumulatedDistance; // offset 0x1A8C, size 0x4, align 4
};
