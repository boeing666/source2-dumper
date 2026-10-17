#pragma once

class CDOTA_Modifier_Item_Consecrated_Wraps_Auto_Barrier : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 barrier_per_stack; // offset 0x1AA8, size 0x4, align 4
    int32 m_nAbsorbRemaining; // offset 0x1AAC, size 0x4, align 4
    int32 m_nMaxAbsorb; // offset 0x1AB0, size 0x4, align 4
    char _pad_1AB4[0x4]; // offset 0x1AB4
};
