#pragma once

class CDOTA_Modifier_Zuus_Cloud : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    CountdownTimer m_CloudBoltTimer; // offset 0x1A78, size 0x18, align 8
    float32 cloud_bolt_interval; // offset 0x1A90, size 0x4, align 4
    float32 cloud_radius; // offset 0x1A94, size 0x4, align 4
};
