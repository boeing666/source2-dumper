#pragma once

class CDOTA_Modifier_Ringmaster_Wheel_Mesmerize_Pull : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 m_fMovementSpeed; // offset 0x1AF8, size 0x4, align 4
    CHandle< CDOTA_BaseNPC > m_hPullTarget; // offset 0x1AFC, size 0x4, align 4
    float32 think_interval; // offset 0x1B00, size 0x4, align 4
    float32 mesmerize_radius; // offset 0x1B04, size 0x4, align 4
    float32 k_flCloseThreshold; // offset 0x1B08, size 0x4, align 4
    char _pad_1B0C[0x4]; // offset 0x1B0C
};
