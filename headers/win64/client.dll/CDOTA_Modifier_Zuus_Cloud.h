#pragma once

class CDOTA_Modifier_Zuus_Cloud : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    CountdownTimer m_CloudBoltTimer; // offset 0x1AA8, size 0x18, align 8
    float32 cloud_bolt_interval; // offset 0x1AC0, size 0x4, align 4
    float32 cloud_radius; // offset 0x1AC4, size 0x4, align 4
};
