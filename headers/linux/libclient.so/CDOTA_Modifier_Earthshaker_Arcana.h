#pragma once

class CDOTA_Modifier_Earthshaker_Arcana : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 m_nComboCount; // offset 0x1A78, size 0x4, align 4
    float32 m_flComboWindow; // offset 0x1A7C, size 0x4, align 4
    float32 m_flComboDisplayInterval; // offset 0x1A80, size 0x4, align 4
    float32 m_flDamageDone; // offset 0x1A84, size 0x4, align 4
};
