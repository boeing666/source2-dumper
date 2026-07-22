#pragma once

class CDOTA_Modifier_MuertaReleaseEvent : public CDOTA_Buff /*0x0*/  // sizeof 0x1A60, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    CHandle< CIngameEvent_MuertaReleaseSpring2023 > m_hEvent; // offset 0x1A58, size 0x4, align 4
    char _pad_1A5C[0x4]; // offset 0x1A5C
};
