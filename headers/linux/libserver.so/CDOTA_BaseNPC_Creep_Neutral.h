#pragma once

class CDOTA_BaseNPC_Creep_Neutral : public CDOTA_BaseNPC_Creep /*0x0*/  // sizeof 0x1BC8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1BB0]; // offset 0x0
    CountdownTimer m_ThinkTimer; // offset 0x1BB0, size 0x18, align 8
};
