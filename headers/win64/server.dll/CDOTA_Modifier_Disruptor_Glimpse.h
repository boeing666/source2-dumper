#pragma once

class CDOTA_Modifier_Disruptor_Glimpse : public CDOTA_Buff /*0x0*/  // sizeof 0x1B88, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    VectorWS[18] m_vPositions; // offset 0x1AA8, size 0xD8, align 4
    int32 m_nOldestPosition; // offset 0x1B80, size 0x4, align 4
    char _pad_1B84[0x4]; // offset 0x1B84
};
