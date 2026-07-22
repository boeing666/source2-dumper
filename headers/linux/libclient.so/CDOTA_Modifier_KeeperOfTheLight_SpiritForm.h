#pragma once

class CDOTA_Modifier_KeeperOfTheLight_SpiritForm : public CDOTA_Buff /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    ParticleIndex_t m_nFXIndexA; // offset 0x1A58, size 0x4, align 255
    int32 movement_speed; // offset 0x1A5C, size 0x4, align 4
    int32 cast_range; // offset 0x1A60, size 0x4, align 4
    bool m_bDidSwapSpiritForm; // offset 0x1A64, size 0x1, align 1
    char _pad_1A65[0x3]; // offset 0x1A65
};
