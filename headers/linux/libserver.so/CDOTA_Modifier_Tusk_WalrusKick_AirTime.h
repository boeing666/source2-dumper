#pragma once

class CDOTA_Modifier_Tusk_WalrusKick_AirTime : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 hp_threshold; // offset 0x1A78, size 0x4, align 4
    float32 m_flStartZ; // offset 0x1A7C, size 0x4, align 4
    float32 m_flCurTime; // offset 0x1A80, size 0x4, align 4
    float32 m_flOldPitch; // offset 0x1A84, size 0x4, align 4
    QAngle m_qRotation; // offset 0x1A88, size 0xC, align 4
    int32 m_nRotations; // offset 0x1A94, size 0x4, align 4
    Vector m_vDirection; // offset 0x1A98, size 0xC, align 4
    float32 m_flEndTime; // offset 0x1AA4, size 0x4, align 4
    float32 push_length; // offset 0x1AA8, size 0x4, align 4
    char _pad_1AAC[0x4]; // offset 0x1AAC
};
