#pragma once

class CDOTA_Modifier_Ringmaster_Wheel_Mesmerize_Pull : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 m_fMovementSpeed; // offset 0x1A78, size 0x4, align 4
    CHandle< CDOTA_BaseNPC > m_hPullTarget; // offset 0x1A7C, size 0x4, align 4
    float32 think_interval; // offset 0x1A80, size 0x4, align 4
    float32 mesmerize_radius; // offset 0x1A84, size 0x4, align 4
    float32 k_flCloseThreshold; // offset 0x1A88, size 0x4, align 4
    char _pad_1A8C[0x4]; // offset 0x1A8C
};
