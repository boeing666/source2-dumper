#pragma once

class CDOTA_Modifier_CrystalMaiden_CrystalNova_Barrier : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1B10]; // offset 0x0
    int32 m_nAbsorbRemaining; // offset 0x1B10, size 0x4, align 4
    int32 accumulated_value; // offset 0x1B14, size 0x4, align 4
};
