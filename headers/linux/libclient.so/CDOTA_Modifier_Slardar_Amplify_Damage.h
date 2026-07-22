#pragma once

class CDOTA_Modifier_Slardar_Amplify_Damage : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 armor_reduction; // offset 0x1A58, size 0x4, align 4
    float32 scepter_delay; // offset 0x1A5C, size 0x4, align 4
    int32 undispellable; // offset 0x1A60, size 0x4, align 4
    float32 puddle_radius; // offset 0x1A64, size 0x4, align 4
    float32 puddle_duration; // offset 0x1A68, size 0x4, align 4
    VectorWS m_vecLastPuddle; // offset 0x1A6C, size 0xC, align 4
    CHandle< C_BaseEntity > m_hPuddle; // offset 0x1A78, size 0x4, align 4
    int32 m_nSelfBuffSerialNumber; // offset 0x1A7C, size 0x4, align 4
};
