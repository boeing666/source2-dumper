#pragma once

class CDOTA_Modifier_Tusk_WalrusKick_AirTime : public CDOTA_Buff /*0x0*/  // sizeof 0x1B30, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 hp_threshold; // offset 0x1AF8, size 0x4, align 4
    float32 m_flStartZ; // offset 0x1AFC, size 0x4, align 4
    float32 m_flCurTime; // offset 0x1B00, size 0x4, align 4
    float32 m_flOldPitch; // offset 0x1B04, size 0x4, align 4
    QAngle m_qRotation; // offset 0x1B08, size 0xC, align 4
    int32 m_nRotations; // offset 0x1B14, size 0x4, align 4
    Vector m_vDirection; // offset 0x1B18, size 0xC, align 4
    float32 m_flEndTime; // offset 0x1B24, size 0x4, align 4
    float32 push_length; // offset 0x1B28, size 0x4, align 4
    char _pad_1B2C[0x4]; // offset 0x1B2C
};
