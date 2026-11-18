#pragma once

class CDOTA_Modifier_Dawnbreaker_Solar_Guardian_AirTime : public CDOTA_Buff /*0x0*/  // sizeof 0x1B40, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 m_flStartZ; // offset 0x1AF8, size 0x4, align 4
    float32 m_flCurTime; // offset 0x1AFC, size 0x4, align 4
    Vector m_vDirection; // offset 0x1B00, size 0xC, align 4
    float32 m_flEndTime; // offset 0x1B0C, size 0x4, align 4
    CHandle< CBaseEntity > m_hThinker; // offset 0x1B10, size 0x4, align 4
    VectorWS m_vCurrentTargetPosition; // offset 0x1B14, size 0xC, align 4
    VectorWS m_vDesiredTargetPosition; // offset 0x1B20, size 0xC, align 4
    VectorWS m_vStartPosition; // offset 0x1B2C, size 0xC, align 4
    int32 airtime_scepter_movement_speed; // offset 0x1B38, size 0x4, align 4
    char _pad_1B3C[0x4]; // offset 0x1B3C
};
