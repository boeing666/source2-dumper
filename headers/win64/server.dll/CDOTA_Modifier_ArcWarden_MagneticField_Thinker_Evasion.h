#pragma once

class CDOTA_Modifier_ArcWarden_MagneticField_Thinker_Evasion : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A8C]; // offset 0x0
    float32 radius; // offset 0x1A8C, size 0x4, align 4
    VectorWS m_vPos; // offset 0x1A90, size 0xC, align 4
    int32 affects_buildings; // offset 0x1A9C, size 0x4, align 4
};
