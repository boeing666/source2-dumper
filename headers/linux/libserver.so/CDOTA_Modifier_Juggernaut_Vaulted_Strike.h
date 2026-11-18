#pragma once

class CDOTA_Modifier_Juggernaut_Vaulted_Strike : public CDOTA_Buff /*0x0*/  // sizeof 0x1B40, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 m_flPredictedTotalTime; // offset 0x1AF8, size 0x4, align 4
    float32 m_flCurrentTimeVert; // offset 0x1AFC, size 0x4, align 4
    VectorWS m_vTargetPos; // offset 0x1B00, size 0xC, align 4
    VectorWS m_vStart; // offset 0x1B0C, size 0xC, align 4
    float32 m_flZDelta; // offset 0x1B18, size 0x4, align 4
    float32 jump_speed; // offset 0x1B1C, size 0x4, align 4
    float32 start_height; // offset 0x1B20, size 0x4, align 4
    float32 jump_attack_radius; // offset 0x1B24, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_hHitEntities; // offset 0x1B28, size 0x18, align 8
};
