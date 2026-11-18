#pragma once

class CDOTA_Modifier_Nian_Waterball : public CDOTA_Buff /*0x0*/  // sizeof 0x1B30, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 trail_damage_per_second; // offset 0x1AF8, size 0x4, align 4
    int32 trail_damage_radius; // offset 0x1AFC, size 0x4, align 4
    CUtlVector< int32 > m_vFXIndices; // offset 0x1B00, size 0x18, align 8
    CUtlVector< VectorWS > m_vLocations; // offset 0x1B18, size 0x18, align 8
};
