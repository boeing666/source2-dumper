#pragma once

class CDOTA_Modifier_Kez_RaptorDance_Immune : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 invuln_period; // offset 0x1A78, size 0x4, align 4
    int32 magic_resist; // offset 0x1A7C, size 0x4, align 4
};
